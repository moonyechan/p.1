#include <stdio.h>

int main(void) {
    int k;
    printf("정수를 입력하시오: ");
    scanf_s("%d", &k);
    do {
        printf("%d", k % 10);
        k = k / 10;
    } while (k > 0);
    return 0;
}