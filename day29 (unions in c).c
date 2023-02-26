// UNIONS IN C


/* WHAT IS A UNION ?
-> Union is a user defined data type (similar to structures).
-> The difference between unions and structures lies in the fact that in structures, each member has it's own storage location, 
   whereas member of a union uses a single shared memory location.
-> This single shared memory location is equal to the size of its largest data member.
*/

/* FOR EXAMPLE :
CONSIDER THE FOLLOWING STRUCTURE
struct ActiveEmployee{
    char programmer[34];// 34 bytes
    char sweeper[34];   // 34 bytes
};
the above structure will occupy 68 bytes of space
but if we want to use only one of them at a time we can assing both of them shared memory location (of 34 bytes) using union.
*/

/* DECLARING AND ACCESSING UNION MEMBERS
-> Like structures, we access any member by using the member access operator(.) in unions.
-> We use keyword union to define a union.
-> Syntax is very similar to that of structure.
*/

/* UNION CANNOT HANDLE ALL MEMBERS AT ONCE :
// STRUCTURE :
   struct student
   {
    float marks; // 4 bytes
    int id; // 4 bytes
   }s1;
   s1 -> 8 bytes of memory location

// UNION :
   union student
   {
    float marks; // 4 bytes
    int id; // 4 bytes
   }s1;
   s1 -> 4 bytes of memory location shared between id and marks
*/

/* SYNTAX FOR UNIONS IS VERY SIMILAR TO STRUCTURES :
union test{
    int a;
    float b;
    char c;
}un;
// this union will take 4 bytes of space but if it was a structure it would have taken 9 bytes of space.
un.a; // for accessing members of union un
un.b;
un.c;
*/

// THEREFORE WE CAN USE UNION TO DO BETTER MEMORY MANAGEMENT IN OUR C PROGRAMS

/*
#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[25];
};
int main(int argc, char const *argv[])
{
    struct Student s1;
    s1.id=1;
    s1.marks=50;
    s1.fav_char='h';
    strcpy(s1.name, "Vishwas");
    printf("The id is : %d\n",s1.id);
    printf("The marks is : %d\n",s1.marks);
    printf("The favourite character is : %c\n",s1.fav_char);
    printf("The name is : %s\n",s1.name);
    return 0;
}
// the output of the above program would be :
// The id is : 1
// The marks is : 50
// The favourite character is : h
// The name is : Vishwas
*/

#include<stdio.h>
#include<string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[25];
};
int main(int argc, char const *argv[])
{
    union Student s1;
    s1.id=1;
    s1.marks=50;
    s1.fav_char='h';
    strcpy(s1.name, "Vishwas");
    printf("The id is : %d\n",s1.id);
    printf("The marks is : %d\n",s1.marks);
    printf("The favourite character is : %c\n",s1.fav_char);
    printf("The name is : %s\n",s1.name);
    return 0;
}
// the output of the above code is :
// The id is : 1752394070
// The marks is : 1752394070
// The favourite character is : V
// The name is : Vishwas

// every information other than the name has been corrupted this is because the last information that we gave to it was the name
// if we move marks to the end in the above code then marks will be printed correctly but every other information will get corrupted
