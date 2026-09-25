# ft_printf

This project now lives in **[42-Libft-C](https://github.com/fasharif/42-Libft-C/tree/main/ft_printf)**, as part of my C library, with tests on Linux and macOS. This repository is kept as it was, for reference.

`ft_printf` re-implements `printf` for `%c %s %p %d %i %u %x %X %%`. The version in libft also fixes a portability bug: the `va_list` was passed by value to a helper function, which breaks on ARM64 processors such as Apple Silicon.
