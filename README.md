*This project has been created as a part of the curriculum for 42 students by gialtami.*

# PrintF

## Description
The goal of this project is to learn about *variadic functions* in C and master string formatting, precision handling, and memory output streams.
The ft_printf function mimics the exact behavior of the original printf from the `<stdio.h>` library. It parses a format string and prints the formatted output to the standard output, returning the total number of characters printed.

## Instructions
To compile the library, navigate to the repository root and run the following commands:
1. `git clone https://github.com/Gisaltamir/PrintF.git PrintF` - Clone the repository.
2. `cd PrintF` - Move into the cloned repository.
3. `make` - Create the library **libftprintf.a**.

### To clean
`make fclean` - This will clean and delete the **.o files** and the **libftprintf.a** library.

### To include the library
Add `#include "libftprintf.h"`, compile your project together with the library: `cc *your-file.c* libftprintf.a`

## Resources
Artificial Intelligence tools were used only as learning support during the development of this project.

AI assistance was used for:
- Understanding specific C concepts and function behaviors
- Improving README structure and documentation writing

## Technical Implementation & Decisions

### Algorithm Choice: Recursive Descent & Single-Pass Parsing

For this implementation, I chose a *Single-Pass Parsing* algorithm combined with *Recursion* for numeric conversions.

- **Single-Pass Parsing:** The function iterates through the format string exactly once. When it encounters a % character, it triggers a dispatcher (`ft_check_for_type`) to handle the conversion. This ensures $O(n)$ time complexity, where $n$ is the length of the string.
- **Recursive Conversion:** For int, unsigned int, and hexadecimal conversions, I implemented a recursive approach. Recursion is the most elegant way to handle numbers in C without using large temporary buffers or malloc. It naturally handles the "reverse order" problem (where you calculate the last digit first but must print the first digit first) by using the *Call Stack* to store digits until the base case is reached.

### Data Structures & Memory
- **Variadic Arguments (va_list):** Since the number and types of arguments are unknown at compile time, I used the stdarg.h macros. This allows the function to dynamically access the stack for arguments.
- **Static Memory Allocation:** No dynamic memory (malloc) was used for the conversions. All processing happens on the stack using local variables and recursion. This prevents potential memory leaks and reduces the function's overhead, making it faster and safer for low-level system calls.
- **Dispatch Table Logic:** Instead of a complex data structure, I used a clean if-else if chain (acting as a dispatcher). Given the limited number of specifiers required by the subject (9 in total), an if-else chain is more memory-efficient and readable than a hash map or a function pointer array.

## Function Description

### Supported Conversions

| Specifier | Description |
| :---: | :--- |
| %c | Prints a single character. |
| %s | Prints a string (handles NULL pointers safely by printing (null)). |
| %p | Prints a void * pointer argument in hexadecimal format (handles NULL as (nil)). |
| %d | Prints a decimal (base 10) number. |
| %i | Prints an integer in base 10. |
| %u | Prints an unsigned decimal (base 10) number. |
| %x | Prints a number in hexadecimal (base 16) lowercase format. |
| %X | Prints a number in hexadecimal (base 16) uppercase format. |
| %% | Prints a literal percent sign. |
