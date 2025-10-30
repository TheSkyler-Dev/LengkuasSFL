### Why `LengkuasSFL`?
LengkuasSFL (Lengkuas Sensor Filter Language) is a refernce to the Greater Galangal root and, beyond the "SFL" suffix, has no direct technical link to programming.

### Style Guidelines
There are style recommendations for coding in LengkuasSFL, such as using four spaces for indentation, instead of tab. Semicolons may be omitted at the end of a statement, but adding them anyway is acceptable. Semicolons are required in `for`loop expressions. It is highly recommended to keep spaces between values or variables and operators. Function names should use `camelCase` or `Snake_Case`, variables can use `PascalCase`, `Kebab-Case` or ideally `lowercase`. Variables must be initialized upon declaration

### Data Types and Variables
`LengkuasSFL` has two kinds of data types: Primitives and sensor stream. Primitives are your usual data types:

| Primitives             | Special Types           |
| ---------------------- | ----------------------- |
| String (`str`)         | Sensor Stream `sstream` |
| Boolean (`bool`)       |                         |
| Integer (`i32`, `i64`) |                         |
| Float (`f32`, `f64`)   |                         |

Variables have no special declaration keyword, while constants use the standard `const` keyword. Variable declaration should look something like this:
```LengkuasSFL
f64 MyVar = 9.81
const f64 pi = 3.141593
```
Variables in `LengkuasSFL` are always nullable. Since variables must be initialized upon declaration, you'd use the `nil` value for a variable with an initial null value, which prevents the variable from being used anywhere until it gets a non-null value. This cannot be done with constants. Sensor streams (`sstream`) are special variables that give a sensor address or data pins connected to a sensor a name that can be called more easily. These enable you to handle sensor data streams more gracefully by eliminating the need to specify the address or data pin of a sensor each time you want to pass its data stream to a function or array.
Usage:
```LengkuasSFL
sstream MySensor = <sensor address or connected GPIO pin>
```
Example using a GPIO pin:
```LengkuasSFL
sstream MySensor = GPIO_PIN_17
```
Example using an I2C address:
```LengkuasSFL
sstream MySensor = 0x21
```


### Basic I/O
Basic I/O is essential to take any input and output text, especially for debugging. LengkuasSFL uses `msgIn()` for input and `msgOut()` for this. The text body (whatever is placed in the parentheses) of `msgOut()` automatically goes into a newline at the end. Template literals are also supported by placing a dollar sign (`$`) in front of a variable or function name. Expressions are inserted by wrapping them in curly braces preceded by a dollar sign. String literals (used as the output of `msgOut()`) must always be enclosed in double quotes `"`, single quotes are reserved for punctuation within string literals. Comments use the tilde (`~`) prefix, double tilde (`~~`) for multi-line comments.

Example usage:
```LengkuasSFL
msgIn(var)
msgOut("Hello World!")
msgOut("Variable var has value $var")
msgOut("Math expression 9 + 10 = ${9 + 10}")
```

### Data Structures 
LengkuasSFL only has two data structures as of now: Arrays and Dictionaries. They can store a bunch of data at once. Arrays are simply declared by adding the `arr` keyword in the declaration. Something like this:
```LengkuasSFL
f64 arr MyArray = [0.5, 0.49, ...]
```
It's important to note that higher dimensional arrays may be added in a later version of LengkuasSFL. 
Arrays can be null initially, which would make them unusable until data is pushed to the array. The first push to an array initialized with `nil` always overwrites the `nil` position, which would always be at index 0, since arrays in LengkuasSFL are zero-based. New data is pushed to an array with `push()`, and deleted with `pop()`. Here's an example:
```LengkuasSFL
sstream MySensor = 0x21
f64 arr MyArr = [nil]
MyArr.push(MySensor) ~pushing a sensor stream to myArr

~deleting from an array
MyArr.pop([<index>])
```
Todeclare a dictionary, which stores data as key-value pairs and is useful for associating multiple sensors to their respective sensor IDs and sensor/filter function configuration.
these use the `dict` keword and key-value-pairs are enclosed in curly braces. for a dictionary to take data of any type, the `any` keyword is used. Something like this:
```LengkuasSFL
f64 dict MyDict = {"sensor_A_ID": nil, "sensor_B_ID": nil}
```
or for filter configurations:
```LengkuasSFL
any dict config = {"window_size": 5, "window_type": "samples"}
```

### Basic Arithmetic and Logic Operators
LengkuasSFL includes a straightforward, basic set of arithmetic operators and functions for commonly used arithmetic operations, as well as the basic logic operators.

**Table of Available Arithmetic Operators**

| Operator | Description    |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |
| `%`      | Modulo         |

**Table of Available Logic Operators**

| Operator | Description |
| -------- | ----------- |
| `&&`     | AND         |
| `\|\|`   | OR          |
| `!`      | NOT         |

**Table of functions for commonly used arithmetic**

| Function | Description                                                                |
| -------- | -------------------------------------------------------------------------- |
| `avg()`  | Calculate an average from the last second of the data stream passed to it. |
| `rnd()`  | Rounds numbers to nth decimal position (adjustable)                        |

### Control Flow
LengkuasSFL has your usual control flow structures: `while` loops, `do/while` loops and `for` loops. And both `if/else` and `switch` (declared with the `sw`keyword) statements. These are used no differently from other programming languages, but are delimited with `endwhile`, `endfor`, `endif` and `endsw`:
**While loop**
```LengkuasSFL
while(<condition>):
    ~some code here
endwhile
```
**Do/While**
```LengkuasSFL
do:
    ~code here, executes at least once before condition is checked
enddo while(<condition>)
```
**For loop**
```LengkuasSFL
for(i32 i = 0; i < len(MyArray); i++):
    ~code here
endfor
```
**If/Else**
```LengkuasSFL
if(<condition>):
    ~some code here
elif(<condition>):
    ~different code here
else:
    ~more code
endif
```
**Switch**
```LengkuasSFL
sw(<checking variable>):
    case 1
    {
        ~case 1 code
    }
    case 2
    {
        ~case 2 code
    }
    default
    {
        ~default case code
    }
endsw
```
### Functions
Functions in LengkuasSFL are a core component for writing modular, reusable code. A LengkuasSFL program must always have one main function, which is the standard entry point. The return type is specified after the function name with the arrow operator (`->`). Valid return types are all primitives, `sstream` and  `none`. The return keyword in LengkuasSFL is `ret`. To declare a function, you use the `fun` keyword, and terminate it with 'endfun`.
In LengkuasSFL, functions are declared as follows:
```LengkuasSFL
fun myFunc(<args>)->i32:
    ~some code here
    ret 0
endfun

```

### Asynchronous Operations
LengkuasSFL, by its very nature of its specific domain, of course supports asynchronous execution. To start an asynchronous block, you use the `desync` keyword and the `resync` keyword to end an asynchronous block. The equivalent to the `await` keyword is `expect` in LengkuasSFL. Here's an example:
```LengkuasSFL
desync myAsyncFunc(MySensor) -> f64:
    ~async logic here
    ret FilteredData
resync
expect f64 res = sensorFilter()
```
Important note: Asynchronous blocks are a distinct type of functions in LengkuasSFL!

### Error Handling
Error handling in LengkuasSFL is fundamentally no different from other programming languages, using the classic `try...catch` statement. Here's an example:
```LengkuasSFL
try:
    ~some code here
catch:
    throw(errMsg("Error message here", prefix -> ecode()))
endtry
```

### Pointer References
Pointer references play a crucial role in memory management, debugging and low-level memory references to variables and data structures. LengkuasSFL uses the caret (`^`) for pointers.
