/** 
*Programmer : Riya Bhart
*Desc: Lab06
*Date: 10/3/23
*/
#include <stdio.h>
int main(){
	int i=1;
	int j=1;
	int temp=0;
	int number=0;
	int sum=0;
	printf("%d\n",i);
	printf("%d\n",j);

	for(i=1;i<10000;){
		number=i+j;
		printf("%d %d %d\n",i,j,number);
		temp=i;
		i=j;
		j=number;
		if(number%3==0||number%5==0||number%7==0){
			sum=sum+number;
		}
	}
	printf("the sum is:  %d",sum);
	return 1;
}
