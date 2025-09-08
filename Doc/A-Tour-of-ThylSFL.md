### Why `Thyl`?
Thyl is a creative abbreviation of the animal the language was named after, the Thylacine (also known as the Tasmanian Tiger). The name doesn't actually have any relevant connection to the programming language itself, though the full name of it is considered to be "ThylSFL" (Thyl Sensor Filter Language).

### Style Guidelines
There are style recommendations for coding in Thyl, such as using four spaces for indentation, instead of tab. Semicolons may be omitted, but adding them anyway is acceptable. It is highly recommended to keep spaces between values or variables and operators. Function names should use `camelCase` or `Snake_Case`, variables can use `PascalCase`, `Kebab-Case` or ideally `lowercase`. Variables must be initialized upon declaration

### Data Types and Variables
`Thyl` has one kind of data types: Primitives. Primitives are your usual data types:

| Primitives             |
| ---------------------- |
| String (`str`)         |
| Boolean (`bool`)       |
| Integer (`i32`, `i64`) |
| Float (`f32`, `f64`)   |
Variables have no special declaration keyword, while constants use the standard `const` keyword. Variable declaration should look something like this:
```thyl
f64 MyVar = 9.81
const f64 pi = 3.141593
```
Variables in `Thyl` are always nullable. Since variables must be initialized upon declaration, you'd use the `nil` value for a variable with an initial null value, which prevents the variable from being used anywhere until it gets a non-null value. This cannot be done with constants.

### Basic I/O
Basic I/O is essential to take any input and output text, especially for debugging. Thyl uses `msgIn()` for input and `msgOut()` for this. The text body (whatever is placed in the parentheses) of `msgOut()` automatically goes into a newline at the end. Template literals are also supported by placing a dollar sign (`$`) in front of a variable or function name. Expressions are inserted by wrapping them in curly braces preceded by a dollar sign. String literals (used as the output of `msgOut()`) must always be enclosed in double quotes `"`, single quotes are reserved for punctuation within string literals. Comments use the tilde (`~`) prefix, double tilde (`~~`) for multi-line comments.

Example usage:
```thyl
msgIn(var)
msgOut("Hello World!")
msgOut("Variable var has value $var")
msgOut("Math expression 9 + 10 = ${9 + 10}")
```

### Data Structures 
Thyl only has one data structure as of now: Arrays. They can store a bunch of data at once. Arrays are simply declared by adding the `arr` keyword in the declaration. Something like this:
```thyl
f64 arr MyArray = [0.5, 0.49, ...]
```
It's important to note that hire dimensional arrays may be added in a later version of Thyl.

### Basic Arithmetic and Logic Operators
Thyl includes a straightforward, basic set of arithmetic operators and functions for commonly used arithmetic operations, as well as the basic logic operators.

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
Thyl has your usual control flow structures: `while` loops, `do/while` loops and `for` loops. And both `if/else` and `switch` (declared with the `sw`keyword) statements. These are used no differently from other programming languages, but are delimited with `endwhile`, `endfor`, `endif` and `endsw`:
**While loop**
```thyl
while(i32 i = 0; i < len(MyArray); i+):
    ~iterator code here, 'i+' is Thyl's equivalent of 'i++' in C++
endwhile
```
**Do/While**
```thyl
do:
    ~code here, executes at least once before condition is checked
while(<condition>)
```
**For loop**
```thyl
for(i in range 0..10):
    ~code here
endfor
```
**If/Else**
```thyl
if(<condition>):
    ~some code here
elif(<condition>):
    ~different code here
else:
    ~more code
endif
```
**Switch**
```thyl
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
Functions in Thyl are a core component for writing modular, reusable code. A Thyl program must always have one main function, which is the standard entry point. The return type is specified after the function name with the arrow operator (`->`). Valid return types are: `i32`, `i64`, `none`. The return keyword in Thyl is `ret`. To declare a function, you use the `fun` keyword, and terminate it with 'endfun`.
In Thyl, functions are declared as follows:
```thyl
fun myFunc(<args>)->i32:
    ~some code here
    ret 0
endfun

```

