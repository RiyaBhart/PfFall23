/*
 * Programmer: Riya Bhart
 * Date: 21/11/23
 * Description: Adding 45 days in current date;
 */
#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};


int main(){
    struct date data;
    
    printf("Enter day\n");
    scanf("%d", &data.day);
    
    printf("Enter month\n");
    scanf("%d", &data.month);

    printf("Enter year\n");
    scanf("%d", &data.year);
    
    int finalday= data.day, finalyear=data.year, finalmonth=data.month;
    
    finalday = data.day+45;
    if(finalday>31){
            finalday = finalday - 30;
            finalmonth = data.month + 1;
        if(finalmonth>13){
            finalmonth= finalmonth - 12;
            finalyear = data.year + 1;
        }
    }
    printf("Final date\n");
    printf("day : %d\n",finalday);
    printf("month: %d\n", finalmonth);
    printf("year : %d\n",finalyear);
    
    
    
    return 0;
}
