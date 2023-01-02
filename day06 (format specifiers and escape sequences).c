// FORMAT SPECIFIERS AND ESCAPE SEQUENCES


/*WHAT IS A FORMAT SPECIFIER?
-> Format specifier is a way to tell the compiler what type of data is in the variable during taking input displaying output to the user
-> printf("This is a good boy %a.bf",var); will print var with b decimal points in a 'a' character space.
*/
//FOR EXAMPLE:
#include<stdio.h>
int main()
{
    float a=23.456;
    printf("the value of a is %f\n",a);     // This will print out 23.455999
    printf("the value of a is %.3f\n",a);   // This will print out 23.456
    printf("the value of a is %.8f\n",a);   // This will print out 45599937
    printf("the value of a is %10.3f\n",a); // This will print out     23.456(it will give 4 extra spaces in front.)
    printf("the value of a is %-10.3f\n",a); // This will print out 23.456    (it will give 4 extra spaces in back.)
    return 0;
}
/*SOME IMPORTANT FORMAT SPECIFIERS:
%c -> used to print character
%d -> used to print integer
%f -> used to print floating point number
%l -> used to print long integer
%lf -> used to print double
%LF -> used to print long double*/

/*WHAT ARE CONSTANTS IN C ?
-> A constant is a value or variable that can't be changed in the program, for example: 15,23,"a",3.4,"king vishwas", etc.
-> There are two ways to define constants in C programming:
1) const keyword
2) #define preprocessor */

// FOR EXAMPLE:

// method 1:
// #include <stdio.h>
// int main()
// {
//     float b= 7.333;
//     b= 5.678;
//     THE ABOVE STATEMENT WILL NOT GIVE ANY ERROR

//     const float b= 4.709
//     b=8.344
//     THIS WILL GIVE AN ERROR AS WE HAVE DECLARED b CONSTANT
// }

// method 2:
// #include<stdio.h>
// #define PI 3.14
// int main ()
// {
//     PI = 7.33;
//     printf("%f",PI);
//     THIS WILL GIVE AN ERROR BECAUSE WE HAVE DEFINED PI AS 3.14
// }

/*ESCAPE SEQUENCES IN C:
-> An escape sequence in c programming language is a sequence of characters.
-> It doesn't represent itself when used inside string literal or character.
-> It is composed of two or more characters starting with backslash

SOME IMPORTANT ESCAPE SEQUENCES IN C:
1) \a -> alarm or beep
2) \b -> backspace
3) \n -> new line
4) \t -> tab
5) \' -> single quote
6) \" -> double quote
7) \\ -> backslash"*/



