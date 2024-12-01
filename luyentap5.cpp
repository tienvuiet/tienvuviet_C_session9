#include<stdio.h>
#include<math.h>
int main() {
    int a[100]; 
    int n = 0;  
    int luachon;
    while (1) {
        printf("\n              MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Cac phan tu chan va tong cua chung\n");
        printf("4. Tim min && max\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
                	int tong=0;
                    for(int i=0;i<n;i++){
                    	if(a[i]%2==0){
                    		printf("%d ",a[i]);
                    		tong+=a[i];
						}
					}
					printf("tong cac phan tu chan la: %d",tong);
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                  int max=a[0];
                  for(int i=0;i<n;i++){
                  	if(a[i]>max){
                  		max=a[i];
					  }
				  }
				  printf("max la: %d\n", max);
				  int min=a[0];
				  for(int i=0;i<n;i++){
				  	if(a[i]<min){
				  		min=a[i];
					  }
				  }
				  printf("min la: %d\n", min);
                }
                break;
            }

            case 5: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                	printf("cac so nguyen to trong mang la:\n");
                	int tong5=0;
                   for(int i=0;i<n;i++){
                   	int dem=1;
                   	if(a[i]<2){
                   		dem =0;
					   }else{
					   	for(int j=2;j<=sqrt(a[i]);j++){
					   		if(a[i]%j==0){
					   			dem=0;
					   			break;
							   }
						   }
					   }
					if(dem==1){
						printf("%d ", a[i]);
						tong5+=a[i];
					}   
				   }
				   printf("ket qua tong cac so nguyen to la: %d", tong5);
                }
                break;
            }
            case 6:{
            	int m;
            	int dem6=0;
            	printf("nhap vao so muon tim: ");
            	scanf("%d",&m);
            	for(int i=0;i<n;i++){
            		if(a[i]==m){
            			dem6++;
					}
				}
				if(dem6==0){
					printf("khong co so nay ton lai trong mang:");
				}else{
				printf("so %d xuat hien %d lan",m, dem6);
			}
				break;
			}
			case 7:{
			int giatri, vitri;
        	printf("nhap vao gia tri muon tren: ");
        	scanf("%d", &giatri);
        	printf("nhap vao vi tri muon tren: ");
        	scanf("%d", &vitri);
        	if (vitri < 1 || vitri > n + 1) {
            printf("Vi tri khong hop le!\n");
            return 1;
            }
         	for(int i=n;i>=vitri;i--){
     		a[i]=a[i-1];
         	}
     	    a[vitri-1]=giatri;
    	    n++;
            printf("mang sau khi chen la: ");
            for(int i=0; i<n;i++){
         	printf("%d ",a[i]);
         	}
				break;
			}
            case 8:
                printf("Thoat chuong trinh. Tam biet!\n");
                return 0;

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
        }
    }
}
    return 0;
}
