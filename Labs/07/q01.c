#include <stdio.h>
int main(){
	int x,y,ans=0;
	int count=0;
	printf("Enter two number x&y:  ");
	scanf("%d%d",&x,&y);
	while(x>=y){
		x=x-y;
		ans+=1;
	}
	printf("anwser is:  %d",ans);

return 0;
}
