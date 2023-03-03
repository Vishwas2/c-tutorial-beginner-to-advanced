// STATIC VARIABLES IN C


/* LOCAL VARIABLES :
-> Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
-> Variables which are accessed inside a function or a block are called local variables.
-> They can only be accessed by the function they are declared in.
-> They are inaccessible to the functions outside the function they are declared in.
*/

// So in simple terms A local variable in C is a variable that is declared within a function or a block of code.
// The scope of a local variable is limited to the function or block in which it is declared.
// Local variables are destroyed when the function or block is exited.
// HERE IS AN EXAMPLE OF A LOCAL VARIABLE :
/*
#include<stdio.h>
void myFunction(void){
    int myVariable=10; // myVariables is a local variable
    printf("The value of myVariable inside myFunction is %d\n",myVariable);
}
int main()
{
    printf("%d",myVariable);
    // The above statement would give an error, because myVariable is a local variable
    myFunction();
    // The above statement will print out The value of myVariable inside myFunction is 10
    return 0;
}
*/

/* GLOBAL VARIABLES :
-> These are the variables defined outside the main method.
-> Global variables are accessible throughout the entire program from any function.
-> If a local and global variable has the same name, the local variable will take preference.
-> Global variable remains in memory throughout the entire execution of the program.
*/

// IMPROTANT NOTE : LOCAL VARIABLE TAKES PRECEDENCE OVER GLOBAL VARIABLE

// HERE IS AN EXAMPLE OF GLOBAL VARIABLE :
/*
#include <stdio.h>
int myVariable = 10; // myVariable is a global variable
void myFunction(void)
{
    printf("The value of myVariable inside myFunction is %d\n", myVariable);
}
int main()
{
    printf("The value of myVariable inside main is %d\n", myVariable);
    // The above statement will print out The value of myVariable inside the main is 10
    return 0;
}
*/

/* FORMAL ARGUMENTS :
-> These variables are treated as local variables within the function.
-> These variables take precedence over global variables.
FOR EXAMPLE :*/
/*
#include<stdio.h>
int factorial(int number)
{
    if (number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to calculate the factorial of :\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}
*/
// IN THE ABOVE CODE INT NUMBER IS THE FORMAL ARGUMENT

/* STATIC VARIABLES IN C :
-> Static variables are variables which have a property of preserving their values even when they go out of scope.
-> They preserve their value from the previous scope and are not initialized again.
-> Static variables remains in memory throughout the span of the program.(which is a bad thing)
-> Static variables are initialized to 0 if not initialized explicitly.
-> In C, static variables can only be initialized using constant literals.
*/
// SYNTAX OF STATIC VARIABLE :
// static data_type name = value;
// EXAMPLE : static int vishwas = 7;

/*
#include<stdio.h>
int func1()
{
    static int a1 =5;
    a1++;
    return a1;
}
int main(int argc, char const *argv[])
{
    int a = func1();
    printf("the value of a is now : %d\n",a);
    // the above line of code will print out the value of a is now : 6
    // but if we call the function again and then print out the value of a it will give the value of a as 7
    // this is because static keeps the previous value intact (so it will add 1 to 6 and print out 7)
    a=func1();
    printf("the value of a after calling func1() again is : %d",a);
    // the above line will print out the value of a after calling func1() again is : 7
    return 0;
}
*/
// NOTE :
/* In C, static variables can only be initialized using constant literals. This means that static int b = func1(); will give an error. This is because
   in static variable all the memory is alocated before the run time of the program so it won't run main method . So we need to give value(constant literal)
   to the static variable'like : static int b =5; this statement is correct*/

/*
#include <stdio.h>
int func1(int b)
{
    printf("The address of b inside func1 is %d\n",&b);
    return b * 10;
}
int main(int argc, char const *argv[])
{
    int b = 344;
    printf("The address of b inside main is %d\n",&b);
    int val = func1(b);
    int *ptr = &val;
    // you will notice that the address of b inside func1 and main are different this means that these variables are different
    // whenever we call a function the value gets copied (actual parameters gets copied in formal parameters)
    printf("The value of func1 is %d\n", val);

    return 0;
}
*/

#include <stdio.h>
int func(int b1)
{
    static int myvar; // myvar is a static variable of value 0
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b1 + myvar;
}
int main(int argc, char const *argv[])
{
    int b = 344;
    int val = func(b);
    val=func(b);
    val=func(b);
    // the above code will give output as :
    // The value of myvar is 0
    // The value of myvar is 1
    // The value of myvar is 2
    int *ptr=&val;
    return 0;
}