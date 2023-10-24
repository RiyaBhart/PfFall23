#include <stdio.h>
void addition(int x1, int x2){
	int	x=x1+x2;
	printf("%d",x);
}
void subtraction(int x1, int x2){
	int	x=x1-x2;
	printf("%d",x);
}
void multiplication(int x1, int x2){
	int	x=x1*x2;
	printf("%d",x);
}
void divison(int x1, int x2){
	float	x=x1/x2;
	printf("%f",x);
}
	
int main(){
	int x1,x2;
	char op;
	printf("enter two integers: ");
	scanf("%d %d",&x1,&x2);
	printf("enter operation: ");
	scanf(" %c",&op);
	switch(op){
	
		case'+':
			addition(x1,x2);
			break;
	
		case'-':
			subtraction(x1,x2);
			break;
		case'*':
			multiplication(x1,x2);
			break;
		case'/':
			divison(x1,x2);
			break;
}
	return 0;
}
