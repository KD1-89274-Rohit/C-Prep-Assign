#include<stdio.h>

int main(){
    char ch;
    int mat,eng,phy,chem,bio;
    printf("Enter Name and marks obtained in all subjects : ");
    scanf("%c%d%d%d%d%d",&ch,&mat,&eng,&phy,&chem,&bio);
    int avg = (mat+eng+phy+chem+bio)/5;
    if(avg >=90){
        printf("%c your overall grade is Ex",ch);
    }
    else if(avg <90 && avg >80){
        printf("%c your overall grade is A",ch);
    }
    else if(avg < 80 && avg >70){
        printf("%c your overall grade is B",ch);
    }
    else if(avg <70 && avg >60){
        printf("%c your overall grade is C",ch);
    }
    else{
        printf("%c your overall grade is F",ch);
    }
    return 0;
}