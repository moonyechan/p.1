#include <stdio.h>

int main(void) {
    int k;
    printf("������ �Է��Ͻÿ�: ");
    scanf_s("%d", &k);
    do {
        printf("%d", k % 10);
        k = k / 10;
    } while (k > 0);
    return 0;
}