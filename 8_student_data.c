#include<stdio.h>
#include<string.h> 
struct student{
        char name[100];
        char rollno[100];
        int marks;
};

int main(){
    struct student s;
    char n[100],r[100];
    int m;
    printf("Enter Name :\n");
    scanf("%s",&n);
    printf("Enter rollno :\n");
    scanf("%s",&r);
    printf("Enter marks :\n");
    scanf("%d",&m);
    strcpy(s.name,n);
    strcpy(s.rollno,r);
    s.marks=m;
    printf("Student Details\n");
    printf("Student Name is %s\n",s.name);
    printf("Student RollNo is %s\n",s.rollno);
    printf("Student Marks is %d\n",s.marks);

    return 0;
}
