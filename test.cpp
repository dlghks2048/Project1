#define CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main() {
    printf("한글: ");
    char c[512];
    scanf_s("%s", c, 512);
    printf("%s", c);

    return 0;
}