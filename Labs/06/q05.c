/** 
*Programmer : Riya Bhart
*Desc: Lab06, pattern
*Date: 10/3/23
*/
#include <stdio.h>

int main() {
    int n;
    printf("input n:  ");
    scanf("%d",&n);
    for(int i=0;i<=n ;i++){
    if(i%2==0){
        printf("%d\t%d\t%d\t%d\t\n",i,i,i,i);
    }
    else{
        printf(" ");
        printf("\t%d\t%d\t\n",i,i);
    }
    }


    return 0;
}
