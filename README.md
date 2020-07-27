![HolbertonSchool](https://www.holbertonschool.com/holberton-logo.png)

# _printf

printf is a function of the standard library <stdio.h>, this function is used to display any type of data on the screen.

## _printf format
```bash
int _printf(const char *format, ...)
```
The function starts with an int data type, this indicates that it will return an integer. That integer is the number of characters printed on the screen, or a negative number in the event of an error.
Then there are its arguments, the first is a constant variable of type char, when saying constant means that this variable will not be modified, it can be a text string, so you should not forget the null character '\ 0'.
Finally the ellipsis, these indicate additional arguments of the function and these arguments are unlimited and the function knows what to do with them.

Reference  https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Salida_por_pantalla:_printf()

Some of these Specifiers are:
|Specifier   |  Description |
| ---    | --- |
| %c| Write a simple character|
| %s| Write a character string |
| %f| Write a floating point number with no exponent|
| %d| Write a signed decimal integer |
| %i| Writes a signed decimal, octal, or hexadecimal integer |

# Usage

```
#include <stdio.h>
int main()
{
printf ("Hello World! \ n");
return (0);
}
```

## output
```bash
Hello World!
```
## Authors

[Milena Molina Montoya](https://github.com/MIlenaMontoya/printf)

[Andres Sepulveda](https://github.com/andi-s0106)
