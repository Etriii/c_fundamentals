// Constants
// If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

// This will declare the variable as "constant", which means unchangeable and read-only:

// Example
// const int myNum = 15;  // myNum will always be 15
// myNum = 10;  // error: assignment of read-only variable 'myNum'

// ---------------------------------------- //

// You should always declare the variable as constant when you have values that are unlikely to change:

// Example
// const int minutesPerHour = 60;


// ---------------------------------------- //

/*
Notes On Constants
When you declare a constant variable, it must be assigned with a value:

Example
Like this:

const int minutesPerHour = 60;
This however, will not work:

const int minutesPerHour;
minutesPerHour = 60; // error
*/

// 


// Good Practice
// Another thing about constant variables, is that it is considered good practice to declare them with uppercase.

// It is not required, but useful for code readability and common for C programmers:

// Example
// const int BIRTHYEAR = 1980;