/** 
*Programmer : Riya Bhart
*Desc: ASSIGNMENT 2; pattern printing
*Date: 29/10/23
*/
// Pattern A

#include <stdio.h>

int main() {
    int i,n,k=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++){
        arr[0][i]=k++;
    }
    for(i=1;i<n;i++){
        arr[i][n-1]=k++;
    }
    for(i=n-1;i>=0;i--){
        arr[n-1][i]=k++;
    }
    for(i=n-2;i>0;i--){
        arr[i][0]=k++;
    }
    for(i=1;i<n-1;i++){
        arr[1][i]=k++;
    }
    for(i=2;i<n-1;i++){
        arr[i][n-2]=k++;
    }
    for(i=n-3;i>0;i--){
        arr[n-2][i]=k++;
    }
    for(i=1;i<n-2;i++){
        arr[n-3][i]=k++;
    }
    
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
