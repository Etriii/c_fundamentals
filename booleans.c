/*
Booleans
Very often, in programming, you will need a data type that can only have one of two values, like:

YES / NO
ON / OFF
TRUE / FALSE
For this, C has a bool data type, which is known as booleans.

Booleans represent one of two values: true or false.
*/ 

/*
Boolean Variables
In C, the bool type is not a built-in data type, like int or char.

It was introduced in C99, and you must import the following header file to use it:

#include <stdbool.h>
A boolean variable is declared with the bool keyword and can take the values true or false:

bool isProgrammingFun = true;
bool isFishTasty = false;
Before trying to print the boolean variables, you should know that boolean values are returned as integers:

1 (or any other number that is not 0) represents true
0 represents false
Therefore, you must use the %d format specifier to print a boolean value:

Example
// Create boolean variables
bool isProgrammingFun = true;
bool isFishTasty = false;

// Return boolean values
printf("%d", isProgrammingFun);   // Returns 1 (true)
printf("%d", isFishTasty);        // Returns 0 (false)
*/ 


/*
Comparing Values and Variables
Comparing values are useful in programming, because it helps us to find answers and make decisions.

For example, you can use a comparison operator, such as the greater than (>) operator, to compare two values:

Example
printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
From the example above, you can see that the return value is a boolean value (1).

You can also compare two variables:

Example
int x = 10;
int y = 9;
printf("%d", x > y);


In the example below, we use the equal to (==) operator to compare different values:

Example
printf("%d", 10 == 10); // Returns 1 (true), because 10 is equal to 10
printf("%d", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55
*/ 

