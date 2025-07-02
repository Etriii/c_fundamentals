/*
Functions
A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

Predefined Functions
So it turns out you already know what a function is. You have been using it the whole time while studying this tutorial!

For example, main() is a function, which is used to execute code, and printf() is a function; used to output/print text to the screen:

Example
    int main() {
    printf("Hello World!");
    return 0;
    }
*/


/*
Create a Function
To create (often referred to as declare) your own function, specify the name of the function, followed by parentheses () and curly brackets {}:

Syntax
    void myFunction() {
    // code to be executed
    }

Example Explained
    myFunction() is the name of the function
    void means that the function does not have a return value. You will learn more about return values later in the next chapter
    Inside the function (the body), add code that defines what the function should do
*/ 

/*
Call a Function
Declared functions are not executed immediately. They are "saved for later use", and will be executed when they are called.

To call a function, write the function's name followed by two parentheses () and a semicolon ;

In the following example, myFunction() is used to print a text (the action), when it is called:

Example
Inside main, call myFunction():

    // Create a function
    void myFunction() {
    printf("I just got executed!");
    }

    int main() {
    myFunction(); // call the function
    return 0;
    }

// Outputs "I just got executed!"


A function can be called multiple times:

Example
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!
*/ 