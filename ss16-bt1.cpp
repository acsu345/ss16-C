#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    printf("Gia tri cua bien so: %d\n", num);
    printf("Dia chi cua bien so: %p\n", &num);
    printf("Gia tri cua bien so thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua bien so thong qua con tro: %p\n", ptr);
    
    return 0;
}
