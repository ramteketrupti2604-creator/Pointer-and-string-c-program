//Pointer and string
#include <stdio.h>

int main() {
    char *str = "Hello";

    while(*str != '\0') {
        printf("%c ", *str);
        str++;
    }

    return 0;
}
