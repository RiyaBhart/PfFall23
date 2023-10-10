/** 
*Programmer : Riya Bhart
*Desc: Lab07;matrix multiplication
*Date: 10/10/23
*/
#include<stdio.h>
int main(){

	int i,j;
	int answer[2][2];
	int matrix1[2][2];
	int matrix2[2][2];
	printf("Enter elements for matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
				scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter elements for matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
				scanf("%d",&matrix2[i][j]);
		}
	}
	answer[0][0]= matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0];
	answer[0][1]= matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1];
	answer[1][0]= matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0];
	answer[1][1]= matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	printf("%d\t",answer[i][j]);
	}
	}
	return 0;
}
