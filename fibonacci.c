#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int a=0 ,b=1;
    printf("%2d%2d",a,b);
    while(num!=0){
        int sum = a + b;
        a = b;
        b = sum;
        num--;
        printf("%2d",sum);
    }
    return 0;
}