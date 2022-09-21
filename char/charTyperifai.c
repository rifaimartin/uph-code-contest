#include <stdio.h>
#include <ctype.h>

int main () {
    char ch;
    int firstRange, lastRange;

    while ((ch=getchar()) != '\n') 
    {
        if (isalpha(ch))
            putchar(ch+1);
            else putchar(ch);
        
        /* code */
    }
    putchar(ch);

    return 0;
    
}