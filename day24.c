// PASSING ARRAY AS FUNCTION ARGUMENTS

/*WHY AND HOW TO PASS ARRAYS ?
-> We pass arrays to a function when we need to pass a list of values to a given function .
-> We can pass the arrays to a function :
    1. By declaring array as a parameter in the function.
    2. By declaring a pointer in the function to hold the base address of the array.
*/

/*For example we have to pass marks of 70 students to a function so that we can calculate their average. In this case it would be very tedious
to give 70 variables to the fuction and the code would get cluttered. So to avoid all this we can this we pass array to the function*/

/*BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION :
#include<stdio.h>
int average(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return (sum/size);
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3};
    printf("The average of the array is %d",average(arr,3));
    return 0;
}
*/
// IMPORTANT POINT :
// INSIDE AVERAGE(), IF YOU CHANGE THE VALUE OF THE ARRAY IT GETS REFLECTED IN THE MAIN FUNCTION.

/*BY PASSING ARRAY'S BASE ADDRESS TO THE FUNCTION :
#include<stdio.h>
void printArray(int *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(arr+i));
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    printArray(arr,size);
    return 0;
}
*/
// SO WE CAN PASS ARRAYS TO FUNCTIONS AND MODIFY ITS DATA EASILY USING POINTERS

#include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("The value at index 0 is %d\n", arr[0]);
    func(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}

// IN THE ABOVE CODE BOTH OF THE TIMES IT WILL PRINT THAT THE VALUE AT INDEX 0 IS 23. BUT IF WE WRITE ARRAY[0]=382; THEN IT WILL PRINT OUT THE VALUE
// AT INDEX 0 IS 23 AND THE VALUE AT INDEX 0 IS 382. THIS IS BECAUSE COPY OF ARRAY IS NOT PASSED THEY ARE CONVERTED TO POINTERS AND THEN PASSED SO IF WE CHANGE
// THE VALUE IN THE FUNCTION THE ACTUAL VALUE ALSO GETS CHANGED
#include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 382; // very important point that if you change any value here it gets reflected in main()
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("The value at index 0 is %d\n", arr[0]);
    func(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}
// THIS WILL PRINT OUT THE VALUE AT INDEX 0 IS 23 AND THE VALUE AT INDEX 0 IS 382.

#include <stdio.h>
void func1(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}
int main(int argc, char const *argv[])
{
    int arr[] = {23, 13, 3, 4};
    func1(arr);
    func1(arr);
    return 0;
}
// YOU CAN ALSO PASS MULTI DIMENSIONAL ARRAY TO A FUCNTION
/*EXAMPLE OF PASSING MULTI DIMENSIONAL ARRAY TO A FUNCTION*/
void func2(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[] = {{2, 13}, {9, 3}};
    func2(arr);
}