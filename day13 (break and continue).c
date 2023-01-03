// BREAK AND CONTINUE STATEMENT 


/*USES OF BREAK STATEMENT:
-> Used to bring the program control out of the loop.
-> The break statement is used inside loops or switch statements.
-> Break statement can be used with:
                                    -> Loops
                                    -> Switch case expressions*/

// AN EXAMPLE OF BREAK STATEMENT INSIDE FOR LOOP:
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

/* USES OF CONTINUE STATEMENT:
- Used to bring the program control to the next iteration of the loop.
- The continue statement skips some code inside the loop and continues with the next iteration.
- It is mainly used for a condition so that we can skip some lines of code for a particular condition.*/

// THE MAIN DIFFERENCE BETWEEN BREAK AND CONTINUE IS THAT BREAK STATEMENT IS USED TO TERMINATE THE LOOP WHEREAS CONTINUE STATEMENT IS USED TO CONTINUE THE NEXT ITERATIONS OF THE LOOP.
/*ANOTHER IMPORTANT DIFFERENCE IS THAT BREAK IS USED IN BOTH LOOP AND SWITCH CASE WHEREAS CONTINUE IS USED ONLY IN LOOP*/

#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d) Enter your age:\n",i+1);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("we have not come across any continue statements";)
    }
    
    return 0;
}
