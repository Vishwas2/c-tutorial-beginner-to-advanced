// CALL BY VALUE VS CALL BY REFERENCE

/*ACTUAL AND FORMAL PARAMETERS :
-> When a function is called, the values (expressions) that are passed in the call are called the arguments or actual parameters.
-> Formal parameters are local variables which are assigned values from the arguments when the function is called.
*/

/*TYPES OF FUNCTION CALLS IN C PROGRAMMING :
-> In C programming language, we can call a function in two different ways, based on how we specify the arguments, these two ways are:
-> Call by value (value is copied)
-> Call by reference (address is copied)
*/

/*CALL BY VALUE :
-> When we call a function by value, it means that we are passing the values of the arguments which are copied into the formal parameters of the function.
-> Which means that the original value remains unchanged and only the parameters inside the function changes.
*/
/*EXAMPLE OF CALL BY VALUE :
There are two best friends Sam and Andy. Sam has prepared well for his computer exam whereas Andy doesn't know anything. So during the test Sam shows his answer
sheet to Andy so that Andy can copy his answer and get passing marks in the exams. In this case Sam's answer is the actual parameter and Andy's answer is the
formal parameter. Even if Andy decides to change his answer later(formal parameter is changed) it would have no effect on the Sam's answer(actual parameter won't
change).
*/

/*CALL BY REFERENCE :
-> The call by reference method of passing arguments to a C function copies the address of the arguments into the formal parameters.
-> Addresses of the actual arguments are copied then assigned to the corresponding formal arguments.
*/

/*EXAMPLE OF CALL BY REFRENCE CODE :
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y;   // put y into x
    *y = temp; // put temp into y
    return ;
}
int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}
*/

/* ANOTHER EXAMPLE OF CALL BY REFERENCE CODE :
#include <stdio.h>
void changeValue(int *address)
{
    *address = 345;
}
int main(int argc, char const *argv[])
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}
*/

/*QUICK QUIZ:
Given two numbers a and b ,add them then subtract them and assign them to a and b using call by reference.*/
// ANSWER :
#include <stdio.h>
void change(int *x, int *y)
{
    int sum, difference;
    sum = *x + *y;
    difference = *x - *y;
    *x = sum;
    *y = difference;
}
int main(int argc, char const *argv[])
{
    int a = 5, b = 3;
    printf("The value of a and b is now %d and %d\n", a, b);
    change(&a, &b);
    printf("The value of a and b is now %d and %d", a, b);
    return 0;
}
