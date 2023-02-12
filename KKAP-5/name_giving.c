#include <stdio.h>
#include <ctype.h>
#define MAX_LIMIT 20
int main()
{
   char str[MAX_LIMIT];
   char str2[MAX_LIMIT];
//    fgets(str, MAX_LIMIT, stdin);
   scanf("%c %c", &str, &str2);
   if (isupper(str)) {
    
   }
   printf("%s", str);
 
   return 0;
}