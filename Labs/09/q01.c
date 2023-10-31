/** 
*Programmer : Riya Bhart
*Desc: Lab09 ; factorial using recursion.
*Date: 31/10/23
*/
#include <stdio.h>
int factorial(int j){
	if(j==1|| j==0){
		return 1;
	}
	else{
	    return j*(factorial(j-1));
	}
}
int main(){
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	int x = factorial(n);
	printf("%d",x);
	return 0;
}
