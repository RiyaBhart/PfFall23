/** 
*Programmer : Riya Bhart
*Desc: Lab06; sum using arrays
*Date: 10/3/23
*/
#include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("Enter number of values in the array:  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("input the value in array:  ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Total sum is:  %d",sum);
    return 0;
}
