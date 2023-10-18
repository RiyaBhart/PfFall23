#include <stdio.h>

void main()
{
    int arr[100], fr[100];
    int n, i, j, count;
    
       printf("Input size of array :");
       scanf("%d",&n);
   
       printf("Input elements: ");
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr[i]);
		  fr[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j] = 0;
            }
        }

        if(fr[i]!=0)
        {
            fr[i] = count;
        }
    }
    printf("\nThe frequency of elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fr[i]);
        }
    }
}
