#include <stdio.h>

int main(void){
    //make matrix 1 & 2
    int m1[3][3], m2[3][3];

    //input matrix 1 component
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    //input matrix 2 component
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    //make new 3x3 matrix for dot product
    int m3[3][3]={};
    for(int k = 0 ; k < 3 ; k++){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                m3[k][i] += m1[k][j] * m2[j][i];
            }
        }
    }

    //print matrix3
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d      ", m3[i][j]);
        }
        printf("\n");
    }
}