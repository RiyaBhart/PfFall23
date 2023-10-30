/** 
*Programmer : Riya Bhart
*Desc: ASSIGNMENT 2; sorting of shirts
*Date: 29/10/23
*/
#include<stdio.h>
int main(){
	int i,j,n,temp,k;
	printf("NO OF SHIRTS : ");
	scanf("%d",&n);
	int shirts[2][n];
	printf("\nENTER THE AGE OF SHIRTS : \n");
	
	 for (i=0;i<1;i++){
	 	for(j=0;j<n;j++){	 		
	 		scanf("%d",&shirts[i][j]);
		 }
	 }
	printf("\nENTER THE PRICE OF SHIRTS : \n");
		 for (i=1;i<2;i++){
	 	for(j=0;j<n;j++){	 		
	 		scanf("%d",&shirts[i][j]);
		 }
	 }
	 printf("LIST IN ASCENDING ORDER ACCORDING TO THE AGES : \n");
	 for(i=0;i<2;i++){
	   for(j=0;j<n;j++){
	   	 for(k=j+1;k<n;k++){
			
	   	if(shirts[0][j]>shirts[0][k]){
	   		temp=shirts[0][j];
	   		shirts[0][j]=shirts[0][k];
	   		shirts[0][k]=temp;
	        	}
		    }
	    }
    }

    for(i=0;i<1;i++){
    	printf("\n");
	   for(j=0;j<n;j++){
	   	printf("%d\t",shirts[i][j]);
	   }
     }
	   printf("\nLIST IN ASCENDING ORDER ACCORDING TO THE PRICES : \n");
    for(i=0;i<2;i++){
	   for(j=0;j<n;j++){
	   	 for(k=j+1;k<n;k++){

	   	if(shirts[1][j]>shirts[1][k]){
	   		temp=shirts[1][j];
	   		shirts[1][j]=shirts[1][k];
	   		shirts[1][k]=temp;}
		   }
        }
      }
    for(i=1;i<2;i++){
	   for(j=0;j<n;j++){
	   	printf("%d\t",shirts[i][j]);
	   }
     }
}
