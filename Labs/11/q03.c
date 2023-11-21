/*
 * Programmer: Riya Bhart
 * Date: 21/11/23
 * Description: Write a program to compare two dates entered by the user.
  Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
 */
#include <stdio.h>
#include <string.h>
struct VerifyDate{
	int Month;
	int date;
	int Year;
};

int main(){

	struct VerifyDate date1;
	scanf("%d",&date1.date);
	scanf("%d",&date1.Month);
	scanf("%d",&date1.Year);
	struct VerifyDate date2;
	scanf("%d",&date2.date);
	scanf("%d",&date2.Month);
	scanf("%d",&date2.Year);
	

	
		if(date1.date==date2.date){
			if(date1.Month == date2.Month){
				if(date1.Year==date2.Year){
					printf("Dates are equal");
				}
				else{
						printf("Dates are not equal");
		}
			}
		}
		

	
}
