// STRINGS IN C

/*IS STRINGS A DATATYPE IN C ?
-> No
-> We have char, int, float and other data types but no 'string' data type in C
-> String is not a supported data type in C but it is a very useful concept used to model real world
   entities like name, city etc.
-> We express strings using an array of characters terminated by a null character (\0).
*/

/*WHAT ARE STRINGS IN C ?
-> String : array of characters terminated by NULL character.
-> Strings in C is created by creating an array of characters.
-> We need an extra character (\0) to tell the compiler that the string ends here.
*/

/*CREATING STRINGS IN C
-> We can create a character array in the following ways :
   -> Char name[]="harry";
   -> Char name[]={'h','a','r','r','y','\0'}
      please use single quotes only in the above case
*/

// QUICK QUIZ
// char str[5];
// str="hello";
// why will the above line create problems?
// the problem with the above code is that the max length that str can store is 5 whereas the length of hello
// alone is 5 so there is no space for /0 and therefore it wont get stored properly

/*TAKING STRING INPUT FROM THE USER
char str[52];
gets(str);
printf("%s",str);
puts(str);
*/
// IMPORTANT NOTE
// gets() is a better way of taking string as input from the user
// (because even if you apply space in input the whole string will be taken as input not just the first name)

#include <stdio.h>
void PrintStr(char str[])
{
   int i = 0;
   while (str[i] != '\0')
   {
      printf("%c", str[i]);
      i++;
   }
}
int main(int argc, char const *argv[])
{
   // char str[]={'V','i','s','h','w','a','s','\0'}; // this method is also correct
   char str[] = "Vishwas"; // this method is also correct
   PrintStr(str);
   return 0;
}

// TAKING STRING AS INPUT FROM THE USER
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
   char input[30];
   printf("Please enter your name :\n");
   gets(input);
   printf("Hello %s", input);
   return 0;
}