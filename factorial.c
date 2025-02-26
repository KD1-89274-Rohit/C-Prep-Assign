#include<stdio.h>

int main(void){
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact *=i;
    }
    printf("factorial of Number is %d",fact);
    return 0;
}