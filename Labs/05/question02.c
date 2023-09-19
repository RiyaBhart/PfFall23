Write a program to see greetings according to time using a 24-hour format. If the time between is 5 to 11 it should greet “Good Morning”, if time is between 12 to 18 it should greet “Good Evening”, if time between 18 to 24 it should greet “Good Night”.
  #include <stdio.h>
int main(){
            int t;
            printf("Enter Time:  ");
            scanf("%d",&t);
            if( t>=5 && t<=11){
                              printf("Good Morning");
            } else if(t>=12 && t<=18){
                              printf("Good Evening");
            } else if(t>18 && t<=24){
                              printf("Good Night");
            } else{  
                    printf("KEEP YOUR PHONE DOWN AND GO BACK TO SLEEP");
            }
           return 1;
           }
