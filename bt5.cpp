#include <stdio.h>
int main() {
    int chieuDai = 10;
    int chieuRong = 5;
    int chuVi = 2 * (chieuDai + chieuRong);
    int dienTich = chieuDai * chieuRong;
    printf("Hinh chu nhat co chieu dai = %d, chieu rong = %d\n", chieuDai, chieuRong);
    printf("Chu vi hinh chu nhat = %d\n", chuVi);
    printf("Dien tich hinh chu nhat = %d\n", dienTich);
    return 0;
}
