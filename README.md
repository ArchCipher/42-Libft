# <p align="center"> Libft - Custom C Library </p>

**42 Project | Foundation Library**  
**Objective:** Implement a custom C library containing essential utility functions, replicating standard libc functions and adding additional helper functions for use across 42 projects.

---

## Overview

**Libft** is the foundation library for all subsequent 42 projects. This project involves reimplementing standard C library functions from scratch, understanding their internal mechanics, and building additional utility functions commonly needed in system programming.

---

## Skills Demonstrated

- **Memory Management:** Understanding pointer arithmetic, memory allocation, and buffer manipulation
- **String Manipulation:** Character-by-character processing, string concatenation, and parsing
- **Data Structures:** Linked list implementation and manipulation
- **Low-Level Programming:** Direct memory access, bit manipulation, and system calls
- **Code Organization:** Modular design, header file management, and library compilation

---

## Functions Implemented

### Standard Libc Functions

**Memory Functions:**
- `memset` - Fill memory with a constant byte
- `memcpy` - Copy memory area
- `memmove` - Copy memory area (handles overlapping)
- `memccpy` - Copy memory until character found
- `memchr` - Locate character in memory
- `memcmp` - Compare memory areas
- `bzero` - Zero out memory
- `calloc` - Allocate and zero-initialize memory

**String Functions:**
- `strlen` - Calculate string length
- `strlcpy` - Copy string with size limit
- `strlcat` - Concatenate string with size limit
- `strchr` - Locate character in string
- `strrchr` - Locate last occurrence of character
- `strnstr` - Locate substring in string
- `strncmp` - Compare strings up to n characters
- `atoi` - Convert string to integer
- `strdup` - Duplicate string
- `strcspn` - Find length of initial segment not matching reject set
- `strspn` - Find length of initial segment matching accept set
- `strtok_r` - Thread-safe string tokenizer

**Character Classification:**
- `isalpha` - Check if character is alphabetic
- `isdigit` - Check if character is digit
- `isalnum` - Check if character is alphanumeric
- `isascii` - Check if character is ASCII
- `isspace` - Check if character is whitespace
- `isprint` - Check if character is printable
- `toupper` - Convert to uppercase
- `tolower` - Convert to lowercase

### Non Libc Functions

**String Manipulation:**
- `substr` - Extract substring from string
- `strjoin` - Concatenate two strings
- `strtrim` - Trim characters from string
- `split` - Split string into array of strings
- `strmapi` - Apply function to each character
- `striteri` - Apply function with index to each character

**Number Conversion:**
- `itoa` - Convert integer to string

**File Descriptor Output:**
- `putchar_fd` - Write character to file descriptor
- `putstr_fd` - Write string to file descriptor
- `putendl_fd` - Write string with newline to file descriptor
- `putnbr_fd` - Write number to file descriptor

**Linked List Functions**
- `lstnew` - Create new list node
- `lstadd_front` - Add node to beginning of list
- `lstadd_back` - Add node to end of list
- `lstsize` - Count nodes in list
- `lstlast` - Get last node in list
- `lstdelone` - Delete single node
- `lstclear` - Clear entire list
- `lstiter` - Iterate over list
- `lstmap` - Create new list by applying function

---

## Technical Highlights

### Memory Management
- Implemented safe memory operations with proper bounds checking
- Handled edge cases for NULL pointers and zero-length operations
- Used `malloc` and `free` correctly to prevent memory leaks

### String Processing
- Implemented efficient string algorithms without using standard library
- Handled special cases: empty strings, NULL pointers, overlapping memory
- Created flexible parsing functions for complex string operations

### Linked List Implementation
- Built dynamic data structure from scratch
- Implemented efficient insertion/deletion operations
- Created iterator and mapping functions for list manipulation

---

## Compilation & Usage

```bash
# Build the library
make

# Build with bonus functions
make bonus

# Clean object files
make clean

# Clean everything including library
make fclean

# Rebuild
make re
```

The library is compiled into `libft.a`, which can be linked with other projects:

```bash
gcc your_program.c -L. -lft -o your_program
```

---

## Testing

The project has been tested with:
- **[libftTester](https://github.com/Tripouille/libftTester)** - Comprehensive test suite with personalized leaks checking (mac) and valgrind (linux)
- **[libft-unit-test](https://github.com/alelievr/libft-unit-test)** - Unit testing framework with detailed test results
- **my_tests:** Custom test suite for base cases

---

## Key Learnings

- **Pointer Arithmetic:** Deep understanding of memory addresses and pointer manipulation
- **String Handling:** Manual implementation of string operations reveals edge cases
- **Memory Safety:** Importance of bounds checking and NULL pointer handling
- **Code Reusability:** Building a library for use across multiple projects
- **Makefile Mastery:** Understanding compilation, linking, and library creation

---

*This library serves as the foundation for all subsequent 42 projects, demonstrating fundamental C programming skills and system-level understanding.*
