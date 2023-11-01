/*programmer: Riya Bhart
  Desc: reversing values in an array using pointers
  date: 29/10/23
  */
#include <stdio.h>

void reverse(int *arr, int size){
	int i=0;
	printf("\n\n");
	int j = size-1;	
	while(i<size/2){
		int tmp = *(arr+i);
		arr[i]=arr[j];
		arr[j]=tmp;
//		printf("%d\t", arr[i]); 
		i++;
		j--;
	}
 	
}

int main(){
	int n = 10;
	int arr[n],i=0;
	printf("enter values in array: ");

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	reverse(arr,n);

	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
