/** 
*Programmer : Riya Bhart
*Desc: Assignment 2, finding target sum by making pairs in 1d array
*Date: 29/10/23
*/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,sumf,i,j,t;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter target sum: ");
    scanf("%d",&t);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter values in array: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sumf = arr[i]+arr[j];// sumf is sum found
            if(sumf==t){
                printf("(%d,%d)",arr[i],arr[j]);
            }
            else 
            continue;
        }
    }
    

    return 0;
}
