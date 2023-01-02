// SWITCH CASE STATEMENTS


/*RULES FOR SWITCH EXPRESSION:
1) Switch expression must be an int or char
2) Case value must be an int or char
3) Case must come inside switch
4) Break is not a must (optional)*/

/*VALID WAY:
int x;
switch(x){
    cases +  code
}*/

/*INVALID WAY :
float x; THIS WILL GIVE AN ERROR AS SWITCH EXPRESSION MUST BE AN INT OR CHAR
switch(x){
    cases + code
}*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",& age);
    switch (age)
    {
    case 3:
        printf("The age is 3");
        break;
    case 13:
        printf("The age is 13");
        break;
    case 23:
        printf("The age is 23");
        break;
    
    default:
    printf("age is not 3,13 or 23");
        break;
    }
    return 0;
} 
// IN THE ABOVE CODE BREAK IS MANDATORY OTHER IT WILL ALWAYS PRINT THE DEFAULT STATEMENT(AGE IS NOT 3,13 OR 23)
// YOU DON'T NEED TO APPLY BREAK AFTER DEFAULT STATEMENT

// EXAMPLE OF NESTED SWITCH
#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;
        
        default:
            printf("your marks are not 45");
            break;
        }
        break;
    
    default:
        break;
    }
    return 0;
}

