# Dynamic memory allocation in C

Academic UTFPR exercise using employee records to practice structures, pointers and dynamic memory allocation.

## Exercise features

- Menu for adding, removing and listing employees.
- Records with name, role, employment relationship and date.
- Memory-release functions.

## Structure

- `empresa.h`: types and interface.
- `empresa.c`: data operations.
- `main.c`: interaction flow.

## Compile

```bash
gcc -Wall -Wextra main.c empresa.c -o funcionarios
```

## Scope

Historical academic assessment code. Review input handling and pointer lifetimes before use. Data is held in memory; compilation and execution need validation in the target environment.
