## How to define and Initialize array in C?
char myStr[6] = {'R','I','F','A','I'}

## There are 2 ways to read string in C what are they?
using - get(stringVariable) or fgets(stringVairble, MAX_LIMIT, stdin) or scanf("%[^\n]%*c", str);

## What are the problem that could raise when you want to read 2 or more array simultaneously?  
kalo array pertama belum size nya banyak dari array kedua, kita ngga bisa balikin hasil read array pertama, karena harus nunggu array kedua? hehe

## How to get the length of string?
import -> #include <string.h>
define u r string in here, let say A -> strlen(A)   
printf("length A =", strlen(A))

## Mention other built-in function for string that  you know in (C)!
strlen()	It returns the string's length.
strnlen()	It returns the specified value if the value specified is less than the string length, otherwise the string length.
strcmp()	It compares two strings and returns 0 if the strings are the same.
strncmp()	It compares two strings only to n characters.
strcat()	It concatenates two strings and returns the concatenated string.
strncat()	It concatenates n characters of one string to another string.
strcpy()	It copies one string into another.
strncasecmp()	It compares n characters of one string to another without sensitivity to the case.

