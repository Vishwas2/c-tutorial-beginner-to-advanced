// BREAK AND CONTINUE STATEMENT 


/*USES OF BREAK STATEMENT:
-> Used to bring the program control out of the loop.
-> The break statement is used inside loops or switch statements.
-> Break statement can be used with:
                                    -> Loops
                                    -> Switch case expressions*/

// AN EXAMPLE OF BREAK STATEMENT INSIDE FOR LOOP
#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d)Enter your age:",i+1);
        scanf("%d",&age);
        if (age>18)
        {
            break;
        }
    }
    
    return 0;
}

