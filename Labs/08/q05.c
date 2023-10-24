/** 
*Programmer : Riya Bhart
*Desc: Lab08: checking car number & day
*Date: 24/10/23
*/
#include <stdio.h>
void decideCarUsage(int n, int day){
	
	
	if(n%2==0 && day%2==0|| n%3==0 && day%3==0){
		printf("1\n");
		
	}
	else{
		printf("0\n");
		
	}
}
int main(){
	int n,day;
	printf("Enter number of car: ");
	scanf("%d",&n);
	printf("Enter day of the week: ");
	scanf("%d",&day);
	decideCarUsage(n,day);
	return 0;
}
