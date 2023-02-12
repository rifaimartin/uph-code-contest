#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Latihan array 2 Dimensi\n");
    int A[3][4]={{5,20,1,11},{4,7,67,-9},{9,0,45,3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t%d", A[i][j]);
        }
           /* code */
        printf("\n");
    }

    printf("\nIndexs ke [0] [1]= %d, A[0][1]");
    printf("\nIndexs ke [1] [1]= %d, A[1][1]");
    printf("\nIndexs ke [2] [3]= %d, A[2][3]");

    
}
