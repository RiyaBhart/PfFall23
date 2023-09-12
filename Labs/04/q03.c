#include <stdio.h>

int main() {
         int n=0;
         int number=0;
         int sum=0;
         int a=0;
        
         printf("Enter n:  ");
         scanf("%d", &n);

        for(int i=1; i<=n; i++){
         printf("Enter number:  ");
         scanf("%d", &number);
         a = number*number;
        // printf("\n--Calculating Answers--\n");
         sum = sum + a;
}
 
         printf("sum is:%d",sum);

return 0;
}
