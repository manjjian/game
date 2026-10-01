#include <stdio.h>

int main() {

    char str[20];
    char c;

    scanf("%s", str);
    scanf(" %c", &c);

    printf("%s\n", str);
    printf("!!%c!!\n", c);

    return 0;
}