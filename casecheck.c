#include<stdio.h>

int main(){
    char ch;
    printf("Enter Character to check :");
    scanf("%c",&ch);
    if(ch>=67 && ch <=90){
        printf("UpperCase characters");
    }
    else if (ch >='a' && ch <='z'){
        printf("LowerCase character");
    }
     else if (ch >=48 && ch <=57){
        printf("Number");
    }
    else{
        printf("Special character");
    }
    return 0;
}