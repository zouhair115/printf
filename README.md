*This project has been created as part of the 42 curriculum by anarbia.*

# ft_printf

## Description

The **ft_printf** project is a recreation of the standard C library function `printf()`.

The goal is to understand variadic functions in C using `va_list`, `va_start`, `va_arg`, and `va_end`, while learning how formatted output works.

The project reproduces the following conversions:

- `%c` — Prints a character.
- `%s` — Prints a string.
- `%p` — Prints a pointer address in hexadecimal.
- `%d` — Prints a decimal integer.
- `%i` — Prints an integer.
- `%u` — Prints an unsigned decimal integer.
- `%x` — Prints a number in lowercase hexadecimal.
- `%X` — Prints a number in uppercase hexadecimal.
- `%%` — Prints a percent sign.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This generates the static library:

```bash
libftprintf.a
```

Other Makefile commands:

```bash
make clean    # Remove object files
make fclean   # Remove object files and library
make re       # Recompile everything
```

### Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -o program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 1337);
    return (0);
}
```
### Data Structures

The project mainly uses:

- **`va_list`**: Stores and accesses the variable arguments passed to `ft_printf`.
- **Format string (`const char *`)**: Contains the text and conversion specifiers.
- **Character arrays**: Represent strings and numerical bases.
- **Integer counters**: Track the number of characters printed.

No complex data structures are required because the format string is processed sequentially.

## Resources

### Documentation and References

(https://en.cppreference.com/w/c/variadic.html)
- **Libft Subject (42):** [Official Project PDF](https://cdn.intra.42.fr/pdf/pdf/218702/en.subject.pdf) — Official project requirements, mandatory functions, and submission instructions.
- [stdarg.h — Variable Arguments]

### AI Usage

AI tools were used as a learning assistant during the development of this project.

They were used for:

- Understanding variadic functions and how `va_list`, `va_start`, `va_arg`, and `va_end` work.
- Understanding the architecture of `ft_printf` and the responsibilities of individual functions.
- Debugging compilation errors and understanding C concepts.
