/** 
*Programmer : Riya Bhart
*Desc: Lab07; code to check symmetry of matrix
*Date: 10/10/23
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,i,j;
 printf("Enter size of array: ");
 scanf("%d",&n);
 int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("Enter values in array: ");
        scanf("%d",&arr[i][j]);
    }
}
bool flag = true;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]!=arr[j][i])
            flag = false;
    }
}
if(flag) printf("Symmetric matrix");
else printf("Non Symmetric matrix");

    
    return 0;
}
