#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int j = get_int("j: ");
    int k = get_int("k: ");

    if (j == k)
    {
        printf("same\n");            // comparing integers//
    }
    else
    {
        printf("different\n");
    }
}

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("f: ");

    if (strcmp(s,t) == 0)            // comparing strings//
    {
        printf("same\n");
    }
    else 
    {
        printf("different\n");
    }
}