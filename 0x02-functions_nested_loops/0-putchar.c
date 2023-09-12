#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return - always 0
 */

int main() {
    char text[] = "_putchar\n";
    write(1, text, sizeof(text) - 1); // 1 is the file descriptor for stdout
    return 0;
}
