#include <stdio.h>
int main() {
    float heSoLuong, luong, phuCap = 0, thuong = 0;
    int ngayCong, chucVu;
    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngayCong);
    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);
    switch(chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            printf("Chuc vu khong hop le\n");
            return 0;
    }
    if (ngayCong > 26) {
        thuong = (ngayCong - 26) * 200000;
    }
    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    printf("\n===== KET QUA =====\n");
    printf("He so luong: %.2f\n", heSoLuong);
    printf("So ngay cong: %d\n", ngayCong);
    printf("Phu cap: %.0f VND\n", phuCap);
    printf("Thuong: %.0f VND\n", thuong);
    printf("Tong luong: %.0f VND\n", luong);

    return 0;
}
