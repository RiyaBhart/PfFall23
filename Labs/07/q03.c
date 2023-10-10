/** 
*Programmer : Riya Bhart
*Desc: Lab07;addition 
*Date: 10/10/23
*/
#include<stdio.h>
int main(){
int num,n,m;
int sum=0;
printf("Input number:  ");
scanf("%d",&num);
n=num;
for(int i=0;i<num;i++){
	m=n%10;
	sum=sum+m;
	n=n/10;
}
printf("The total sum is: %d",sum);
return 0;
}
