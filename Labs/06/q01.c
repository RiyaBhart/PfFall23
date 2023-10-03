/** 
*Programmer : Riya Bhart
*Desc: Lab06
*Date: 10/3/23
*/

#include<stdio.h>
int main(){
int n,i=1;
int sum=0;
printf("enter number:   ");
scanf("%d",&n);
for(i=1;i<n;i++){
if(n%i==0){
sum=sum+i;
printf("%d\n",sum);
}
}
if(sum==n){
printf("%d is perfect number",sum);
}
else{ 
printf("%d is not a perfect number",n);
}
return 1;
}
