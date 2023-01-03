// FOR LOOP IN C

/* WHY USE FOR LOOP ?
-> The for loop is used to iterate the statements or a part of the program several times.
-> It is used to traverse the data structures like the arras and the linked lists.
-> It has a different syntax than while and do while loop.*/

// THE SYNTAX OF FOR LOOP IN C LANGUAGE IS GIVEN BELOW:
/*for (Expression 1; Expression 2; Expression 3){
    // code to be run
}*/

/*PROPERTIES OF EXPRESSION 1:
-> The expression represents the initialization of the loop variable
-> We can initialize more than one variable in expression 1
-> Expression 1 is optional
*/

/*PROPERTIES OF EXPRESSION 2:
-> It is a conditional expression. It checks for a specific condition to be satisfied. If it is not, the loop is terminated.
-> It can have more than one condition. However the loop will iterate until the last condition becomes false. Other conditions will be treated as statements.
-> It is optional
-> Expression 2 can perform tasks of expression 1 and expression 3. That is, we can initialize the statement as well as update the loop in expression 2 itself.
-> We can pass zero or non-zero values in expression 2. However in C any non zero value is true and zero is false by default.*/

/*PROPERTIES OF EXPRESSION 3:
-> Expression 3 is used to update the loop variable.
-> We can update more than one variable at the same time.
-> It is also optional*/

/* IF THE CODE INSIDE FOR LOOP IS ONLY OF ONE LINE THEN YOU DON'T NEED TO APPLY BRACES {} */

// to gain better understanding of for loop watch code with harry for loop in c (video number 15)

#include <stdio.h>>
int main()
{
    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", i + 1);
    }

    return 0;
}
