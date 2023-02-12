#include<stdio.h>

int fibo(int i) {

  if (i == 0) {
    return 0;
  }

  if (i == 1) {
    return 1;
  }

  return fiboNac(i - 1) + fiboNac(i - 2);

}

int main() {

  int i, n=5;
  printf("Enter a digit for fibonacci series: ");
  scanf("%d", & n);

  for (i = 1; i <= n; i++) {
    printf(" %d ", fiboNac(i));
  }

  return 0;
}