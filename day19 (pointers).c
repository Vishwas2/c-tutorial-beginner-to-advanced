// POINTERS IN C

/*WHAT IS A POINTER ?
-> Variable which stores the address of another variable.
-> Can be of type int, char, array, function, or any other pointer.
-> Size depends on architecture. Ex 2 bytes for 32 bit
-> Pointers in c programming language can be declared using * (asterisk symbol).
*/

/* & AND * OPERATORS :
-> The address of operator '&' returns the address of a variable.
-> * is the dereference operator (also called indirection operator) used to get the value at a given address.
*/

// IN SIMPLE LANGUAGE & IS THE ADDRESS OF THE VARIABLE AND * IS USED TO ACCESS THE VALUE OF THE VARIABLE THAT THE POINTER IS POINTING TO
// (BECAUSE IF WE PRINT THE POINTER NORMALLY IT WILL PRINT OUT THE ADDRESS AND NOT THE VALUE OF THE VARIABLE.)

// IN C PROGRAMMING, "%p" IS A FORMAT SPECIFIER THAT IS USED TO PRINT THE MEMORY ADDRESSES.
// IT IS USED WITH THE "printf()" OR "fprintf()" function to print the address stored.


#include <stdio.h>
int main()
{
    int a = 25;
    int *ptra = &a;
    printf("lets learn about pointers\n");
    printf("the value of a is %d\n", a);        // this will print out the value of a is 25
    printf("the value of ptra is %d\n", *ptra); // this will print out the value of ptra is 25
    // * is important here because we want to print the value of the variable that the pointer ptra is pointing to and not the address that is stored inside it.
    printf("the address of a is %p\n",&a);      // this prints out the address of a (0061FF1C in my case)
    printf("the address stored inside ptra is %p\n",ptra);  // this will print out the address that pointer ptra is pointing to (0061FF1C in my case)
    // NOTE THAT THE ABOVE TWO ADDRESSES ARE THE SAME
    printf("the address of the pointer ptra is %p\n",&ptra);// this will print out the address in which ptra is stored (0061FF18 in my case)
    return 0;
}


/*NULL POINTER :
-> A pointer that is not assingned any value but NULL is known as the NULL pointer.
-> In computer programming, a null pointer is a pointer that doesn't point to any object or function.
-> We can use it to initialize a pointer variable when that pointer variable isn't assingned any valid memory address yet.
-> int *ptr = NULL;*/

// FOR EXAMPLE :
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int *ptr2 = NULL;
//     printf("the address stored inside ptr2 is %p\n",ptr2);  // this will print out the address stored inside ptr2 is 00000000
//     printf("the address of pointer ptr2 is %p\n",&ptr2);    // this will print the address of the pointer ptr2 (0061FF14 in my case)
//     return 0;
// }

/*USES OF POINTERS :
-> Dynamic memory alocation.
-> Arrays, functions and structures.
-> Return multiple values from a function.
-> Pointer reduces the code and improves the performance.
*/
