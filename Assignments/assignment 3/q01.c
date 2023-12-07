/* Programmer:Riya Bhart 23k0063
 * Date: 06/12/23
 * Descrption: Finding maximum in sub array
 */
#include <stdio.h>
int main(){
    printf("---RIYA BHART\n ---23K-0063\n");
    int n;
    printf("enter size of matrix ");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter values in matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    int subarr[n/2][n/2];
    int subcol=0;int subrow=0;
    for(int i=0;i<n;i+=2){
        subcol=0;
        for(int j=0;j<n;j+=2){
            int max = -2000;
            for(int rows=i;rows<i+2;++rows){
                for(int col=j;col<j+2;++col){
                    if(arr[rows][col]>max){
                        max = arr[rows][col];
                    }
                }
            }
            subarr[subrow][subcol] = max;
            subcol++;
        }
        subrow++;
    }
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n/2; j++){
            printf("%d  ",subarr[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
