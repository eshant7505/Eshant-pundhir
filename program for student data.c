#include<stdio.h>
#include<string.h>
struct student{
    int Roll_no;
    char Name[20];
    char Gender;
};
main()
{
   int clrscr();
    struct student s[20];
    int i;

     for(i=0; i<20; i++)
     {
    printf("\n Roll_no ; ");
    scanf("%d",&s[i].Roll_no);
    printf(" Enter Name ; ");
    scanf("%s",&s[i].Name);
    printf(" Enter Gender : ");
    scanf("%s",&s[i].Gender);
     }

     printf("\n Data of all students ");

     for(i=0; i<20; i++)
     {
    printf("\n Roll No :)  %d \t Name :) %s \t Marks :) %s" ,s[i].Roll_no,s[i].Name,s[i].Gender);
     }

    return 0;
    getch();

}