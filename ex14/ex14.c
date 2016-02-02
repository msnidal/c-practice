#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_letters(int strlen, char arg[]);

void print_arguments(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        print_letters(strlen(argv[i]), argv[i]);
    }
}

void print_letters(int strlen, char arg[])
{
    for (int i = 0; i < strlen; i++)
    {
        char ch = arg[i];

        if (isalpha(ch) || isblank(ch))
        {
            printf("'%c' == %d\t", ch, ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
