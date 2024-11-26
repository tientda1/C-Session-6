#include <stdio.h>

int main() {
    int num, i;
    int primeNum = 1;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num <= 1) {
        primeNum = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primeNum = 0;
                break;
            }
        }
    }

    if (primeNum) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai la so nguyen to.\n", num);
    }

    return 0;
}

