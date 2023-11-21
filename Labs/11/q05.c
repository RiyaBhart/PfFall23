/*
 * Programmer: Riya Bhart
 * Date: 21/11/23
 * Description:lab11task5, employee, organisation &relevantinfo.
 */
#include <stdio.h>

struct Employee{
    int employee_id;
    char name[1000];
    int salary;
};
struct Organisation{
   char organisation_name[1000];
    char organisation_number[1000]; 
    struct Employee emp;
};

int main(){
    struct Organisation org;
    
    printf("Enter name of organisation\n");
    scanf("%s", &org.organisation_name);
    
    printf("Enter organisation number\n");
    scanf("%s", &org.organisation_number);

    printf("Enter employee id\n");
    scanf("%d", &org.emp.employee_id);

    printf("Enter employee name\n");
    scanf("%s", &org.emp.name);

    printf("Enter employee salary\n");
    scanf("%d", &org.emp.salary);
    
    // generating output
    
    printf("Name of Organisation :%s\n", org.organisation_name);
    printf("Number of Organisation: %s\n", org.organisation_number);
    printf("Employee ID : %d\n", org.emp.employee_id);
    printf("Name of Employee : %s\n", org.emp.name);
    printf("Employee Salary : %d\n", org.emp.salary);
    
    
    
    return 0;
}
