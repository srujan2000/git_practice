#include <stdio.h>
#pragma pack(1)

typedef struct
{
    int roll_name;
    char name[30];
} student;

int main()
{
    student s1;
    printf("%d", sizeof(student));
}