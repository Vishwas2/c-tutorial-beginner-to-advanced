/*WAP IN C TO INPUT TEMPERATURE IN CELSIUS FROM THE USER AND OUTPUT THE TEMPERATURE IN FAHRENHEIT TO THE USER*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    printf("Enter the temperature is celsius:");
    scanf("%f",&a);
    printf("%f in fahrenheit is %f",a,(a*1.8)+32);
    return 0;
}
