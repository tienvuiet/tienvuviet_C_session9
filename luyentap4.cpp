#include<stdio.h>
int main() {
    int a[100]; 
    int n = 0;  
    int luachon;
    while (1) {
        printf("\n              MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");

        printf("Lua chon cua ban la: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1: {
                printf("So phan tu muon nhap vao: ");
                scanf("%d", &n);
                if (n < 0 || n > 100) {
                    printf("So phan tu khong hop le!\n");
                    n = 0; 
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("a[%d] = ", i);
                        scanf("%d", &a[i]);
                    }
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    printf("Mang hien tai la: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else if (n == 100) {
                    printf("Mang da day, khong the them phan tu moi!\n");
                } else {
                    int giatri, vitri;
                    printf("Nhap vao gia tri muon them: ");
                    scanf("%d", &giatri);
                    printf("Nhap vao vi tri muon them (1 -> %d): ", n + 1);
                    scanf("%d", &vitri);

                    if (vitri < 1 || vitri > n + 1) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = n; i >= vitri; i--) {
                            a[i] = a[i - 1];
                        }
                        a[vitri - 1] = giatri;
                        n++;
                        printf("Them phan tu thanh cong!\n");
                    }
                }
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    int giatri, vitri;
                    printf("Nhap vao vi tri muon sua (1 -> %d): ", n);
                    scanf("%d", &vitri);

                    if (vitri < 1 || vitri > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        printf("Nhap vao gia tri moi: ");
                        scanf("%d", &giatri);
                        a[vitri - 1] = giatri;
                        printf("Sua phan tu thanh cong!\n");
                    }
                }
                break;
            }

            case 5: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    int vitri;
                    printf("Nhap vao vi tri muon xoa (1 -> %d): ", n);
                    scanf("%d", &vitri);

                    if (vitri < 1 || vitri > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = vitri - 1; i < n - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        n--;
                        printf("Xoa phan tu thanh cong!\n");
                    }
                }
                break;
            }

            case 6:
                printf("Thoat chuong trinh. Tam biet!\n");
                return 0;

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
        }
    }
    return 0;
}
