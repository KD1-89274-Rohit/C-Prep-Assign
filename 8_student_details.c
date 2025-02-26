#include<stdio.h>

struct student{
    char name[100];
    char rollno[100];
    int marks;
};

int main(){

    struct student s[10];
    printf("Enter student details\n");
    printf("Enter student name: ");
    scanf("%s",&s->name);
     printf("Enter student roll no: ");
    scanf("%s",&s->rollno);
     printf("Enter student marks: ");
    scanf("%d",&s->marks);

    printf("name = %s Roll No = %c Marks = %d\n",s->name,s->rollno,s->marks);


    return 0;
}