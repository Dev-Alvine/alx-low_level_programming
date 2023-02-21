#include <stdio.h>

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int c = 'A';

    if (_islower(c)) {
        printf("%c is a lowercase letter\n", c);
    } else {
        printf("%c is not a lowercase letter\n", c);
    }

    return 0;
}

