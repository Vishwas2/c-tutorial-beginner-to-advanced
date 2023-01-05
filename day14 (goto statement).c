// GOTO STATEMENT


/*SOME INFORMATION ABOUT GOTO STATEMENT:
-> goto statements are also called jump statement in C.
-> used to transfer program control to a predefined label.
-> its use is avoided since it causes confusion for the fellow programmers in understanding the code.
-> goto statement is preferable when we need to break multiple loops using a single statement at the same time.
*/

# include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number (press 0 to exit)");
            scanf("%d", &num);
            if (num==0)
            {
                // break cannot be used here because it will only exit us from this for loop
                // so if we want to exit from all the loops at once we can use goto.
                goto end;
            }
            
        }
        
    }
    end:
    return 0;
}
// GOTO STATEMENT CAN BE USED TO EXIT OUT OF ALL THE NESTED LOOPS AT ONCE
