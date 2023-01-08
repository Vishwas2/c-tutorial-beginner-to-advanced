// ARRAYS IN C

/*WHAT IS AN ARRAY ?
-> An array is a collection of data items of the same type.
-> Items can be stored at contiguous memory locations.
-> It can also store the collection of derived data types, such as pointers, structures, etc.
-> A one dimensional array is like a list.
-> A two dimensional array is like a table.
-> The C language places no limits on the number of dimensions in an array.
-> Some text refer to one dimensional array as vectors, two dimensional arrays as metrices,
   and use the general term array when the number of dimensions is unspecified or unimportant.
*/

/*WHY DO WE NEED ARRAYS ?
-> Code that uses arrays is sometimes more organized or readable.
-> If you were to store the marks in a test of 56 students, creating 56 variable will make program look clutered and messy.
-> Solution to this is arrays.
-> We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array.
*/

/*ADVANTAGE OF ARRAYS:
-> It is used to represent multiple data items of the same type by using only single name.
-> Accessing an item in a given array is very fast.
-> 2 Dimensional arrays makes it easy in mathematical applications as its used to represent a matrix.
*/

/*DISADVANTAGES OF ARRAYS:
-> Poor time complexity of insertion and deletion operation.
-> Wastage of memory since arrays are fixed in size.
-> If there is enough space present in the memory but no contiguous form, you will not be able to initialize your array.
-> It is not possible to increase the size of the array, once you have declared the array.
*/

/*PROPERTIES OF ARRAY:
-> Data in an array is stored in contiguous memory locations.
-> Each element of an array is of the same size.
-> Any element of the array with given index can be accessed very quickly by
   using its address which can be calculated by using the base address and the index.
*/

/*SYNTAX OF DECLARING AND INITIALIZING AN ARRAY :
-> Data_type name[size];
-> Data_type name[size] = {x,y,z,....};  // size not required in this case
-> Data_type name[rows][columns]; // for 2-d array
-> We can also initialize the array one by one by accessing it using its index:
    -> name[0]=0;
*/

/*EXAMPLE 1
#include<stdio.h>
int main()
{
    int marks[4]; // we have created an array of size 4 and name marks
    marks[0] = 34;
    printf("Marks of student 1 is %d\n", marks[0]); // this will print out marks of student 1 is 34
    marks[0] = 4;
    printf("Marks of student 1 is %d\n", marks[0]); // this will print out marks of student 1 is 4
    return 0;
}
*/

/*EXAMPLE 2
#include<stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array \n",i);  // this will take input from the user and store it in the array.
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i,marks[i]);  // this will print out the value that is stored in the array.
    }

    return 0;
}
*/

/*EXAMPLE 3
#include <stdio.h>
int main()
{
    int marks[4] = {45, 234, 2, 3}; // you can initialize the array like this also
    // in the above statement writing int marks[4] is not necessary you can write int marks[] also
    // but this is not allowed in 2-D array
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i,marks[i]);
    }

    return 0;
}
*/

// THIS IS IMPORTANT
/*2 - D ARRAY :
#include <stdio.h>
    int main()
{
    int marks[2][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}}; // this is a 2-D array which has 2 rows and 4 columns
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}
*/

// IF YOU WANT TO GET THE ABOVE OUTPUT IN MATRIX FORM THEN -:
/*#include <stdio.h>
int main()
{
    int marks[2][4]={{45,234,2,3},{3,2,3,3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/