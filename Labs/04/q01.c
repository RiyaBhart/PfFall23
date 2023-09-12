RIYA BHART
23-0063
  
#include <stdio.h>

int main() {
         int i=1;
         int n=0;
         int j=0;
         
         printf("==PATTERN FOR N NUMBERS==");
         printf("--Taking Inputs--");
         printf("Enter n:  ");
         scanf("%d", &n);
     
       
        for(i=0;i<=n;i++ ) {
        for(j=0; j<i ; j++) {
        printf("*"); 
}
        printf("\n");
}
return 0;
}
