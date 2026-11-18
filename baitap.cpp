#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    // Nhập các hệ số từ bàn phím
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Nhap he so c: ");
    scanf("%d", &c);
    
    // Kiểm tra trường hợp a = 0 (phương trình bậc 1)
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            int x = -c / b;
            printf("Phuong trinh co 1 nghiem duy nhat: x = %.2d\n", x);
        }
    } 
    // Trường hợp a != 0 (phương trình bậc 2 thực sự)
    else {
        int delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            int x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %d\n", x);
        } else {
            int x1 = (-b + sqrt(delta)) / (2 * a);
            int x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2d\n", x1);
            printf("x2 = %.2d\n", x2);
        }
    }
    
    return 0;
}