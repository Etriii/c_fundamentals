/*
Conditions and If Statements
You have already learned that C supports the usual logical conditions from mathematics:

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
You can use these conditions to perform different actions for different decisions.

C has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed
The if Statement
Use the if statement to specify a block of code to be executed if a condition is true.

Syntax
if (condition) {
  // block of code to be executed if the condition is true
}

    Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.


In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text:

Example
if (20 > 18) {
  printf("20 is greater than 18");
}

We can also test variables:

Example
int x = 20;
int y = 18;
if (x > y) {
  printf("x is greater than y");
}
*/ 
 