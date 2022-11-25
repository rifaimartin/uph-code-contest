#include <stdio.h>
#include <stdbool.h>

bool flag;//global variable

bool prime(int);//FUNCTION PROTOTYPE
void primeproc(int, bool);//PROCEDURE PROTOYPE

int main()
{
    int x; bool flag = 1;
    scanf("%d", &x);
/*
    bool flag = 1;
    if(x==1) flag = 0; else
    {
        for(int i=2;i<=(x/2);i++)
        {
            if(!(x%i)) 
            {
                flag = 0;
                break;
            } 
        }
    }
*/
    //if (prime(x)) printf("Prime.\n"); else printf("Not Prime.\n");//checking with function
    primeproc(x, flag);//checking with procedure 

    return 0;
}

//FUNCTION DEFINITION
bool prime (int x)
{
    bool flag = 1;
    if(x==1) flag = 0; else
    {
        for(int i=2;i<=(x/2);i++)
        {
            if(!(x%i)) 
            {
                flag = 0;
                break;
            } 
        }
    }
    if (flag) return true; else return false;
}

//PROCEDURE DEFINITION
void primeproc(int x, bool flag)
{
    if(x==1) flag = 0; else
    {
        for(int i=2;i<=(x/2);i++)
        {
            if(!(x%i)) 
            {
                flag = 0;
                break;
            } 
        }
    }
    if (flag) printf("Prime.\n"); else printf("Not Prime.\n");
}