# Contributing to LengkuasSFL

First off, thanks for taking the time to contribute! 🎉

The following is a set of guidelines for contributing to LengkuasSFL. These are mostly guidelines, not rules. Use your best judgment, and feel free to propose changes to this document in a pull request.

## Code of Conduct

This project and everyone participating in it is governed by our Code of Conduct. By participating, you are expected to uphold this code. Please report unacceptable behavior through GitHub issues.

## Development Setup

### Prerequisites

Before contributing, ensure you have:

- **CMake** 3.14 or later
- **C++17 compatible compiler**:
  - **Windows**: Clang 21.1.0+ (recommended) or MSVC 2019+
  - **Linux/macOS**: GCC 8+ or Clang 8+
- **Git** (for dependency management and version control)
- **Internet connection** (for first build to download ANTLR4 runtime)
- **ANTLR4** (for grammar development - Java version for generating C++ code)

### Setting Up Your Development Environment

1. **Fork the repository** on GitHub

2. **Clone your fork**:
   ```bash
   git clone https://github.com/YOUR_USERNAME/LengkuasSFL.git
   cd LengkuasSFL
   ```

3. **Add the upstream repository**:
   ```bash
   git remote add upstream https://github.com/TheSkyler-Dev/LengkuasSFL.git
   ```

4. **Build the C++ parser** (see [README.md](README.md) for detailed instructions):
   ```bash
   cd Grammar/Parser/src
   cmake -B build -G Ninja .
   cmake --build build
   ```

5. **Verify the build**:
   ```bash
   # Windows
   .\build\bin\LengkuasDemoParser.exe
   
   # Linux/macOS
   ./build/bin/LengkuasDemoParser
   ```

### Project Structure

```
LengkuasSFL/
├── Grammar/
│   ├── LengkuasSFL.g4          # Main ANTLR4 grammar file
│   └── Parser/
│       └── src/
│           ├── CMakeLists.txt   # Build configuration
│           ├── LengkuasSFL*.h   # Generated parser headers
│           ├── LengkuasSFL*.cpp # Generated parser implementation
│           └── LengkuasDemoParser.cpp # Demo application
├── Doc/                        # Documentation
├── README.md                   # Project overview and build instructions
└── CONTRIBUTING.md             # This file
```

## How Can I Contribute?

### Reporting Bugs

This section guides you through submitting a bug report for LengkuasSFL. Following these guidelines helps maintainers and the community understand your report, reproduce the behavior, and find related reports.

#### Before Submitting A Bug Report

