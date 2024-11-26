#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter string: ");
    scanf("%s", a);
    int l = strlen(a);

    char *p = a;
    for(int i=0; i<=l; i++)
    {
        printf("%c", p[l-i]);
    }

    return 0;
}