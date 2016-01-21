#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You need an argument. Exiting...\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        printf("arg %d: %s, consisting of the letters...\n", i, argv[i]);

        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            char letter = argv[i][j];

            switch (letter)
            {
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", j);
                    break;
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", j);
                    break;
                case 'i':
                case 'I':
                    printf("%d: 'I'\n", j);
                    break;
                case 'o':
                case 'O':
                    printf("%d: 'O'\n", j);
                    break;
                case 'u':
                case 'U':
                    printf("%d: 'U'\n", j);
                    break;
                case 'y':
                case 'Y':
                    printf("%d: 'Y'\n", j);
                    break;
                default:
                    printf("%d: 'not a vowel breh'\n", j);
            }
        }
    }

    return 0;
}
