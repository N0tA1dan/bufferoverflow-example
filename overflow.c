#include <stdio.h>
#include <string.h>


int main(void) {
    char bf2[10] = "Hello";
    char bf1[10] = "";

    // strcpy just puts information into our char array.
    // since bf1 can only hold 10 bytes of data and we put in 11. we get a buffer overflow and we overflow into some new memory.
    strcpy(bf1, "00000000000");
    printf(bf1);
}
