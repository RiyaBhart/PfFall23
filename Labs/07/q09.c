/*Programmer: Riya Bhart
* 23k-0063
* Desc : Lab#07 ; Junaid and his mobile shop
*/ 
#include<stdio.h>
int main()
{
    int i,j,x,y,arr[x][y],total=0,max=0,maxb,btotal;
    printf("Enter the no of branches");
    scanf("%d",&x);
    printf("Enter the no of mobiles in each branch");
    scanf("%d",&y);
    for(i=0;i<x;i++){
        printf("Enter mobiles prices for branch id %d\n",i+1);
        for(j=0;j<y;j++){
            printf("Enter price of mobile: ");
            scanf("%d",&arr[i][j]);
            total=total+arr[i][j];
            if(arr[i][j]>max){
                max=arr[i][j];
                maxb=i+1;
            }
        }
    }
    printf("The bill of branches are:\n");
    for(i=0;i<x;i++){
        btotal=0;
        for(j=0;j<y;j++){
            btotal=btotal+arr[i][j];
        }
     printf("The branch total of %d branch is %d\n",i+1,btotal);
    }
    printf("The branch id with max bill:%d\n",maxb);
    printf("The total bill of allbranches:%d\n",total);
    
    return 0;
} 