/** 
*Programmer : Riya Bhart
*Desc: Lab07; shifting elements in array by d position
*Date: 17/10/23
*/
#include <stdio.h>

int main() {
    int n,d,i;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("input elements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter d: ");
    scanf("%d",&d);
    for(i=0;i<n;i++){
        if(i<d){
            continue;
        }
        else{
            printf("%d, ",arr[i]);
        }
    }
    for(i=0;i<d;i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}
