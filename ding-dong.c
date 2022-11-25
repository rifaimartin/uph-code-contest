#include <stdio.h>

int main()
{
    int totalCase;
    scanf("%d", &totalCase);

    int b, nCol, m, k;

    int i = 0;
    while (i < totalCase)
    {
        printf("Kasus #%d:\n", i + 1);
        scanf("%d %d", &b, &nCol);
        int j = 0;
        while (j < nCol)
        {
            scanf("%d %d", &m, &k);

            if (((m + k) % b) == 0) printf("DING\n");
            else printf("DONG\n");
            j++;
        }
        i++;
    }

    return 0;
}