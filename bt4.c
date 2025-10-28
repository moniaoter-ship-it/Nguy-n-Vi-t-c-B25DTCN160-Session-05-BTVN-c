#include <stdio.h>
int main() {
    float thuNhap, thue;   
    float thueSuat;        
    printf("So Tien:");
    scanf("%f", &thuNhap);
    if (thuNhap <= 5)
        thueSuat = 5;
    else if (thuNhap <= 10)
        thueSuat = 10;
    else
        thueSuat = 15;
    thue = thuNhap * (thueSuat / 100);
    printf("Thue thu nhap phai dong : %.2f\n", thue);

    return 0;
}
