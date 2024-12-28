## Libft

Libft is an essential project in the 42 school curriculum designed to help students deeply understand C programming by creating a personal library of fundamental functions.<br>
### Project Objectives<br>

The primary goals of the Libft project include:<br>
&#x2022; Recreating standard C library functions<br>
&#x2022; Learning how core programming functions work internally<br>
&#x2022; Creating a versatile toolkit for future C programming assignments<br>
### Functional Breakdown<br>

#### Part 1: Libc Function Reimplementations <br>
The project requires students to recreate standard library functions with the 'ft_' prefix, including:<br>
&#x2022; Character manipulation: ft_isalpha, ft_isdigit, ft_toupper<br>
&#x2022; String operations: ft_strlen, ft_strchr, ft_strncmp<br>
&#x2022; Memory management: ft_memset, ft_memcpy, ft_calloc<br>

#### Part 2: Additional Utility Functions<br>
Beyond standard library functions, the project includes creating additional utility functions such as:<br>
&#x2022; ft_substr: Create substrings<br>
&#x2022; ft_strjoin: Concatenate strings<br>
&#x2022; ft_split: Split strings based on a delimiter<br>
&#x2022; ft_itoa: Convert integers to strings<br>

### Technical Requirements<br>
Written in pure C:<br>
Compile with -Wall -Wextra -Werror flags<br>
&#x2022; No global variables allowed<br>
&#x2022; Memory must be properly managed<br>
&#x2022; Create a static library (libft.a)<br>
### Makefile Overview <br>
The Makefile is a crucial component of the Libft project, automating the compilation process and ensuring consistent builds. Here are key aspects of the Makefile:
Required Rules
The Makefile must include at least the following rules:
&#x2022; $(NAME): Compiles the library.<br>
&#x2022; all: Default rule, typically calls $(NAME).<br>
&#x2022; clean: Removes object files.<br>
&#x2022; fclean: Removes object files and the compiled library.<br>
&#x2022; re: Performs a full recompilation (usually fclean followed by all).<br>

### Compilation Flags
The Makefile must compile source files with the following flags:<br>
&#x2022; makefile<br>
<pre>CFLAGS = -Wall -Wextra -Werror</pre><br>
These flags enable warnings and treat them as errors, ensuring code quality.

### No Relinking
The Makefile must be designed to avoid relinking, meaning it should only recompile files that have been modified.
Library Creation<br>
The ar command must be used to create the library (libft.a). The use of libtool is explicitly forbidden.

### Learning Outcomes
By completing Libft, students gain:<br>
&#x2022; Deep understanding of C function implementations.<br>
&#x2022; Memory management skills.<br>
&#x2022; Custom library creation techniques.<br>
&#x2022; Preparation for future programming challenges.<br><br>
The project serves as a crucial foundation for a student's C programming journey, providing a personalized toolkit that can be expanded and refined throughout their programming education.
