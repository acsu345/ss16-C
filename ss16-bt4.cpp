#include <stdio.h>

void inMang(int *mang, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]); 
    printf("Cac phan tu trong mang la: ");
    inMang(mang, n);

    return 0;
}
