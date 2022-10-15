#include <stdio.h>

// unsigned char *addition(unsigned char[], unsigned char[]);

unsigned char num1[50], num2[50], num3[50];

void addition(unsigned char a[], unsigned char b[])
{
    unsigned char size = 0;
    while (a[size] != '\0')
    {
        size++;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        char add = (num3[(size - i) - 1]) + (a[i] - 48) + (b[i] - 48);
        if (add > 9)
        {
            num3[(size - i) - 1] = (add % 10) + 48;
            num3[size - i] = (add / 10);
        }
        else
        {
            num3[(size - i) - 1] = add + 48;
        }
    }

    if (num3[size] != 0)
    {
        size++;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", num3[i]);
    }
}

int main()
{
    printf("Enter 1st number: ");
    scanf("%s", num1);
    printf("Enter 2nd number: ");
    scanf("%s", num2);

    addition(num1, num2);
}