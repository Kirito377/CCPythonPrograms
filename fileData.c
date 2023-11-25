#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char name[50];
    int cls;
    int roolNo;
}student;

void menu();
void addStudent();
void searchData();

int main(){
    menu();
    return 0;
}

void addStudent(){
    FILE *f;
    student s1;
    f= fopen("data.txt","a");
    if (f==NULL){
        printf("Filed to open a File");
    }else{
        printf("Enter name : ");
        scanf("%s",&s1.name);
        printf("Enter Class : ");
        scanf("%d",&s1.cls);
        printf("Enter Roll number : ");
        scanf("%d", &s1.roolNo);
        fprintf(f,"%s %d %d \n", s1.name,s1.cls,s1.roolNo);
        printf("Data added successfully ");
    }
    fclose(f);
}

void searchData(){
    student s1;
    system("cls");
    FILE *f;
    int c;
    f=fopen("data.txt","r");
    printf("Enter roll number : ");
    scanf("%d", &c);
    while (fscanf(f,"%s %d %d",&s1.name,&s1.cls,&s1.roolNo) != EOF){

        if (s1.roolNo == c)
        {
        
        printf("%s ",s1.name);
        printf("%d ",s1.cls);
        printf("%d \n",s1.roolNo);
            /* code */
        }
    }
    fclose(f);

}

void menu(){

    int choice;
    system("cls");
    printf("1. Add Student Data\n");
    printf("2. Search Data\n");
    printf("3. Exit\n\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
        case 1:
            addStudent();
            break;
        case 2:
            searchData();
            break;
        case 3:
            return;
        default:
            menu();
            break;
    }

}