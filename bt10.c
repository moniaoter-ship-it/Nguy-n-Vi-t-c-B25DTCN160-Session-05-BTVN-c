#include <stdio.h>
int main() {
    int soKwh, loaiHo;
    float tienBacThang = 0, phuPhi, tongTien;
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soKwh);
    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiHo);
    if (soKwh < 0) {
        printf("So dien khong hop le\n");
        return 0;
    }
    if (soKwh <= 50)
        tienBacThang = soKwh * 1500;
    else if (soKwh <= 100)
        tienBacThang = 50 * 1500 + (soKwh - 50) * 2000;
    else if (soKwh <= 200)
        tienBacThang = 50 * 1500 + 50 * 2000 + (soKwh - 100) * 2500;
    else
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKwh - 200) * 3000;
    switch (loaiHo) {
        case 1:
            phuPhi = tienBacThang * 0.05; 
            break;
        case 2:
            phuPhi = tienBacThang * 0.10; 
            break;
        case 3:
            phuPhi = tienBacThang * 0.08; 
        default:
            printf("Loai ho khong hop le\n");
            return 0;
    }
    tongTien = tienBacThang + phuPhi;
    printf("\n===== KET QUA =====\n");
    printf("So dien tieu thu: %d kWh\n", soKwh);
    printf("Tien bac thang: %.0f VND\n", tienBacThang);
    printf("Phu phi: %.0f VND\n", phuPhi);
    printf("Tong tien dien phai tra: %.0f VND\n", tongTien);

    return 0;
}
