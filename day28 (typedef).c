// TYPEDEF IN C


/* Typedef is a keyword in C language which is used to give alternative name to existing data types.*/
// SYNTAX :
// typedef <previous_name> <alias_name>;

#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[25];
} std; // now std is the new name that can be used instead of struct Student
int main(int argc, char const *argv[])
{
    typedef unsigned long ul; // now ul means unsigned long
    // in the above case unsigned long is the previous name and ul is the alias name or the new name.
    ul l1, l2, l3;
    // struct Student s1, s2;  this is also correct but let's use the new name std
    std s1, s2;
    s1.id = 34;
    s2.id = 89;
    printf("the value of s1's id is :%d\n", s1.id);
    printf("the value of s2's id is :%d\n", s2.id);
    return 0;
}
