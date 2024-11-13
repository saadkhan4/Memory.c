#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("ages.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *age = get_string("Age: ");

    fprintf(file, "%s ,%s\n", name, age);
    fclose(file);
}