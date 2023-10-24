/*programmer: Riya Bhart
  Desc: swapping values using functions
  date: 21/10/23
  */

#include <stdio.h>
void swapintegers(int x1, int x2){
	int	x;
	x=x1;
	x1=x2;
	x2=x;
	printf("%d %d",x1,x2);
}
	
int main(){
	int x1,x2;
	printf("enter two integers: ");
	scanf("%d %d",&x1,&x2);
	swapintegers(x1,x2);
	return 0;
}
