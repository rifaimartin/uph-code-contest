#include <stdio.h>

int main(void)
{
    int i, j;
    // printf("enter a number:");
    // scanf("%d",&i);
    i = 1;

    while (i <= 9)
    {
        j = 1;
        int totalValoeInColumn = 0;

        while (j <= 9)
        {
            printf("%3d", i * j);
            totalValoeInColumn += (i * j);
            j++;
        }
        printf("i=%d: ", totalValoeInColumn);
        printf("\n");
        i++;
    }

    return 0;
}