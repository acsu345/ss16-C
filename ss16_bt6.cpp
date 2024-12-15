#include <stdio.h>

int find(int *mang, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (mang[i] == x) {
            return i;
        }
    }
    return -1; 
}
int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(mang) / sizeof(mang[0]);
    int x = 7;
    int location = find(mang, n, x);
    if (location != -1) {
        printf("Vi tri cua %d trong mang la: %d\n", x, location);
    } else {
        printf("%d khong ton tai trong mang.\n", x);
    }

    return 0;
}
