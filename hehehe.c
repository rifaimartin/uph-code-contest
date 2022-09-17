#include <stdio.h>
int main()
{

   int i = 50;
   int count = 1;
   while (count < 50)
   {
      // printf("%d\n", i);
      printf("tambah satu%d\n", i+count);
      printf("kurang satu%d\n", i-count);    
    
      count++; 
   }
   return 0;
}