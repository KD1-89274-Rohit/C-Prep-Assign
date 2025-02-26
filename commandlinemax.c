#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int max = INT_MIN; 
    for(int i=1;i<argc;i++){
        int num = atoi(argv[i]);
        if(num>max){
            max = num;
        }
    }
    printf("Maximum of all entered is : %d",max);

}