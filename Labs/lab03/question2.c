#include <stdio.h>
int main() {
         int len=0;
         int width=0;
         int depth=0;
         printf("== Find Volume ==\n");
         printf("--Taking Inputd--\n");
         printf("Enter Length:  ");
         scanf("%d",&len);
         printf("Enter Width:  ");
         scanf("%d",&width);
         printf("Enter Depth:  ");
         scanf("%d",&depth);
         
         printf("\n--DONE...Taking Inputs--\n");
         printf("\n--Calculating Volume--\n");
 
        int volume = len * width * depth;
        printf("Volume Is: %d",volume);
        printf("");
        return 1;
}//end main
         
