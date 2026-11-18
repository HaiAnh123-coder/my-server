#include <stdio.h>
#include <math.h> 
// S? d?ng hàm sqrt() d? tính can b?c hai

int main() {
    float a, b, c;
    
    // Nh?p các h? s? t? bàn phím
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    
    // Ki?m tra tru?ng h?p a = 0 (phuong trình b?c 1)
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co 1 nghiem duy nhat: x = %.2f\n", x);
        }
    } 
    // Tru?ng h?p a != 0 (phuong trình b?c 2 th?c s?)
    else {
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
    
    return 0;
}
