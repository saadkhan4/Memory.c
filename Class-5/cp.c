#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;  // BYTE is just we created//

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb"); // rb : read binary
    FILE *dst = fopen(argv[2], "wb"); // wb : write binary
    BYTE b;

    while (fread(&b, sizeof(b), 1,src) != 0)    // &b : is where i want you to put the data. sizeof(b) = how big is the byte?? (b) means it's upto you. 1 = how many bytes do i need to copy it's actually 1. src = i want to put in this file.//
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(src);
    fclose(dst);
}