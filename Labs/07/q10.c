/** 
*Programmer : Riya Bhart
*Desc: Lab07
*Date: 10/10/23
*/
#include <stdio.h>

int main() {
    int n,sum,k,j,i;
    int totalsum=0;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sum: ");
    scanf("%d",&sum);
    printf("Enter values in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            for(k=2;k<n;k++){
                totalsum=arr[i]+arr[j]+arr[k];
                if(totalsum!=sum){
                    continue;
                }
                    else{
                    printf("starting from index %d to %d the sum is %d\n",i,k,sum);
                    break;
                    }
            }
        }
    }
    
    return 0;
}
