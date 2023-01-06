// FUNTIONS IN C


/*WHAT IS A FUNTION?
-> Funtions are used to devide a large C program into smaller pieces
-> A function can be called multiple times to provide reusability and modularity to the C program
-> It is also called procedure or subroutine
*/

/*for example we have a big C program in which we have to do 10 different things and out of these 10 tasks 7 are repeating
and 3 are unique in that program so instead of writing the same program 7 times we should write it only once and call it whenever we need it.*/

/*The basic syntax of a C function is written as follows:
return_type function_name(data_type parameter 1, data_type parameter 2,...){
    //code to be executed
}   */

/*ADVANTAGES OF C FUNCTIONS:
-> We can avoid rewriting the same logic through functions.
-> We can devide the work among programmers using functions.
-> we can easily debug a program using functions. 
*/

/*DECLARATION, DEFINITION AND CALL
-> A function is declared to tell a compiler about its existance.
-> A function is defined to get some task done.
-> A function is called in order to be used.
*/

/*TYPES OF FUNCTIONS:
# LIBRARY FUNCTIONS = Functions included in c header files.
# USER DEFINED FUNCTIONS = Functions created by a C programmer to reduce complexity of a program.
*/




/*FUNCTION CODE EXAMPLES:
-> Without argument and without return value
-> Without argument and with return value
-> With argument and without return value
-> With argument and with return value
*/

/*EXAMPLE OF WITHOUT ARGUMENT AND WITHOUT RETURN VALUE FUNCTION:
#include <stdio.h>
void myname()
{
    printf ("Vishwas Rana");
}
int main()
{
    printf ("My name is :");
    myname();
    return 0;
}
*/

/* EXAMPLE OF WITHOUT ARGUMENT AND WITH RETURN VALUE FUNCTION:
#include<stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}
int main(int argc, char const *argv[])
{
    int c;
    c=takenumber();
    printf("The number is :%d",c);
    return 0;
}
*/

/* EXAMPLE OF WITH ARGUMENT AND WITHOUT RETURN VALUE FUNCTION:
#include<stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }    
}
int main()
{
    printstar(3);
}
*/

/*EXAMPLE OF WITH ARGUMENT AND WITH RETURN VALUE FUNCTION:
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    a=34;
    b=32;
    c=sum(a,b);
    printf("The sum is :%d",c);
    return 0;
}
*/