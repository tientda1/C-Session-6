#include <stdio.h>

int main() {
    int number;  
    int sum = 0; 

    printf("Nhap v�o 5 so nguy�n:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            sum += number;
        }
    }

    printf("Tong c�c so l�: %d\n", sum);

    return 0;
}

