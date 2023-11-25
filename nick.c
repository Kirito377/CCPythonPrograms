#include<stdio.h>

typedef struct student{
    int roll;
    char name[50];
    char surname[50];
}stud;
typedef struct school{
    int class;
    char schoolname[50];
    stud detail;
}data;

  
int main(){
    data a1;

    printf("Enter Name: ");
    scanf("\n%s", &a1.detail.name);
    printf("Enter Surname: ");
    scanf("\n%s", &a1.detail.surname);
    printf("Enter school name: ");
    scanf("\n%s", a1.schoolname);
    // gets(a1.schoolname);
    printf("Enter Class: ");
    scanf("\n%d", &a1.class);
    printf("Enter Roll No.: ");
    scanf("\n%d", &a1.detail.roll);


    
    printf("\n\nRoll :  %d\n", a1.detail.roll);
    printf("Name :  %s ", a1.detail.name);
    printf("%s\n", a1.detail.surname);
    printf("Class :  %d\n", a1.class);
    printf("School name :  %s\n", a1.schoolname);
    return 0;
}          