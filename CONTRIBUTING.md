# Contributing

Thanks for contributing to Archimedes! Your help is much appreciated! Here are some guidelines for contributing:

## Table of content

- [Contributing](#contributing)
  - [Table of content](#table-of-content)
  - [How to contribute](#how-to-contribute)
  - [General](#general)
  - [C/C++](#cc)
    - [C/C++ Naming Conventions](#cc-naming-conventions)
    - [C/C++ Formatting](#cc-formatting)
  - [Python](#python)
    - [Python Naming Conventions](#python-naming-conventions)
    - [Python Formatting](#python-formatting)
  - [Changelog](#changelog)
  - [Commit Messages](#commit-messages)

## How to contribute

You must own a GitHub account in order to contribute to this project. Once you have one, you will need to fork the repository. Then, you must clone your fork locally and once done, commit the changes with the naming conventions set below and push the changes to your fork. Finally, create a pull request one the main repository for us to evaluate your work. If everything works fine and respect the following guidelines, congratulations! you are now a contributor!

## General

- The indent size is 2 space wide.
- Avoid trailing whitespaces
- All files should end with a trailing blank line

## C/C++

### C/C++ Naming Conventions

### C/C++ Formatting

## Python

### Python Naming Conventions

> [!NOTE]
> For naming conventions, please refer to [PEP8](https://peps.python.org/pep-0008/#naming-conventions)

Modules:

- Modules/packages should have short lowercase names
- Modules written in C/C++ should have a leading underscore

Classes:

- Class names should use CamelCase
- Exceptions should use the suffix "Error" if the exception is actually an error

Variables:

- Variable names should use snake_case
- Constants should be all UPPERCASE

Functions:

- Function names should all use snake_case
- Function parameters should be given a type
- If a function returns something, define the return type when defining the function

### Python Formatting

> [!NOTE]
> For formatting, please refer to [PEP8](https://peps.python.org/pep-0008/)

Here's a quick summary of PEP8

- Spaces are the preferred indentation method
- Limit all lines to a maximum of 79 characters
- Surround top-level function and class definitions with 2 blank lines
- Method definition inside a class are surrounded by a single blank line
- Always use UTF-8 characters except when testing
- All identifiers must be ASCII
- Use english for naming things
- Imports from different libraries must be on separate lines
- Imports from the same library must be on the same line
- Imports are always at the top of the file and are split into three groups in this order:
  - Standard libraries
  - Third-party libraries
  - Local libraries
- Use static types (Mypy is great)

> [!NOTE]
> The recommended formatter is `black`
> <br> To sort imports easily, use `isort`
> <br> To check static types, use `mypy`

## Changelog

For the changelog, please use the format provided by [Keep A Changelog](keepachangelog.org)

## Commit Messages

Please use this format when editing your commit message

```txt
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]
```

Here are the types that can be used:

| Type     | Description                                                                   |
| -------- | ----------------------------------------------------------------------------- |
| feat     | Introduces a new feature to the codebase.                                     |
| fix      | Patches a bug.                                                                |
| docs     | Documentation only changes.                                                   |
| style    | Changes that do not affect the meaning of the code (white-space, formatting). |
| refactor | Code changes that neither fix a bug nor add a feature.                        |
| perf     | Code changes that improve performance.                                        |
| test     | Adding missing tests or correcting existing tests.                            |
| build    | Changes that affect the build system or external dependencies.                |
| ci       | Changes to CI configuration files and scripts.                                |
| chore    | Other changes that don't modify src or test files.                            |
