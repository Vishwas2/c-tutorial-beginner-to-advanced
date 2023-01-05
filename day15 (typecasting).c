// TYPECASTING IN C


// TYPECASTING SYNTAX
// (TYPE) VALUE;

//Typecasting is a way to tell the compiler to treat a value as a specific data type, even if it was originally stored as a different data type.
/*for example:
float x= 10.5;
int y = (int) x;   // y is now 10
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a=36.7;
    // float b=54/5;
    printf("the value of a is %d\n",(int)a); //this will print the value of a is 36(because we have type casted a to int)
    // printf("the value of 54/5 is %.2f",b);    //this will print out 10.00 instead of 10.8
    //THIS HAPPENED BECAUSE 54 AND 5 ARE INTEGERS( IN C PROGRAMMING THERE IS SOMETHING CALLED TYPE CONVERSION)

    /*TYPE CONVERSION ->The type conversion is the process of converting a data value from one data type to another data type automatically by the compiler.
    # int and int calculation -> int result
    # int and float calculation -> float result
    # float and float calculation -> float result
    */
   
    // so instead of writing float b=54/5; we can write float b=(float)54/5;. Or we can directly write printf("the value of 54/5 is %f",(float)54/5);
    float b=(float)54/5;
    printf("the value of 54/5 is %.2f",b); // this will print out "the value of 54/5 is 10.80"
    return 0;
}
