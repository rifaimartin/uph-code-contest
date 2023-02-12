#include <stdio.h>
#include <ctype.h>
int main(void)
{
  //variable
  char str[50];
  char str2[50];
  char merge[100];
  
  //output
  scanf("%s %s", &str,&str2);

  int i = 0;
  while(str[i]) {
    merge[i] = str[i];
    merge[i] = str2[i];
    i++;
  }

  
  printf("%s", merge);
}
  