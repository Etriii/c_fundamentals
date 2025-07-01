/*
String Functions
C also has many useful string functions, which can be used to perform certain operations on strings.

To use them, you must include the <string.h> header file in your program:

#include <string.h>
String Length
For example, to get the length of a string, you can use the strlen() function:

Example
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu", strlen(alphabet));


In the Strings chapter, we used sizeof to get the size of a string/array. Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:

Example
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet));   // 26
printf("%zu\n", sizeof(alphabet));   // 27


It is also important that you know that sizeof will always return the memory size (in bytes), and not the actual string length:

Example
char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet));   // 26
printf("%zu\n", sizeof(alphabet));   // 50
*/ 


/*
Concatenate Strings
To concatenate (combine) two strings, you can use the strcat() function:

Example
char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s", str1);

Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example).
*/

/*
Copy Strings
To copy the value of one string to another, you can use the strcpy() function:

Example
char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);

Note that the size of str2 should be large enough to store the copied string (20 in our example).
*/ 

/*
Compare Strings
To compare two strings, you can use the strcmp() function.

It returns 0 if the two strings are equal, otherwise a value that is not 0:

Example
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
*/ 

