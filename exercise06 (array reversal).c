// WRITE A FUNCTION TO REVERSE ARRAY ENTERED BY THE USER

#include <stdio.h>
void ArrayReverse(int arr[], int size)
{
    int i, temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main(int argc, char const *argv[])
{
    int array[10];
    printf("Enter 10 numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The original array is :\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", array[j]);
    }
    ArrayReverse(array, 10);
    printf("\nThe reversed array is :\n");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", array[k]);
    }
    return 0;
}
