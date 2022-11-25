#include <stdio.h>

void main()
{

  int firstRange = 5, lastRange = 10;

  // printf("input first range value : ");
  // scanf("%d", &firstRange);
  // printf("input last range value : ");
  // scanf("%d", &lastRange);
  loopValueFirstLastRange(firstRange, lastRange);
  return 0;
}

void loopValueFirstLastRange(int firstRange, int lastRange)
{
  int initialValue, flag;
  while (firstRange <= lastRange)
  {
    flag = 0;
    initialValue = 1;
    while (initialValue <= firstRange)
    {
      if (firstRange % initialValue == 0)
      {
        flag++;
      }

      initialValue++;
    }
    if (flag == 2)
    {
      printf(" %d  ", firstRange);
    }
    firstRange++;
  }
};