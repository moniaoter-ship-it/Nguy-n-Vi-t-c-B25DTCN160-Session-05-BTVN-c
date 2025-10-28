#include <stdio.h>
int main() {
    int tuoi;
    float giaVeCoBan = 20000; 
    float giaPhaiTra;
    printf("Nhap Tuoi : ");
    scanf("%d", &tuoi);
    if (tuoi < 0 || tuoi > 100) {
        printf("Tuoi khong hop le\n");
    } 
    else {
        if (tuoi < 6)
            giaPhaiTra = 0;
        else if (tuoi <= 18)
            giaPhaiTra = giaVeCoBan * 0.5;
        else if (tuoi <= 60)
            giaPhaiTra = giaVeCoBan * 1.0;
        else
            giaPhaiTra = giaVeCoBan * 0.7;
        printf("So tien ve : %.0f VNÐ\n", giaPhaiTra);
    }
    return 0;
}
