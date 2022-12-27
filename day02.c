// A BASIC PROGRAM IN C TO ADD TWO NUMBERS 

#include <stdio.h>      // this is to tell the compiler to include the stdio.h file because it will be needed for the program.
int main()              // this is a function in C 
// the execution of the program starts from int main() and the code is written inside curly braces {}
{
    int a,b;
    printf("enter number a:\n");  // this is also a function which we are using from stdio.h file this is used to print something on the console.
    scanf("%d",&a);
    printf("enter number b:\n");
    scanf("%d",&b); // used to take input from the user
    printf("the sum of the two numbers is :%d",a+b);
    return 0;  // it will return 0 to the operating system if the program runs successfully
}
// this is my second program in C , I am just learning the basics
// this is how you write a comment in C(this will not get executed by the compiler)