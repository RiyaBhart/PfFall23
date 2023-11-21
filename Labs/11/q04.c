/*
 * Programmer: Riya Bhart
 * Date: 21/11/23
 * Description:Write a structure to store the names, salary and *hours of work per day of 10 employees in a
* company. Write a program to increase the salary 
* depending on the number of hours of work per
*day as follows and then print the name of all the employees along with their final salaries.
 */
#include <stdio.h>

struct CompanyData{
    char name[100];
    int salary;
    int HoursOfWork;
};

int main(){
    int n;
    printf("enter number of employees in company\n");
    scanf("%d",&n);
   struct CompanyData data[n];
   int i=0;
   while(i<n){
   printf("Enter name\n");
   scanf("%s",&data[i].name);
   printf("Enter salary\n");
   scanf("%d",&data[i].salary);
   printf("Enter hours of work\n");
   scanf("%d",&data[i].HoursOfWork);
   ++i;
   }
    for(i=0;i<n;i++){
        if(data[i].HoursOfWork<=8){
            data[i].salary+=50;
        }
        else if(data[i].HoursOfWork>8 && data[i].HoursOfWork<=10){
            data[i].salary+=100;
        }
        else if(data[i].HoursOfWork>=12){
            data[i].salary+=150;
        }
    }
    for(i=0;i<n;i++){
        printf("Name of Employee %d is %s\n",i+1,data[i].name);
        printf("Hours of works %d\n",data[i].HoursOfWork);
        printf("Salary %d\n",data[i].salary);
        printf("\n\n");
    }

   
    return 0;
}
