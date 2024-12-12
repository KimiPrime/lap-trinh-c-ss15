#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = "hello world ";
    printf("Chuoi ban dau:       [%s]\n", str);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    for (int i = 1; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
            str[i + 1] -= 32;
        }
    }

    printf("Chuoi ban sau thay doi: [%s]\n", str);
    return 0;
}

