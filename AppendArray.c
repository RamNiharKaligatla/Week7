#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2;

    printf("Size of array 1: ");
    scanf("%d", &l1);
    int *a = (int *)malloc(l1 * sizeof(int));
    printf("Size of array 2: ");
    scanf("%d", &l2);
    int *b = (int *)malloc(l2 * sizeof(int));

    printf("Elements of array 1: ");
    for (int i = 0; i < l1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array 2: ");
    for (int i = 0; i < l2; i++)
    {
        scanf("%d", &b[i]);
    }

    a = (int *)realloc(a, (l1 + l2) * sizeof(int));

    for (int i = 0; i < l2; i++)
    {
        a[l1 + i] = b[i];
    }

    for (int i = 0; i < l1 + l2; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}