#include<stdio.h>
int main(){
	int a[100];
	int n;
	printf("so phan tu muon nhap vao:");
	scanf("%d",&n);
    if (n < 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("mang sau khi nhap la:");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	int giatri, vitri;
	printf("nhap vao vi tri muon sua: ");
	scanf("%d", &vitri);
	printf("nhap vao gia tri muon thay the: ");
	scanf("%d", &giatri);
	if (vitri < 1 || vitri > n + 1) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
	for(int i=0;i<n;i++){
		if(i==vitri-1){
			a[i]=giatri;
		}
	}
    printf("mang sau khi thay doi la: ");
    for(int i=0; i<n;i++){
    	printf("%d ",a[i]);
	}
	return 0;
}
