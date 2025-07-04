/*
Strings
Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:

char greetings[] = "Hello World!";
Note that you have to use double quotes ("").

To output the string, you can use the printf() function together with the format specifier %s to tell C that we are now working with strings:

Example
char greetings[] = "Hello World!";
printf("%s", greetings);
*/ 


/*
Access Strings
Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets [].

This example prints the first character (0) in greetings:

Example
char greetings[] = "Hello World!";
printf("%c", greetings[0]);

!!Note that we have to use the %c format specifier to print a single character.
*/ 

/*
Modify Strings
To change the value of a specific character in a string, refer to the index number, and use single quotes:

Example
char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);
// Outputs Jello World! instead of Hello World!
*/ 



/*
Loop Through a String
You can also loop through the characters of a string, using a for loop:

Example
char carName[] = "Volvo";
int i;

for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}


And like we specified in the arrays chapter, you can also use the sizeof formula (instead of manually write the size of the array in the loop condition (i < 5)) to make the loop more sustainable:

Example
char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i;

for (i = 0; i < length; ++i) {
  printf("%c\n", carName[i]);
}
*/ 


/*
Another Way Of Creating Strings
In the examples above, we used a "string literal" to create a string variable. This is the easiest way to create a string in C.

You should also note that you can create a string with a set of characters. This example will produce the same result as the example in the beginning of this page:

Example
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);

Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.
*/ 

/*
Differences
The difference between the two ways of creating strings, is that the first method is easier to write, and you do not have to include the \0 character, as C will do it for you.

You should note that the size of both arrays is the same: They both have 13 characters (space also counts as a character by the way), including the \0 character:

Example
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";

printf("%zu\n", sizeof(greetings));   // Outputs 13
printf("%zu\n", sizeof(greetings2));  // Outputs 13
*/ 


