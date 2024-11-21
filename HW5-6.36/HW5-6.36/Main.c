#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char* str) {
    if (*str == '\0') {
        return; 
    }
    stringReverse(str + 1); 
    putchar(*str);          
}

int main() {
    const char* input = "Hello, World!";
    stringReverse(input);
    putchar('\n');
    return 0;
}
