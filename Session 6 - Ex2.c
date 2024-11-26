#include <stdio.h>

int main() {
    int number;
    int even = 0, odd = 0;

    printf("Nhap vào 5 so nguyên:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("So so chan: %d\n", even);
    printf("So so le: %d\n", odd);

    return 0;
}

