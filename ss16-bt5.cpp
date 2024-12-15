#include <stdio.h>

void update_element(int *mang, int location, int new_element) {
    *(mang + location) = new_element;
}

int main() {
    int mang[] = {1,5,9,55,32};
    int n = sizeof(mang) / sizeof(mang[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    int update_location = 2;
    int new_element = 10;
    update_element(mang, update_location, new_element);
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
