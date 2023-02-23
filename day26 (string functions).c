// STRING FUNCTIONS IN C


// STRING IS NOTHING BUT NULL TERMINATED CHARACTER ARRAY
/*WHAT ARE STRINGS IN C ?
-> C language does not support string as a data type.
-> We express string using an array of characters terminated by a null character (\0).
-> String : array of characters terminated by NULL character.
-> We can create a character array using the following ways :
   -> char name[]="vishwas";
   -> char name[]={'v','i','s','h','w','a','s','\0'};
*/

/*C Library : <string.h>
Function      Use
strcat()      This function is used to concatenate or combine two given strings
strlen()      This function is used to show length of a string
strrev()      This function is used to show reverse of a string
strcpy()      This function is used to copy one string into another
strcmp()      This function is used to compare two given strings
*/

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
   char s1[]="vishwas";
   char s2[]="adi";
   char s3[50];

// USING STRCAT() FUNCTION
   puts(strcat(s1,s2));
   // the output of the above code will be vishwasadi


// USING STRLEN() FUNCTION
   printf("The length of s1 is %d\n",strlen(s1));
   printf("The length of s2 is %d\n",strlen(s2));
   // the output of the above code will be :
   // The length of s1 is 10
   // The length of s2 is 3


// USING STRREV() FUNCTION
   printf("The reversed string s1 is :");
   puts(strrev(s1));
   // the output of the above code will be :
   // The reversed string s1 is : idasawhsiv (because we used strcat() earlier to combine both of the strings)
   

// USING STRCPY() FUNCTION
   strcpy(s3,strcat(s1,s2));
   printf("s3 now is : ");
   puts(s3);
   // the output of the above code will be :
   // s3 now is : idasawhsivadi (since s1 is idasawhsiv and s2 is adi)


// USING STRCMP() FUNCTION
   printf("The strcmp for s1, s2 returned %d",strcmp(s1,s2));
   // the output of the above code will be :
   // The strcmp for s1, s2 returned 1
   return 0;
}
