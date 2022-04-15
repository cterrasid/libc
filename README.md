# libft
_This project is about coding a C library, based on some general purpose functions that I'll be able to use in my future 42 projects._

For detailed information, see the [**subject of this project**](https://github.com/cterrasid/libft/blob/master/libft.en.subject.pdf).

## Standard functions
### Functions from `<ctype.h>` library
* [`ft_isascii`](https://github.com/cterrasid/libft/blob/master/ft_isascii.c)			- Checks whether the argument passed can be represented as a valid ASCII character.
* [`ft_isalnum`](https://github.com/cterrasid/libft/blob/master/ft_isalnum.c)			- Checks whether the argument passed is an alphanumeric character or not.
* [`ft_isalpha`](https://github.com/cterrasid/libft/blob/master/ft_isalpha.c)			- Checks whether the argument passed is an alphabetic character or not.
* [`ft_isdigit`](https://github.com/cterrasid/libft/blob/master/ft_isdigit.c)			- Checks whether the argument passed is an numeric character or not.
* [`ft_isprint`](https://github.com/cterrasid/libft/blob/master/ft_isprint.c)			- Checks whether the argument passed is a printable character or not.
* [`ft_tolower`](https://github.com/cterrasid/libft/blob/master/ft_tolower.c)			- Takes an uppercase alphabet and convert it to a lowercase character.
* [`ft_toupper`](https://github.com/cterrasid/libft/blob/master/ft_toupper.c)			- Takes an lowercase alphabet and convert it to an uppercase character.

### Functions from `<stdlib.h>` library
* [`ft_atoi`](https://github.com/cterrasid/libft/blob/master/ft_atoi.c)		  - Transform the first numeric characters of a string in numbers.
* [`ft_calloc`](https://github.com/cterrasid/libft/blob/master/ft_calloc.c)	- Allocates memory for an array, replacing every position of memory with zero ('0').

### Functions from `<strings.h>` library
* [`ft_bzero`](https://github.com/cterrasid/libft/blob/master/ft_bzero.c)		  - Erase bytes of a memory area, by replacing it with zeros.
* [`ft_memset`](https://github.com/cterrasid/libft/blob/master/ft_memset.c)		- Fills the first 'n' bytes of a string with a character.
* [`ft_memchr`](https://github.com/cterrasid/libft/blob/master/ft_memchr.c)		- Find the first occurrence of a character in a memory area (size-bounded).
* [`ft_memcmp`](https://github.com/cterrasid/libft/blob/master/ft_memcmp.c)		- Compare two memory areas (size-bounded).
* [`ft_memmove`](https://github.com/cterrasid/libft/blob/master/ft_memmove.c)	- Copies a memory area to another memory area, allowing overlapping (size-bounded).
* [`ft_memcpy`](https://github.com/cterrasid/libft/blob/master/ft_memcpy.c)		- Copies a memory area to another memory area (size-bounded).

### Functions from `<string.h>` library
* [`ft_strlen`](https://github.com/cterrasid/libft/blob/master/ft_strlen.c)				- Calculates the length of a given string.
* [`ft_strchr`](https://github.com/cterrasid/libft/blob/master/ft_strchr.c)				- Loops through a string to find the	first occurrence of a character.
* [`ft_strrchr`](https://github.com/cterrasid/libft/blob/master/ft_strrchr.c)			- Loops through a string to find the	last occurrence of a character.
* [`ft_strnstr`](https://github.com/cterrasid/libft/blob/master/ft_strnstr.c)			- Locate the first occurence of a substring in a string (size-bounded).
* [`ft_strncmp`](https://github.com/cterrasid/libft/blob/master/ft_strncmp.c)			- Compares two strings (size-bounded).
* [`ft_strdup`](https://github.com/cterrasid/libft/blob/master/ft_strdup.c)				- Duplicates a string (with malloc).
* [`ft_strlcpy`](https://github.com/cterrasid/libft/blob/master/ft_strlcpy.c)			- Copies a string to another (size-bounded).
* [`ft_strlcat`](https://github.com/cterrasid/libft/blob/master/ft_strlcat.c)			- Appends a string to another (size-bounded).

## Non-standard functions
* [`ft_putchar_fd`](https://github.com/cterrasid/libft/blob/master/ft_putchar_fd.c)		- Output a character to a given file descriptor.
* [`ft_putstr_fd`](https://github.com/cterrasid/libft/blob/master/ft_putstr_fd.c)		  - Output a string to a given file descriptor.
* [`ft_putendl_fd`](https://github.com/cterrasid/libft/blob/master/ft_putendl_fd.c)		- Output a string with a newline to a given file descriptor.
* [`ft_putnbr_fd`](https://github.com/cterrasid/libft/blob/master/ft_putnbr_fd.c)		  - Output an integer to a given file descriptor.
* [`ft_itoa`](https://github.com/cterrasid/libft/blob/master/ft_itoa.c)					      - Transform a number into a string (with malloc).
* [`ft_substr`](https://github.com/cterrasid/libft/blob/master/ft_substr.c)				    - Extract a substring from a string.
* [`ft_strtrim`](https://github.com/cterrasid/libft/blob/master/ft_strtrim.c)			    - Trim the beginning and the end of a string based on a set of characters.
* [`ft_strjoin`](https://github.com/cterrasid/libft/blob/master/ft_strjoin.c)			    - Concatenate two strings into a new string (with malloc).
* [`ft_split`](https://github.com/cterrasid/libft/blob/master/ft_split.c)				      - Split a string into parts, according to a delimiter.
* [`ft_strmapi`](https://github.com/cterrasid/libft/blob/master/ft_strmapi.c)			    - Creates a new string by applying a function to each character of a string.
* [`ft_striteri`](https://github.com/cterrasid/libft/blob/master/ft_striteri.c)			  - Modify a string by applying a function to each character of it.

## Bonus functions (linked-list functions)
* [`ft_lstnew`](https://github.com/cterrasid/libft/blob/master/ft_lstnew.c)				      - Create new node of a list (with malloc).
* [`ft_lstsize`](https://github.com/cterrasid/libft/blob/master/ft_lstsize.c)			      - Calculates the length of a given list.
* [`ft_lstlast`](https://github.com/cterrasid/libft/blob/master/ft_lstlast.c)			      - Find the last node of a list.
* [`ft_lstadd_back`](https://github.com/cterrasid/libft/blob/master/ft_lstadd_back.c)	  - Add a new node at the end of a list.
* [`ft_lstadd_front`](https://github.com/cterrasid/libft/blob/master/ft_lstadd_front.c)	- Add a new node at the beginning of a list.
* [`ft_lstdelone`](https://github.com/cterrasid/libft/blob/master/ft_lstdelone.c)		    - Delete a node of a list.
* [`ft_lstclear`](https://github.com/cterrasid/libft/blob/master/ft_lstclear.c)			    - Delete all the nodes of a list.
* [`ft_lstiter`](https://github.com/cterrasid/libft/blob/master/ft_lstiter.c)			      - Applies a function to the content of all list's nodes.
* [`ft_lstmap`](https://github.com/cterrasid/libft/blob/master/ft_lstmap.c)				      - Creates a new list by applying a function to the content of all list's nodes.
