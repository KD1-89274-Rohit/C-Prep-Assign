#include<stdio.h>

int main(){
    int rows1,columns1,rows2,columns2;
    printf("Enter Number of rows amd columns for 1st matrix:");
    scanf("%d%d",&rows1,&columns1);
    int matrix1[rows1][columns1];
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            prinf("Enter the element at [%d][%d] :");
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter Number of rows amd columns for 2nd matrix:");
    scanf("%d%d",&rows2,&columns2);
    int matrix2[rows2][columns2];
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            prinf("Enter the element at [%d][%d] :");
            scanf("%d",&matrix1[i][j]);
        }
    }
    


    return 0;
}