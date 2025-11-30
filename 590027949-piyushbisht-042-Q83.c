#include <stdio.h>

int main()
{
    char s[1000];
    int vowels = 0, consonants = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a'; // convert to lowercase

        if (c >= 'a' && c <= 'z')
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
