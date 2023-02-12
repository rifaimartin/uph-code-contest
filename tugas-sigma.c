#include <stdio.h>
int main()
{
    int i, size,sizeQuery, q1, q2;
    printf("input size array data:");
    scanf("%d", &size);
    int data[size];
    printf("input %d list data disini:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &data[i]);
    int flag=0;

    printf("input total query:");
    scanf("%d", &sizeQuery);
    int dataSum[100];
    int arrQueryLength[sizeQuery];
    
    for (i = 1; i < sizeQuery; i++) {
        scanf("%d %d \n", &q1, &q2);
        if(q1 == q2) {
            &dataSum[data[q1]];
        }else{
            &dataSum[data[q1] + data[q2]];
        }
    }
    
    for(i=0; i < sizeQuery; i++) {
        printf("Case : %d\n", dataSum[i]);
    }
        
        

    // for (i = 0; i <= size; i++)
    // {
    //     int a = i + 1;
    //     if (a <= size)
    //     {
    //         if (data[i] <= data[a])
    //         {
    //             flag = 1;
    //         }
    //         else
    //         {
    //             flag = 0;
    //             printf("YES");
    //             break;
    //         }
    //     }
    // }
    if (flag == 1) {
        printf("NO");
    }
    return 0;
}