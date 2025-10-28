#include <stdio.h>
int main() {
    float m3, tongtien = 0;
    printf("Nhap so m3 nuoc tieu thu: ");
    scanf("%f", &m3);
    if (m3 < 0) {
        printf("So m3 khong hop le!\n");
    }
    else {
        if (m3 <= 10) {
            tongtien = m3 * 6000;
        } 
        else if (m3 <= 20) {
            tongtien = 10 * 6000 + (m3 - 10) * 7000;
        } 
        else if (m3 <= 30) {
            tongtien = 10 * 6000 + 10 * 7000 + (m3 - 20) * 8500;
        } 
        else {
            tongtien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m3 - 30) * 10000;
        }

        printf("Tong tien phai tra: %.0f VND\n", tongtien);
    }
    return 0;
}
