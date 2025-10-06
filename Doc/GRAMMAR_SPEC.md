# Grammar Specifications for LengkuasSFL

This Document outlines the grammar rules for the `LengkuasSFL` programming language, derived from the [Documentation](https://github.com/TheSkyler-Dev/LengkuasSFL/blob/main/Doc/A-Tour-of-LengkuasSFL.md) and [Grammar file](https://github.com/TheSkyler-Dev/LengkuasSFL/blob/main/Grammar/LengkuasSFL.g4).

---

# Overview
The `LengkuasSFL` (`Lengkuas Sensor Filter Language`) language is a domain-specific programming language designed for sensor preprocessing in embedded systems and other sensor systems. It emphasizes are concise, easily readable and fine-grained high-level syntax, the ability to both compile for production or be interpreted for debugging, as well as reference counting memory management. 

# Lexical Structure
## Tokens
1. **Keywords**:
   - `fun`, `endfun`, `if`, `elif`, `else`, `endif`, `sw`, `case`, `endsw`, `while`, `endwhile`, `do`, `for`, `endfor`, `try`, `catch`, `endtry`, `throw`, `desync`, `resync`, `expect`, `true`, `false`, `nil`

2. **Operators**:
   - Arithmetic: `+`, `-`, `*`, `/`, `%`
   - Logical: `&&`, `||`, `!`
   - Assignment: `=`
   - Increment/Decrement: `++`, `--`
   - Pointer/Reference: `^`

3. **Delimiters**:
   - `;`, `:`, `,`, `.`, `(`, `)`, `{`, `}`, `[`, `]`

4. **Literals**:
   - Numbers: Integers (`i32`, `i64`) and floating-point numbers (`f32`, `f64`)
   - Strings: Enclosed in double (`"`) quotes
   - Booleans: `true`, `false`
   - Special values: `nil`

5. **Identifiers**:
   - Must start with a letter or underscore (`_`) and can include letters, digits, and underscores.

6. **Comments**:
   - Single-line: `~`
   - Multi-line: `~~`

7. **Whitespace**:
   - Ignored except as a separator.
