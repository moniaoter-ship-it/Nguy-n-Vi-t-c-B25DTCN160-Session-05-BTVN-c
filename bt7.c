#include <stdio.h>
int main() {
    char c;
    printf("Nhap mot ky tu: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') {
        c = c - 32;
        printf("Chu hoa tuong ung: %c\n", c);
    } 
    else if (c >= 'A' && c <= 'Z') {
        c = c + 32;
        printf("Chu thuong tuong ung: %c\n", c);
    } 
    else {
        printf("Khong phai chu cai.\n");
    }
    return 0;
}
