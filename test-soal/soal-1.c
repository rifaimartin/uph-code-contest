#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    int i = 0;
    while (i < n)
    {
        ar[i] = i;
        i++;
    }

    printf("ar[6]=%d\n", ar[6]);

    i = 9;
    while (i > 0)
    {
        printf("d% ", ar[i]);
        i--;
    }

    return 0;
}
