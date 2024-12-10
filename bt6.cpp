#include <stdio.h>
int main() {
    const float PI = 3.14f;
    float banKinh = 7.0f;
    float chuVi = 2 * PI * banKinh;
    float dienTich = PI * banKinh * banKinh;
    printf("Hinh tron co ban kinh = %.2f\n", banKinh);
    printf("Chu vi hinh tron = %.2f\n", chuVi);
    printf("Dien tich hinh tron = %.2f\n", dienTich);

    return 0;
}
