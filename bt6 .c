#include <stdio.h>
int main() {
    float a, b, result;
    char op;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            result = a + b;
            printf("Ket qua: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Ket qua: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Ket qua: %.2f\n", result);
            break;
        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0\n");
            else {
                result = a / b;
                printf("Ket qua: %.2f\n", result);
            }
            break;

        default:
            printf("Loi: Toan tu khong hop le\n");
    }
    return 0;
}

