/** 
*Programmer : Riya Bhart
*Desc: Lab07;matrix ascending order sorting
*Date: 10/10/23
*/
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter values in array: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } 
        }
    }
    printf("Elements in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}
