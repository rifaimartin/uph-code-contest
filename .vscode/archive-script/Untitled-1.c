#include <stdio.h>
int main()
{

   int i = 50;
   int count = 1;
   while (count < 10)
   {
      // printf("%d\n", i);
      printf("tambah satu%d\n", i+count);
      printf("kurang satu%d\n", i-count);    
    
      count++; 
   }
   return 0;
}



#include <stdio.h>
int main()
{
    int i, size,sizeQuery, q1, q2;
    printf("input size array data:");
    scanf("%d", &size);
    int data[size];
    printf("input %d list data disini:\n", size);
    for (i = 0; i < size; i++) // looping with filled value(scanf) data sesuai size data 
        scanf("%d", &data[i]);
    printf("input total query:");
    scanf("%d", &sizeQuery);
    int dataSum[100];
    for(i = 0; i < sizeQuery; i++) { // looping size array dari hasil input
        scanf("%d %d ", &q1, &q2);
        if(q1 == q2) {  // compare query 1 dan 2 , same or no
            dataSum[i] = data[q1 -1];
        }else{
            dataSum[i] = data[q1 -1] + data[q2 -1]; // if not match q1 q1 then calculate keduanya and put to array data sum
        }
    }
    for(i = 0; i < sizeQuery; i++) { // looping sebanyak size array, untuk result akhir
        printf("Case #%d: %d\n",i +1, dataSum[i]);
    }
    return 0;
}