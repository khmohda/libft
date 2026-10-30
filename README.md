*This project has been created as part of the 42 curriculum by khmohda.*

# Libft

## Description

Libft is a project from the 42 curriculum in which I recreate a collection of standard C library functions and develop additional functions to build my own C library.

The main goal of this project, in my opinion, is to understand how each function really works, rather than simply knowing how to use it. By implementing these functions myself, I learn how they handle data, manage memory, manipulate strings, and deal with different situations, including edge cases.

This project also introduces linked lists, which help me understand how to create, connect, manipulate, and free dynamically allocated data structures.

The library is written in C and can be reused in future C projects.

## Instructions

### Requirements

To compile and use this library, you need:

- A C compiler, such as `cc`.
- `make`.
- The `libft.h` header file provided with the project.

### Compilation

Clone or download the repository, then navigate to its root directory.

Compile the library using:

```bash
make
```

This should compile the source files and create the static library `libft.a`, according to the project's Makefile.

### Makefile commands

The Makefile provides the following commands:

| Command | Description |
|---|---|
| `make` | Compiles the library and creates `libft.a`. |
| `make clean` | Removes the compiled object files (`.o`). |
| `make fclean` | Removes the object files and the compiled library (`libft.a`). |
| `make re` | Rebuilds the library from scratch. |

### Using the library

To use Libft in another C project:

1. Include `libft.h` in your source file.
2. Compile your source file and link it with `libft.a`.
3. Run the resulting executable.

For example, create a file named `main.c`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Length: %zu\n", ft_strlen("Hello, 42!"));
    return (0);
}
```

Compile and link it from the directory containing `libft.a` and `libft.h`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

Expected output:

```text
Length: 10
```

This example assumes that `libft.a` has already been built successfully and that `ft_strlen` is included in the library.

## Library Contents

The library contains standard C library reimplementations, additional string and memory utilities, output functions, and linked-list functions.

### 1. Character checking and conversion

These functions check character values or convert letters between uppercase and lowercase.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an uppercase or lowercase letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is a letter or a digit. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a value represents a printable character. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. Memory functions

These functions manipulate memory byte by byte, allowing data to be initialized, copied, searched, and compared.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a specified number of bytes between memory areas that do not overlap. |
| `ft_memmove` | Copies bytes safely when the source and destination memory areas overlap. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |

### 3. String functions

These functions help measure, search, compare, copy, modify, and create strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string, excluding the null terminator. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string into a destination buffer while respecting its size. |
| `ft_strlcat` | Appends a string to a destination buffer while respecting its size. |
| `ft_strnstr` | Searches for a substring within a limited part of another string. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |
| `ft_substr` | Creates a substring from a given starting position and maximum length. |
| `ft_strjoin` | Creates a new string by joining two strings. |
| `ft_strtrim` | Creates a copy of a string with specified characters removed from its beginning and end. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string using its index. |

### 4. Number conversion and memory allocation

These functions convert values, allocate memory, and manage dynamically created data.

| Function | Description |
|---|---|
| `ft_atoi` | Converts the initial numeric portion of a string into an integer. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_calloc` | Allocates memory for an array and initializes its bytes to zero. |

### 5. Output functions

These functions write characters, strings, and numbers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

File descriptors commonly used with these functions include:

- `0`: Standard input.
- `1`: Standard output.
- `2`: Standard error.

### 6. Linked-list functions

The linked-list functions use the `t_list` structure defined in `libft.h`. Each node contains a pointer to its content and a pointer to the next node.

Unlike arrays, linked lists store elements in separate nodes connected through pointers.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a supplied deletion function. |
| `ft_lstclear` | Deletes all nodes in a list and frees their content. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

These functions help develop an understanding of pointers, dynamic memory allocation, structures, and memory management.

## Technical Choices

- **Language:** C.
- **Library format:** Static library (`libft.a`).
- **Header file:** `libft.h`, which contains the required declarations and linked-list definitions.
- **Compilation:** A Makefile using `cc` and the flags `-Wall -Wextra -Werror`.
- **Memory management:** Functions that allocate memory must be used carefully, with appropriate error handling and memory release.

The project focuses on implementing functions manually to understand their behavior instead of relying entirely on existing library implementations.

## Resources

The following resources support learning and understanding the concepts used in this project.

- **42 Libft subject:** The project requirements and function specifications provided by 42.
- **Linux man pages:** Documentation explaining the behavior, parameters, and return values of standard C library functions.  
  https://man7.org/linux/man-pages/
- **GeeksforGeeks:** Articles and examples covering C programming, pointers, strings, memory allocation, and linked lists.  
  https://www.geeksforgeeks.org/
- **YouTube tutorials:** Video explanations used to clarify difficult concepts and understand how different C functions and data structures work.
- **Peer learning:** Discussions and explanations shared with other students to compare approaches, solve problems, and improve understanding.

### AI Usage

AI tools were used as a learning aid during this project, mainly to:

- Understand the expected behavior of C functions.
- Clarify difficult concepts and questions related to pointers, memory, strings, and linked lists.
- Explore edge cases and understand why certain conditions or techniques are necessary.
- Help identify and understand possible errors in code.

AI was used to support understanding rather than replace the learning process. It is important to verify explanations, test implementations, and understand the code independently.

## Learning Experience

One of the most important lessons I learned during this project is that **you should not rely on AI to fix every bug for you**.

Debugging your own code is an essential part of learning. When you investigate a problem yourself, you develop a better understanding of how your function works and why it behaves in a particular way.

Understanding the reason behind every condition, variable, pointer, and operation helps you predict edge cases and identify the causes of errors, including segmentation faults.

Testing is equally important. A function may work for a normal input but fail with an empty string, a null terminator, a zero size, overlapping memory areas, or an allocation failure.

For that reason, I believe it is important to:

- Understand the purpose of every part of your code.
- Ask why a particular technique or condition is necessary.
- Test edge cases, not only normal inputs.
- Debug errors independently before looking for outside help.
- Use documentation and other resources to verify your understanding.

The goal is not only to make the code work, but also to understand **why it works** and how to handle situations where it might fail.

---

*This README describes the project and the functions listed in the repository. It should be updated if the implementation or project requirements change.*