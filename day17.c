// RECURSION IN C

/*WHAT IS A RECURSIVE FUNCTION ?
-> Recursive function or recursion is a process when a function calls a copy of itself to work on a smaller problem.
-> Any function which calls itself is called recursive function.
-> This makes the life of programmer easy by deviding a given problem into easier problems
-> A termination condition is imposed on such functions to stop them executing copies of themselves forever.
-> Any problem that can be solved recursively, can also be solved iteratively.
*/

/*WHY RECURSIONS ?
-> Some problems are best suited to be solved using recursion.
-> for example, tower of Hanoi, Fibonacci series, factorial finding, etc.
*/

/*EXAMPLE 1: FACTORIAL CALCULATION
-> The case at which the function doesn't recur is called the base case.
-> The instance where the function keeps calling itself to perform a subtrack, is called the recursive case.
-> For factorial calculation the base case occurs at the parameter value of 0 to 1.
*/

/*IF YOU DON'T KNOW WHAT IS FACTORIAL OF A NUMBER HERE IS AN EXAMPLE:
! is the symbol for factorial
n!=n X n-1  X n-2 X ... X 1
3!=3*2*1=6
5!=5*4*3*2*1=120
# ALSO REMEMBER THAT 0! IS 1 BY DEFINITION
# ALSO n! = n*(n-1)!
*/

#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("enter the number you want the factorial of :\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n",num,factorial(num));
    return 0;
}