#include <stdio.h>
int main()
{
    int i, size,sizeQuery, q1, q2;
    scanf("%d", &size);
    int data[size];
    for (i = 0; i < size; i++)
        scanf("%d",&data[i]);
    scanf("%d", &sizeQuery);
    int dataSum[100000];
    for(i = 0; i < sizeQuery; i++) {
        scanf("%d %d ", &q1, &q2);
        if(q1 == q2) {
            dataSum[i] = data[q1 -1];
        }else{
            dataSum[i] = data[q1 -1] + data[q2 -1];
        }   
    }
    for(i = 0; i < sizeQuery; i++) {
        printf("Case #%d: %d\n",i +1, dataSum[i]);
    }
    return 0;
}