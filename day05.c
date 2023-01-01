// OPERATORS IN C

/* What is an operator?
-> An operator is a symbol used to perform operations in given programming language
eg: 3+4=7 here + is an operator and 3 and 4 are operands*/

/* Types of operators in C:
-> Arithmetic operators
-> Relational operators
-> Logical operators
-> Bitwise operators
-> Assignment operators*/

/* ARITHMETIC OPERATORS:
+ -> Addition
- -> Subtraction
* -> Multiplication
/ -> Division
% -> Modulus (prints out the remainder)*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    a=89;
    b=10;
    printf("The sum is :%d\n",a+b);
    printf("The difference is : %d\n",a-b);
    printf("The product is : %d\n",a*b);
    printf("The quotient is : %d\n",a/b);
    printf("The remainder is : %d\n",a%b);
    return 0; // This will print out 99,79,890,8 and 9 respectively
}

/*RELATIONAL OPERATORS:
== -> is equal to
!= -> is not equal to
> -> greater than
< -> less than
>= -> greater than or equal to
<= -> less than or equal to */

/*LOGICAL OPERATORS:
&& -> logical AND operator
|| -> logical OR operator
! -> logical NOT operator*/

// IMPORTANT 0->00, 1->01, 2->10, 3->11
/*BITWISE OPERATORS:
a  b  a&b  a|b  a^b
0  0   0    0    0 
0  1   0    1    1
1  1   1    1    0
1  0   0    1    1 */
//FOR EXAMPLE IT WILL READ 2&3 as 10 & 11 which will give the output as 10 which is 2
// ^ means XOR (exclusive or) and it requires both one true and one false value

/* OTHER BITWISE OPERATORS:
~ is the binary one's compliment
<< is the binary left shift operator
>> is the binary right shift operator
THESE WILL BE HARDLY USED*/

/* ASSIGNMENT OPERATORS: (VERY IMPORTANT)
= -> simple assignment operator
+= -> add and assignment operator
-= -> subtract and assignment operator
*= -> multiply and assignment operator
/= -> devide and assignment operator*/

/*MISCELLANEOUS OPERATORS:
sizeof() -> Returns the size of a variable
& -> Returns the address of a variable
* -> Pointer to a variable\
?: -> Conditional expression */