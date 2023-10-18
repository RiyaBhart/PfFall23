/** 
*Programmer : Riya Bhart
*Desc: Lab07; printing a man
*Date: 14/10/23
*/
#include <stdio.h>

int main(){
    int n,i,j;
    printf("Input n:  ");
    scanf("%d",&n);
    //head printing
    for(i=1;i<=n-2;i++){
        for(j=1;j<=n-1;j++){
        printf(" ");
    }
        for(int j=1;j<=n;j++){
        printf("*");
    }
    printf("\n");
    }
    //headline printing
    for(i=0;i<1;i++){
        for( j=1;j<=n-(n-1);j++){
        printf(" ");
    }
        for( j=1;j<=(2*n)+1;j++){
        printf("*");
    }
    printf("\n");
    }
    //face printing
    for(i=0;i<1;i++){
        //eyes printing
        for(j=0;j<n-1;j++){
            printf(" ");
        }
        for(j=1;j<=n-(n-1);j++){
        printf("*");
        }
        for(j=1;j<=n-2;j++){
            printf(" ");
        }
        for(j=1;j<=n-(n-1);j++){
        printf("*");
        }
        printf("\n");
        //nose printing
            for(j=0;j<n+1;j++){
            printf(" ");
        }
        for(j=0;j<1;j++){
            printf("|");
        }
        printf("\n");
        //mouth printing
                for(i=0;i<1;i++){
        for(j=0;j<n;j++){
            printf(" ");
        }
        for(j=0;j<1;j++){
            printf(" _/");
        }
        printf("\n");
    }
    //neck printing
    printf("\n");
    for(j=0;j<n;j++){
        printf(" ");
    }
    for(j=0;j<1;j++){
        printf("| |");
        printf("\n");
    }
    //body line print
    for(j=0;j<2*n+3;j++){
        printf("*");
    }
    printf("\n");
    }
    //body printing
    for(i=0;i<n-1;i++){
        for(j=0;j<n-3;j++){
            printf("*");
        }
        for(j=0;j<n-3;j++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            printf("*");
        }
        for(j=0;j<n-3;j++){
            printf(" ");
        }
        for(j=0;j<n-3;j++){
            printf("*");
        }
        printf("\n");
    }
            for(j=0;j<n-1;j++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
        //leg printing
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
            printf(" ");
        }
        for(j=0;j<2;j++){
            printf("*");
        }
        for(j=0;j<1;j++){
            printf(" ");
        }
        for(j=0;j<2;j++){
            printf("*");
        }
        printf("\n");
        }
        //foot printing
        for(i=0;i<1;i++){
            for(j=0;j<1;j++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            printf("*");
        }
        for(j=0;j<1;j++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            printf("*");
        }
        }
    return 0;
}
