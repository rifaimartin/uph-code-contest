#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;
    
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    
    printf("Deret Fibonacci: ");
    
    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    return 0;
}