/* Programmer:Riya Bhart 23K-0063
* Date: 06/12/23
* Descrption: assignment3 q3
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	FILE *per=fopen("personal.txt","r");
	FILE *dep=fopen("department.txt","r");
	FILE *com=fopen("combine.txt","a");

	char str[20], temp[20];
	char id[5];
	char delim[2] = " \n";
	printf("enter ID:");
	scanf("%s", &id);

	fgets(str, 20, per);
	char *token = strtok(str, delim);

	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, per);
			token = strtok(str, delim);
		}
	}
	strcpy(temp, token);
	token = strtok(NULL, delim);
	strcat(temp, " ");
	strcat(temp, token);

	fgets(str, 20, dep);
	token = strtok(str, delim);
	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, dep);
			token = strtok(str, delim);
		}
	}
	token = strtok(NULL, delim);
	strcat(temp, " ");
	strcat(temp, token);
	fputs(temp, com);
	fprintf(com, "\n");
	return 0;
}
