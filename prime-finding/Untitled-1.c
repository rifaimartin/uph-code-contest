#include <stdio.h>
void main()
{ 
    int firstRange, lastRange;
    int initialValue, flag;
    printf("inpt first range value : ");
    scanf("%d", &firstRange);
    printf("input last range value : ");
    scanf("%d", &lastRange);
   
   while (firstRange<=lastRange)
    {
      flag=0;
      initialValue=1;
      while (initialValue<=firstRange) // selama angka intialValue tidak lebih besar dari first range akan lanjut di puter/looping
      {
          if (firstRange % initialValue == 0) { // jika angka first range di bagi initial value tidak bersisa, flag akan +1 (di tambah satu) jika bersisa flag tidak di tambah +1
            flag++;
          }
           
          initialValue++;
      }
      if (flag==2){ // jika resut flag, dari putaran/lopping firstRange menghasilkan jumlah flag 2 maka dia bilangan prime, di luar itu bukan
          printf(" %d  ",firstRange);
      }
    firstRange++;
    }
}