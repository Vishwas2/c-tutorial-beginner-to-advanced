// IF ELSE CONTROL STATEMENTS


/*TYPES OF IF STATEMENTS:
1) if statement
2) if else statement
3) if else if ladder
4) nested if*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You can drive a car.");
    }
    else if (a>10)
    {
        printf("you are between 10 and 18");
    }
    
    else
    {
        printf("You cannot drive a car.");
    }
    
    return 0;
}
