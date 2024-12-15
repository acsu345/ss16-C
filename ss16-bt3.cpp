#include <stdio.h>

void sum(int a, int b, int *ans) {
    *ans = a + b;
}
int main() {
    int num1 = 43, num2 = 3, tong;
    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);
    sum(num1, num2, &tong);
    printf("Tong cua hai so la: %d\n", tong);

    return 0;
}
