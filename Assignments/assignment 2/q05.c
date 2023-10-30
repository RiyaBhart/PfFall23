/** 
*Programmer : Riya Bhart
*Desc: ASSIGNMENT 2; Ramanujan numbers
*Date: 29/10/23
*/
#include<stdio.h>
#include<math.h>
int main (){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    
    for (int i=1; i<n*n*n;i++) {
            
        for (int j = 1; j <n*n*n; j++) {
            
            for (int k=j+1; k<n*n*n;k++) {
            
                for (int l = k + 1; l < n*n*n; l++) {
                    if(i*i*i + j*j*j == k*k*k + l*l*l  ){
                        printf("%d=%d^3+%d^3=%d^3+%d^3\n", i*i*i+j*j*j ,i,j,k,l);
                    
                    }
                }
            }
        }
    }

    return 0;
}
