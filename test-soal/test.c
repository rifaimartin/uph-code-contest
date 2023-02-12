#include <stdio.h>
int main()
{
    int i, size, sizeQuery, q1, q2;
    scanf("%d", &size);
    int data[size];
    for (i = 0; i < size; i++)
        scanf("%d", &data[i]);
    scanf("%d", &sizeQuery);
    long dataSum[sizeQuery];
    for (i = 0; i < sizeQuery; i++)
    {
        scanf("%d %d", &q1, &q2);
        dataSum[i] = 0;

        while (q1 <= q2)
        {
            dataSum[i] += data[q1 - 1];
            q1++;
        }
    }
    for (i = 0; i < sizeQuery; i++)
    {
        printf("Case #%d: %ld\n", i + 1, dataSum[i]);
    }
    return 0;
}