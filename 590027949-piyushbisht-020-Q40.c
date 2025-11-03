#include <stdio.h>
#include <string.h>

int main()
{
    char bin[100];

    printf("Enter binary number: ");
    scanf("%s", bin);

    printf("1's Complement = ");

    for (int i = 0; i < strlen(bin); i++)
    {
        if (bin[i] == '0')
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}
