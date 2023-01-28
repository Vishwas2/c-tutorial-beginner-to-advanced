// ARRAYS AND POINTER ARITHMETIC IN C

/* POINTER ARITHMETIC :
-> There are four arithmetic operators that can be used on pointers:
    -> ++
    -> --
    -> +
    -> -
*/

// int a = 2
// a++;
// then a will become 2+1 which is 3
// but in pointers this is different:
// int *ptra = &a;
// ptra = ptra + 1; (now this will not add 1 to the value inside ptra instead it will size of ptra (which is size of int in this case))

// #include <stdio.h>
// int main()
// {
//     int a = 25;
//     int *ptra = &a;
//     printf("%d\n",ptra);
//     printf("%d\n",ptra+1);
//     // the above statement will add 4 instead of 1 to the value stored inside ptra because the size of integer in 64 bit architecture is 4
//     // (the size of int varies from architecture to architecture)
//     printf("%d\n",ptra+2); // this will add 8 to the value stored inside of ptra

//     // if the type of ptra would have been char instead of int then it have only added 1 because the size of char is 1
//     //for example:
//     /*
//     char a = '25;
//     char *ptra = &a;
//     printf("%d\n",ptra);
//     printf("%d\n",ptra+2) // this would only add 2 instead of 8 to the value stored inside ptra
//     */
//     return 0;
// }
// REMEMBER IF YOU GO TO AN INVALID MEMORY LOCATION (WHERE NO MEMORY EXISTS) AND TRY TO PRINT THE VALUE STORED INSIDE OF IT THE COMPILER WILL GIVE AN ERROR.


/*ARRAYS AND POINTERS
-> Consider the following declaration : int arr[10];
-> What is the type of arr? = integer array
-> However, arr by itself, without any index subscription, can be assigned to an integer pointer.
-> What type does arr[i] have? 
*/
// SO WE CAN ASSIGN POINTER TO INDIVIDUAL VALUES OF ARR[] (for example : int *ptr = arr[0];)

/*arr[i] USING POINTER ARITHMETIC
-> arr[i]==*(arr+i)
-> if arr is a pointer to arr[0] then arr + i is a pointer to arr[i].
*/

#include<stdio.h>
int main()
{
    int arr[]= {11,25,36,49,55,6,67};
    int * arrayptr= arr;
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The address of the first element of the array is %d\n",&arr[0]);
    // instead of writing &arr[0] we can also write arr
    printf("The address of the first element of the array is %d\n",arr);
    printf("The address of the second element of the array is %d\n",&arr[1]);  // you will see that the address of arr[1] will be 4 more than that of arr[0]
    // if we add 1 to arr[0] it will print out the address of arr[1]
    printf("The address of the second element of the array is %d\n",arr+1);

    printf("The value at address of the first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of the first element of the array is %d\n",arr[0]);
    printf("The value at address of the first element of the array is %d\n",*(arr));
    // the above three statement will print out the same value which is 11
    printf("The value at address of the second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of the second element of the array is %d\n",arr[1]);
    printf("The value at address of the second element of the array is %d\n",*(arr+1));
    // the above three statements will print out the same value which is 25

    //arr++; this line will throw an error as arr is a constant, but we can do arrayptr++;
    return 0;
}
// practise more coding questions on this concept to get better at it.
