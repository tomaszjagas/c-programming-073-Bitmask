#include <stdio.h>

int main(void) {
    int flags = 15; // 0000 1111
    int mask = 182; // 1011 0110

    flags = flags | mask; // 1011 1111 masking

    flags = flags & ~(mask); // 0000 1001 turning on off

    flags = flags ^ mask; // 1011 1001 toggle

    return 0;
}