#include <stdio.h>
#include <string.h>

struct student
{
    char name[30];
    float marks;
    /* data */
};

struct pisang
{
    char colorCode;
    char origin[10];
    int sweetness;
};

int main()
{
    int a;
    struct student rifai[12];
    struct pisang ambon, susu, kapek, batu;
    ambon.colorCode = 'H';
    ambon.sweetness = 10;

    strcpy(rifai[0].name, "rifai");
    printf("Name: %s\n", rifai[0].marks);
    rifai[0].marks = 100;
    printf("Marks : %s\n", rifai[0].marks);

    return 0;
}
