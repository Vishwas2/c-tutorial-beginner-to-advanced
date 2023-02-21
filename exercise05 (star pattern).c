/*
Take an input from the user of how many lines do they want in the triangle and do they want a straight or a reversed triangle
then print the pattern accordingly
*
**
***
**** -> triangular star pattern

****
***
**
* -> reversed triangular star pattern
*/

#include <stdio.h>
#include <string.h>
void StarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ReverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num_of_rows;
    char input[10];
    printf("How many rows do you want to print? :\n");
    scanf("%d", &num_of_rows);
    printf("Do you want to print out the straight star pattern or the reversed star pattern ? :");
    scanf("%s", input);
    if (strcmp(input, "straight") == 0)
    {
        printf("The straight star pattern is :\n");
        StarPattern(num_of_rows);
    }
    else if (strcmp(input, "reversed") == 0)
    {
        printf("The reversed star pattern is :\n");
        ReverseStarPattern(num_of_rows);
    }
    else if (strcmp(input, "both") == 0)
    {
        printf("The straight star pattern is :\n");
        StarPattern(num_of_rows);
        printf("The reversed star pattern is :\n");
        ReverseStarPattern(num_of_rows);
    }
    else
    {
        printf("Please enter a valid input.");
    }
    return 0;
}