- **Check the [issues](https://github.com/TheSkyler-Dev/LengkuasSFL/issues)** for existing issues to avoid duplicates
- **Update to the latest version** to see if the issue persists
- **Try to reproduce the issue** with minimal test cases
- **Check if it's a grammar issue** vs. a parser implementation issue

#### Submitting A Bug Report

- **Use a clear and descriptive title** for the issue
- **Describe the exact steps to reproduce the problem** in detail
- **Provide minimal code examples** that demonstrate the issue
- **Include your environment details**:
  - Operating system and version
  - Compiler and version
  - CMake version
  - Build configuration used
- **Describe expected vs. actual behavior**
- **Include build logs, error messages, or parser output** if relevant
- **Add labels** like `bug`, `grammar`, `parser`, `build-system` as appropriate

### Suggesting Enhancements

This section guides you through submitting enhancement suggestions for LengkuasSFL, including new language features, parser improvements, and build system enhancements.

#### Before Submitting An Enhancement

- **Check the [issues](https://github.com/TheSkyler-Dev/LengkuasSFL/issues)** for existing suggestions
- **Review the project philosophy** in README.md to ensure alignment
- **Consider the scope**: Is this a language feature, parser enhancement, or tooling improvement?

#### Submitting An Enhancement

- **Use a clear and descriptive title** for the suggestion
- **Provide a detailed description** of the proposed enhancement
- **Explain the motivation**: Why would this be useful for sensor filtering/TinyML use cases?
- **Include code examples** showing the proposed syntax or usage
- **Consider implementation complexity** and mention if you're willing to contribute
- **Add labels** like `enhancement`, `language-feature`, `grammar`, `parser`

### Contributing to the ANTLR4 Grammar

Contributions to the LengkuasSFL ANTLR4 grammar (`Grammar/LengkuasSFL.g4`) are welcome! This section outlines specific guidelines for modifying or extending the language grammar.

#### Grammar Development Workflow

1. **Modify the grammar**: Edit `Grammar/LengkuasSFL.g4`
2. **Regenerate parser code**: Use ANTLR4 to generate new C++ parser files
   ```bash
   # Install ANTLR4 (Java version) if not already installed
   antlr4 -Dlanguage=Cpp -visitor -listener -o Grammar/Parser/src/ Grammar/LengkuasSFL.g4
   ```
3. **Build and test**: Follow the build instructions to ensure everything compiles
4. **Test with demo parser**: Verify your changes work with sample code

#### Guidelines for Grammar Contributions

- **Understand the existing grammar**: Study `LengkuasSFL.g4` to maintain consistency
- **Follow ANTLR4 best practices**: See [ANTLR4 documentation](https://github.com/antlr/antlr4/blob/master/doc/index.md)
- **Use clear rule names**: Follow the existing naming conventions
- **Add comments**: Document complex rules and language design decisions
- **Consider sensor/TinyML use cases**: Ensure changes align with the project's domain focus
- **Test thoroughly**: Test both valid and invalid syntax cases

#### Before Submitting Grammar Changes

- **Validate grammar**: Ensure ANTLR4 can parse your grammar without errors
- **Regenerate all parser files**: Update the C++ generated code
- **Build successfully**: Ensure the parser compiles with your changes
- **Test with examples**: Verify the grammar works with sample LengkuasSFL code
- **Update documentation**: If syntax changes affect users, update docs

### Contributing to the C++ Parser Implementation

Contributions to the C++ parser implementation, build system, or demo applications are welcome.

#### Parser Implementation Guidelines

- **Follow C++17 standards**: Use modern C++ features appropriately
- **Maintain cross-platform compatibility**: Test on Windows, Linux, and macOS
- **Use static linking**: Follow the existing ANTLR4CPP_STATIC approach
- **Update CMakeLists.txt**: If adding new files or dependencies
- **Test build systems**: Ensure both Ninja and Make generators work

#### Build System Contributions

- **Use CMake best practices**: Follow modern CMake conventions
- **Maintain FetchContent**: Keep ANTLR4 dependency management working
- **Test on multiple platforms**: Verify builds work across systems
- **Document changes**: Update build instructions if needed

### Pull Requests

#### Development Workflow

1. **Create a feature branch** from `main`:
   ```bash
   git checkout -b feature/your-feature-name
   ```

2. **Make your changes** following the guidelines above

3. **Test your changes thoroughly**:
   ```bash
   cd Grammar/Parser/src
   cmake -B build -G Ninja .
   cmake --build build
   ./build/bin/LengkuasDemoParser  # Test the demo
   ```

4. **Commit your changes** with clear, descriptive messages

5. **Push to your fork** and create a pull request

#### Before Submitting A Pull Request

- **Keep PRs focused**: One feature or bug fix per PR
- **Build successfully**: Ensure your code compiles without errors
- **Test on your platform**: Verify functionality with the demo parser
- **Follow coding standards**: Maintain consistency with existing code
- **Update documentation**: If your changes affect user-facing functionality
- **Rebase on latest main**: Ensure your branch is up to date

#### Submitting A Pull Request

- **Use a descriptive title**: Clearly summarize what the PR does
- **Reference related issues**: Use "Fixes #123" or "Closes #456"
- **Explain the changes**: Describe what you changed and why
- **Include testing information**: How did you test your changes?
- **Add screenshots/examples**: If relevant, show before/after behavior
- **Request appropriate reviewers**: Tag maintainers if needed

## Style Guides

### Git Commit Messages

We use [Conventional Commits](https://www.conventionalcommits.org/) format:

```
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]
```

#### Commit Types

- **feat**: New feature for the user
- **fix**: Bug fix for the user
- **docs**: Documentation changes
- **grammar**: Changes to ANTLR4 grammar files
- **parser**: Changes to C++ parser implementation
- **build**: Build system or dependency changes
- **ci**: CI/CD pipeline changes
- **refactor**: Code restructuring without changing functionality
- **test**: Adding or updating tests
- **chore**: Maintenance tasks

#### Examples

```
feat(grammar): add support for ternary operator
fix(parser): resolve memory leak in token processing
docs: update build instructions for Windows
grammar: add async block syntax support
build: upgrade ANTLR4 runtime to version 4.13.2
```

#### Guidelines

- **Use imperative mood**: "Add feature" not "Added feature"
- **Limit first line to 72 characters**
- **Reference issues**: Use "Fixes #123" in footer
- **Explain why, not what**: Body should explain motivation

### Coding Standards

#### C++ Code

- **Follow C++17 standards**: Use modern C++ features appropriately
- **Use consistent naming**: Follow existing conventions in the codebase
- **Add comments**: Explain complex logic and design decisions
- **Include headers**: Use proper `#include` guards and organization
- **Handle errors**: Use appropriate exception handling

#### ANTLR4 Grammar

- **Lexer rules**: Use UPPERCASE names (e.g., `IDENTIFIER`, `NUMBER`)
- **Parser rules**: Use camelCase names (e.g., `variableDeclaration`, `expression`)
- **Add comments**: Document complex grammar rules
- **Group related rules**: Organize grammar logically
- **Use meaningful names**: Rule names should be self-documenting

#### CMake Code

- **Use modern CMake**: Target-based approach with `target_*` functions
- **Maintain compatibility**: Support CMake 3.14+
- **Add comments**: Explain complex build logic
- **Test cross-platform**: Ensure builds work on Windows, Linux, macOS

## License

By contributing to LengkuasSFL, you agree that your contributions will be licensed under the [Apache 2.0 License](https://github.com/TheSkyler-Dev/LengkuasSFL/blob/main/LICENSE).
