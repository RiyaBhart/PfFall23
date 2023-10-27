
#include <stdio.h>

int main() {
    int np,ni,totalruns=0,avgruns,halfcenturies=0, centuries=0;//no of players, no of innings.
    printf("Enter no. of players: ");
    scanf("%d",&np);
    printf("Enter no. of innings: ");
    scanf("%d",&ni);
    int arr[np][ni];
    int max=arr[1][1];
    for(int i=1;i<=np;i++){
        for(int j=1;j<=ni;j++){
            printf("Enter runs in %d inning scored by %d player: \n", j,i);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>=50 && arr[i][j]<100){
                halfcenturies = halfcenturies+1;
            }
            if(arr[i][j]>=100){
                centuries = centuries+1;
            }
            totalruns+=arr[i][j];
            if (arr[i][j]>max){
                max=arr[i][j];
            }
        }
        avgruns=totalruns/ni;
        printf("For %d player.\n",i);
        printf("The total runs scored are %d.\n",totalruns);
        printf("The average runs scored are %d.\n",avgruns);
        printf("Maximum score in single inning is: %d\n",max);
        printf("No. of centuries scored are: %d\n",centuries);
        printf("No. of half centuries scored are: %d\n",halfcenturies);
        printf("\n");
    }

    return 0;
}
