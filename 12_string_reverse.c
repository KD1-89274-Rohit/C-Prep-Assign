#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    printf("Enter String to Reverse :");
    scanf("%s",&str1);
    //char str1[]="Rohit";
 
    int start =0 ;
    int end = strlen(str1)-1;
    char temp;
    while(start<end){
        temp = str1[start];
        str1[start]=str1[end];
        str1[end]=temp;
        start++;
        end--;
    }
    printf("%s",str1);
    return 0;
}