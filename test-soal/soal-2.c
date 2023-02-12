#include <stdio.h>
int main()
{
    int data[100], midValue, i, size, min, max;
    printf("input size array data:");
    scanf("%d", &size);
    printf("input %d list data disini:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &data[i]);

    min = data[0];
    max = data[0];

    printf("output data\n");
    for (i = 0; i <= size; i++)
    {
        if (data[i]> max)
        {
            max = data[i];
        }

        if (data[i]<min)
        {
            min = data[i];
        }
    }

    printf("Max data = %d\n", max);
    printf("Min data = %d", min);

    return 0;
}

// 25 1 4 7 8