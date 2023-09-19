#include <stdio.h>
int main(){
            char Y,N,a,y,x;
            printf("Enter [N/n] or [Y/y]:  ");
            scanf("%c",&a);
            switch(a){
            case 'y':
            case 'Y':
                      printf("Deleted Successfully");
            break;
            case 'n':
            case 'N':
                     printf("Delete canceled");
          
            default:
                    printf("Choose the right option");
}
            return 0;
            }
