
// this code is mae in regards of solving problem A on week 2 assignment
// Nama :  Muhamad Rifai
// NIM : 01085220004

#include <stdio.h>
int main() 
{
  int i, j, row, col;
  
  //initiate max lengh array
  int a[20][20], b[20][20], sum[20][20] = {};
  printf("Enter number of rows: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &col);
  printf("Enter Matrix A: \n");
  for(i = 0; i < col; i++)
  {
    for(j = 0; j < row; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter Matrix B: \n");
  for(i = 0; i < col; i++)
  {
    for(j = 0; j < row; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  printf("Sum of two Matrices=\n");
  for (int k = 0; k < col; k++)
  {
    for (i = 0; i < col; i++)
    {
      for (j = 0; j < row; j++)
      {
          sum[k][i] += a[k][j] * b[j][i];
      }
    }
  }

    //print new matrix for result sum two matrix a & b
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            printf("%d      ", sum[i][j]);
        }
        printf("\n");
    }


}