#include <stdio.h>

void main()
{ 
   int m, u, n, a;

   printf("Program Bilangan Prima\n");
   printf("Create by : Hafizatul Muna - J1F115207\n");
   printf("--------------awal------------------------\n");
   scanf("Jumlah Batas Awal %d : ", &m);
   printf("--------------akhir------------------------\n");
   scanf("Jumlah Batas Akhir%d : ", &a);
   

   while (m<=a)
    {
      n=0;
      u=1;
      while (u<=m)
      {
          if (m % u == 0)
            n = n + 1;
            u++;
      }
      if (n==2){
          printf("%d  ",m);
      }
    m++;
    }

   return 0 ;
}
