#include <stdio.h>
void processArray(int n,int arr[]){
	int sum,i;
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum is : %d\n",sum);
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<n;i++){
		if (arr[i]>max);
		max=arr[i];
	}
	printf("max is %d\n",max);
	
	for(i=0;i<n;i++){
		if (arr[i]<min);
		min=arr[i];
	}
	printf("min is %d\n",min);
	
}
int main(){
	int n;
	printf("enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter values in array: ");
		scanf("%d",&arr[i]);
	}
	processArray(n,arr);
	return 0;
}
