// STRUCTURES IN C


/* WHAT IS A STRUCTURE IN C ?
-> Structures are user defined data types in C.
-> Using structures allows us to combine data of different types together.
-> It is used to create a complex data type which contains diverse information.
-> They are very similar to arrays but structures can store data of any type, which is practically more useful.
*/

/*EXAMPLE : STORING EMPLOYEE INFORMATION
-> Suppose we want to store information of 10,000 employees working at Abc Pvt. Ltd.
   -> Name
   -> Address
   -> Email
   -> Employee id
-> Clearly we need some user defined data type which contain only this information.
*/

/*DEFINING A STRUCTURE :
struct [structure_name]
{
    // data_type var1
    // data_type var2
    // data_type var3 ...
}
[structure_variables];
*/

/* DECLARING A STRUCTURE :
-> We can either declare a structure along with structure definition or separately :
-> METHOD 1 :
   #inlcude<stdio.h>
   struct Employee // we have made a user defined data type Employee here
   {
    int id;
    char name[20];
    float marks;
   };
   struct Employee e1,e2;
   int main()
   {
    return 0;
   }


-> METHOD 2 :
   #include<stdio.h>
   struct Employee // we have made a user defined data type Employee here
   {
    int id;
    char name[20];
    float marks;
   } e1,e2;
   int main()
   {
    return 0;
   }
*/

/* INITIALIZING A STRUCTURE :
-> We can initialize a structure either along with structure definition or separately :
-> METHOD 1 :
   #include <stdio.h>
   struct Employee
   {
      int id;
      float marks;
   };
   int main()
   {
      struct Employee e1;
      e1.id=12;
      e1.marks =34.12;
      return 0;
   }


-> METHOD 2 :
   #include <stdio.h>
   struct Employee
   {
      int id;
      float marks;
   };
   int main()
   {
      struct Employee e1= {12,34.12};
      return 0;
   }
*/

/* ACCESSING STRUCTURE MEMBERS :
-> Array elements are accessed using the subscript variable.
-> In a similar fashion, structure members are accessed using dot[.] operator.
-> (.) is called as "structure member operator".
-> To access the member of the structure .we use this operator in between "structure name" & "member name" (as used in method 1 above).
*/

#include <stdio.h>
#include <string.h>
struct Student
{
   int id;
   int marks;
   char fav_char;
   char name[25];
}/*vishwas, adi, aditya (this is also valid)*/;
// struct Student vishwas, adi, aditya; // this is a global variable
int main(int argc, char const *argv[])
{
   struct Student vishwas, adi, aditya; // here this is a local variable but we can also make it global variable as shown above
   vishwas.id = 1;
   adi.id = 2;
   aditya.id = 3;
   vishwas.marks = 100;
   adi.marks = 50;
   aditya.marks = 20;
   vishwas.fav_char = 'v';
   adi.fav_char = 'a';
   aditya.fav_char = 'a';
   strcpy(vishwas.name,"king");
   printf("vishwas got %d marks.\n", vishwas.marks);
   printf("vishwas's favourite character is : %c\n", vishwas.fav_char);
   printf("vishwas's id is : %d", vishwas.id);
   printf("vishwas's actual name is %s",vishwas.name);
   // the above code will print out :
   // vishwas got 100 marks.
   // vishwas's favourite character is : v
   // vishwas's id is : 1
   // vishwas's actual name is king
   return 0;
}
