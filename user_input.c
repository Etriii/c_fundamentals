/*
User Input
You have already learned that printf() is used to output values in C.

To get user input, you can use the scanf() function:

Example
Output a number entered by the user:
*/ 

#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;

  // Ask the user to type a number
  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum);

  // Print the number the user typed
  printf("Your number is: %d", myNum);

  return 0;
}

/*
The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.

Tip: You will learn more about memory addresses and functions in the next chapter.
*/ 

/*
Multiple Inputs
The scanf() function also allow multiple inputs (an integer and a character in the following example):

Example
// Create an int and a char variable
int myNum;
char myChar;

// Ask the user to type a number AND a character
printf("Type a number AND a character and press enter: \n");

// Get and save the number AND character the user types
scanf("%d %c", &myNum, &myChar);

// Print the number
printf("Your number is: %d\n", myNum);

// Print the character
printf("Your character is: %c\n", myChar);
*/ 


/*
Take String Input
You can also get a string entered by the user:

Example
Output the name of a user:

// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s", firstName);

Note: When working with strings in scanf(), you must specify the size of the string/array (we used a very high number, 30 in our example, but at least then we are certain it will store enough characters for the first name), and you don't have to use the reference operator (&).

However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). For example:

Example
char fullName[30];

printf("Type your full name: \n");
scanf("%s", &fullName);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John
*/ 

/*
From the example above, you would expect the program to print "John Doe", but it only prints "John".

That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

Example
char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John Doe

Use the scanf() function to get a single word as input, and use fgets() for multiple words.
*/ 

