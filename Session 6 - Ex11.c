#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la:\n");
    while (count < n) {
        int primeNum = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primeNum = 0;
                break;
            }
        }

        if (primeNum) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}

