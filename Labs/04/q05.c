#include <stdio.h>

int main() {
    int date1=0;
    int date2=0;
    int month1=0;
    int month2=0;
    int year1=0;
    int year2=0;
    
    printf("Enter date1, first person's birthdate:  ");
    scanf("%d", &date1);
    printf("Enter date2, second person's birthdate:  ");
    scanf("%d", &date2);
    printf("Enter month1,first person's birthmonth:  ");
    scanf("%d", &month1);
    printf("Enter month2,second person's birthmonth:  ");
    scanf("%d", &month2);
    printf("Enter year1,first person's birthyear:  ");
    scanf("%d", &year1);
    printf("Enter year2,second person's birthyear:  ");
    scanf("%d", &year2);
    
    if(year1<year2){
        printf("person1 is older\n");
    }
        else if (year1>year2){
        printf("person2 is older\n");
    }
    else {
        if (month1>month2){
            printf("person2 is older\n");
        }else if (month1<month2){
            printf("person1 is older\n");
        }
    else {
        if (date1>date2){
            printf("person2 is older\n");
        } else if (date1<date2){
            printf("person1 is older\n");
        } 
            printf("AGE IS SAME \n");
        }
    }

    return 0;
}
