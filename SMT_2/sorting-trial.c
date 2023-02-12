
// This code is made in regards of solving problem A on weak 2 Assignment:
// Name : Muhamad Rifai
// NIM : 01085220004

#include <stdio.h>
int main()
{

    int i, j, a, totalSize, number[30];
    scanf("%d", &totalSize);

    int c = 0;
    while (c < totalSize)
    {
        for (i = 0; i < totalSize; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < totalSize; ++i)
        {

            for (j = i + 1; j < totalSize; ++j)
            {

                if (number[i] > number[j])
                {

                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

        printf("#%d\n", c + 1);
        for (i = 0; i < totalSize; ++i)
            printf("%d ", number[i]);

        for (i = 0; i < totalSize; ++i)
        {

            for (j = i + 1; j < totalSize; ++j)
            {

                if (number[i] < number[j])
                {

                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

        printf("\n");
        for (i = 0; i < totalSize; ++i)
            printf("%d ", number[i]); /* code */
    }
    return 0;
}