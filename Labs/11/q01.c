#include <stdio.h>
#include <string.h>
struct StudentData{
	int RollNumber;
	char Name[100];
	char Department[100];
	char Course[100];
	int YearOfJoining;
};

int main(){
	
	int yoj,n;
	printf("Enter number of students \n");
	scanf("%d",&n);
	struct StudentData data[n];
	int i=0;
	while(i<n){
		printf("enter data for %d\n",i+1);
		printf("Enter roll number\n");
		scanf("%d",&data[i].RollNumber);
		printf("Enter Name\n");
		scanf("%s",&data[i].Name);
		printf("Enter Department\n");
		scanf("%s",&data[i].Department);
		printf("Enter Course\n");
		scanf("%s",&data[i].Course);
		printf("Enter Joining Year\n");
		scanf("%d",&data[i].YearOfJoining);
		
		++i;
	}
	printf("Enter the year for students to be found\n");
	scanf("%d",&yoj);
	for(i=0;i<n;i++){
		if(data[i].YearOfJoining==yoj){
			printf("%s\n",data[i].Name);
		}
	}
}
