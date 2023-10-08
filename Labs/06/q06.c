/** 
*Programmer : Riya Bhart
*Desc: Lab06; sticks picking game with computer
*Date: 10/3/23
*/
#include <stdio.h>

int main() {
  int n=21;
  int u;// user's choice
  int j;// computer's choice
  for(;;){
  printf("Pick number of sticks:  ");
  scanf("%d",&u);
  if(u<1||u>4||u>n){
      printf("Invalid choice please try again\n");
      continue;
  }
  n=n-u;
  if(n==0){
      printf("You lost; Computer won\n");
  }
  else{
      printf("Remaining sticks:  %d\n",n);
      j=5-u;
      printf("Computer's choice: %d\n",j);
      n=n-j;
      printf("Remaining sticks:  %d\n",n);
  }
  }
    return 0;
}
