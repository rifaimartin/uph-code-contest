#include <stdio.h>
int main()
{
    int i, size, min, max;
    printf("input size array data:");
    scanf("%d", &size);
    int data[size];
    printf("input %d list data disini:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &data[i]);
    int flag=0;

    for (i = 0; i <= size; i++)
    {
        int a = i + 1;
        if (a <= size)
        {
            if (data[i] <= data[a])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                printf("YES");
                break;
            }
        }
    }
    if (flag == 1) {
        printf("NO");
    }

    return 0;
}

// 25 1 4 7 8