#include <stdio.h>
#include <string.h>
int main(){
	char pass[1000];
	char ogpass[100]="Secure123";
	printf("Enter password: ");
	scanf("%s",pass);
	printf("%d\n",strlen(pass));
	int ret= strcmp(pass,ogpass);
	if(strlen(pass)<8){
		printf("short password");
	}
	else{
		if(ret < 0) {
		printf("Login failed. Incorrect password.\n");
	}	 
		else if(ret > 0) {
		printf("Login failed. Incorrect password.\n");
	} 
		else {
		printf("Login successful. Welcome!\n");
		
	
	}
	}
	return 0;
}
