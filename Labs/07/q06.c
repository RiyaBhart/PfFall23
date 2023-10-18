/** 
*Programmer : Riya Bhart
*Desc: Lab07; code to check frequency
*Date: 10/10/23
*/
#include <stdio.h>

int main() {
    int n,i,j,count=1;
    printf("Input size of matrix: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[1000]={0};
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == 0){
            continue;
        } 
    printf("%d occurs %d many times\n",arr[i],freq[i]);
    }
    

    return 0;
}
