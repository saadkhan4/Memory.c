#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);     // By adding 1, we allocate enough space for the characters in s plus one extra byte for the null terminator.//
     if (t == NULL)                     //  we did this cuz if malloc returns null and there isn't any space left so just abort the program.//
     {
         return 1;
     }
     strcpy(t, s);

     if (strlen(s) > 0) // atleast avoid the situation where user hit enter and there is no character and i try blindly uppercase something that's not there.//
     {
         t[0] = toupper(t[0]);
     }    

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    return 0;
}