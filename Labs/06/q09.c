#include <stdio.h>

int main() {
    int n;
    printf("enter number of arrays in n:  ");
    scanf("%d",&n);
    int arr[n];

    printf("input values in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int minimum=arr[0];// the size of this array is 0
    int maximum=arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    
    }
    printf("the smallest value in array is:  %d\n",minimum);
    printf("the largest value in array is:  %d\n",maximum);

    return 0;
}
