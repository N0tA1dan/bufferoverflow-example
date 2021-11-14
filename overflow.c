#include <stdio.h>
#include <string.h>


int main(void) {
    
    // the variables below are defined in this function therefore they're put into the stack. The Stack of memory just holds local variables(defined/declared variables in a function)
    char bf2[10] = "Hello";
    char bf1[10] = "";

    // strcpy() just copies our information we give it into the char array
    // since bf1 can only hold 10 bytes of data and we put in 11. we get a buffer overflow and we overflow into some new memory.
    strcpy(bf1, "00000000000");
    printf(bf1);
}
