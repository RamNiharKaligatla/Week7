#include <stdio.h>

float arr(int a[], int l)
{
	int i, s = 0;
	float avg;

	for (i = 0; i < l; i++)
	{
		s += a[i];
	}
	avg = (float)s / l;

	return avg;
}

int main()
{
	int i, l;
	printf("Size of array: ");
	scanf("%d", &l);

	int a[l];
	printf("Elements of array:\n");
	for (i = 0; i < l; i++)
	{
		scanf("%d", &a[i]);
	}

	float x = arr(a, l);
	printf("%f", x);

	return 0;
}
