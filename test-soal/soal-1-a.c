#include <stdio.h>
int main()
{
    int data[100], midValue, i, size;
    printf("input size array data:");
    scanf("%d", &size);
    printf("input %d list data disini:\n", size);
    for (i = 0; i < size; i++)
    scanf("%d", &data[i]);
 
    printf("input nilai tengah:");
    scanf("%d", &midValue);

    printf("output data\n");
    for (i = 0; i <= size; i++)
    if (data[i] <= midValue) printf("%d ", data[i]);

    for (i = 0; i <= size; i++)
    if (data[i] == midValue) printf("%d ", data[i]);

    for (i = 0; i <= size; i++)
    if (data[i] > midValue) printf("%d ", data[i]);


    return 0;
}

// 25 1 4 7 8