/*
Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

Syntax
variable = (condition) ? expressionTrue : expressionFalse;
Instead of writing:

Example
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
You can simply write:

Example
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");


It is completely up to you if you want to use the traditional if...else statement or the ternary operator.
*/ 