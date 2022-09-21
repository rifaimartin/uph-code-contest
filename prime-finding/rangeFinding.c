#include <stdio.h>

int main()
{

    int firstRange, lastRange;
    int initialValue = 2;
    printf("inpt first range");
    scanf("%d", &firstRange);
    printf("input last range");
    scanf("%d", &lastRange);

    while (firstRange < lastRange)
    {
        firstRange++;
        if (firstRange%initialValue == 0);
        printf("%d", firstRange%2!=0);
        initialValue++;
        /* code */
    };

    return 0;
}