/** 
*Programmer : Riya Bhart
*Desc: Lab06; sum using arrays
*Date: 10/3/23
*/
#include <stdio.h>

int main() {
    int sum;
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(int i=1;i<=9;i++){
        sum=sum+i;
    }
    printf("the total sum is:  %d",sum);

    return 0;
}
