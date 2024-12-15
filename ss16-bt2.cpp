#include <stdio.h>

void switch_place(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main() {
    int a = 6, b = 8;
    printf("Gia tri ban dau cua so A: %d\n", a);
    printf("Gia tri ban dau cua so B: %d\n", b);
    switch_place(&a, &b);
    printf("Gia tri cua so A sau khi doi: %d\n", a);
    printf("Gia tri cua so B sau khi doi: %d\n", b);

    return 0;
}
