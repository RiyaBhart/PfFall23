#include <stdio.h>

void swap(int *a, int *b){
		int tmp=*a;
		*a =*b;
		*b = tmp;
}
q01
int main(){
	int j=2,k=5;
	printf("j=%d, k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d, k=%d\n",j,k);
	return 0;
}
/* the values of j and k are not swapped because 
*while swapping we are saving a's value in tmp and then value of b in a,
*then we are saving value of a in b; but over here value of a has already been changed to value of b,
*therefore it is printing the same value;
*and the answer while printing is same as the input because while printing in main we aren't using the values that are modifies in swap function.
*/ 
