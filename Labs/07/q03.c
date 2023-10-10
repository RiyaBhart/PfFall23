/** 
*Programmer : Riya Bhart
*Desc: Lab07;addition (normal as well as arrays)
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
// USING ARRAYS
#include <stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("Input size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter values in array:  ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The total sum is:  %d",sum);
    
    return 0;
}
