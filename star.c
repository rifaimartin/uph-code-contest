#include <stdio.h>

void square(int n);

int main()
{
//==================READING INPUT=====================//
    int n;
    scanf("%d", &n);
  
    square(n);
    square(n+1);

//================PRINT LEFT TRIANGLE===================//    
    printf("\n");
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

//================PRINT REVERSED RIGHT TRIANGLE===================//    
    printf("\n");
    i=0;
    while(i<n)
    {
        int j=0;
        
        /*
        while(j<i)
        {
            printf(" ");
            j++;
        }
        */
        
        while(j<n)
        {
            if(j<i) printf(" "); else printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

void square(int n)
{
    //================PRINT NXN SQUARE===================//    
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}