/** 
*Programmer : Riya Bhart
*Desc: Lab06
*Date: 10/3/23
*/
#include <stdio.h>
int main(){
int a;
int b;
int j;
printf("input a number1:  ");
scanf("%d",&a);
printf("input a number2:  ");
scanf("%d",&b);
if(a<=9){
for(j=a;j<=b;++j){
	switch(j){
		case 9:
			printf("nine\n");
	break;
		case 8:
			printf("eight\n");
	break;
		case 7:
			printf("seven\n");

	break;
		case 6:
			printf("six\n");

	break;
		case 5:
			printf("five\n");

	break;
		case 4:
			printf("four\n");

	break;
		case 3:
			printf("three\n");

	break;
		case 2:
			printf("two\n");

	break;
		case 1:
			printf("one\n");

	break;
		case 0:
			printf("zero\n");

	break;
		default:
			if(j%2==0){
				printf("even\n");
}
 				else{
					printf("odd\n");
				}
	
	
}
}
}
}
