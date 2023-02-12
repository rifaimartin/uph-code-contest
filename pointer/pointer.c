#include <stdio.h>

void main(void){

    int a = 10;
    // int b = 20;
    int* addr;

    // addr = &a;
    // addr = &b;`


    printf("value of a = %d \n", a);
    printf("value of addr (the address of variable pointer by addr)%d \n", addr);
    printf("value of *addr (value of variable pointed by addr) = %d \n", *addr);
    printf("value of *addr (addr's address) = %d\n", &addr);


    return 0;
}


// int *addr
// *addr = a&
// // type data pointer ==  address