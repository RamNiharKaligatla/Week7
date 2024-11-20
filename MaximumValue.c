#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l, i;
	printf("Size of array: ");
	scanf("%d", &l);
	
	printf("Elements of array:\n");
	int *a = (int *)malloc(l*sizeof(int));
	for(i=0; i<l; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int max = a[0];
	for(i=0; i<l; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	printf("Maximum value is: %d", max);
	
	return 0;
}