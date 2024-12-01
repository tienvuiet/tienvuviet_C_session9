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
	int vitri;
	printf("nhap vao vi tri muon xoa: ");
	scanf("%d", &vitri);
	for(int i=vitri-1;i<n;i++){
     a[i]=a[i+1];
    }
	    n--;
    printf("mang sau khi xoa la: ");
    for(int i=0; i<n;i++){
    	printf("%d ",a[i]);
	}
	return 0;
}
