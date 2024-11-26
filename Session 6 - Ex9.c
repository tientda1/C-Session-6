#include <stdio.h>
int main() {
    int num, num1, num2, num3, sum;

    printf("Cac so Armstrong co 3 chu so la:\n");
    for (num = 100; num <= 999; num++) {
        num1 = num / 100;
        num2 = (num / 10) % 10;
        num3 = num % 10;
        sum = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

