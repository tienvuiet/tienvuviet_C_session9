#include<stdio.h>
int main(){
	int n,m;
	int a[100][100];
	int luachon;	
	while(1){
		printf("             MENU\n");
		printf("1. nhap kich co va gia tri cua cac phan tu mang\n");
		printf("2. in gia tri cua cac phan tu mang theo ma tran\n");
		printf("3. in gia tri phan tu le va tinh tong\n");
		printf("4. in cac phan tu nam tren duon bien va tinh tich\n");
		printf("5. in cac phan tu tren duong cheo chinh\n");
		printf("6. in cac phan tu tren duong cheo phu\n");
		printf("7. in ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("8. thoat\n");
		printf("moi sep chon: ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:{
	        printf("nhap vao so hang: ");
        	scanf("%d", &n);
        	printf("nhap vao so cot: ");
        	scanf("%d", &m);
        	for(int i=0;i<n;i++){
        		for(int j=0;j<m;j++){
        			printf("a[%d][%d]= ",i,j);
        			scanf("%d",&a[i][j]);
				}
			}
				break;
			}
			case 2:{
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
				break;
			}
			case 3:{
				int tong=0;
				printf("cac phan tu le la:");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(a[i][j]%2!=0){
							printf("%d",a[i][j]);
							tong+=a[i][j];
						}
					}
				}
				printf("tong cua cac so le la: %d",tong);
				break;
			}
			case 4:{
				double tich=1;
				printf("cac phan tu nam ngoai duong bien la:");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0||i==n-1||j==0||j==m-1){
							printf("%d ",a[i][j]);
							tich*=a[i][j];
						}else{
							printf(" ");
						}
					}
				}
				printf("tich cac phan tu o ngoai duong bien: %lf",tich);
				break;
			}
			case 5:{
				for(int i=0;i<n;i++){
			       for(int j=0;j<m;j++){
				printf("cac phan tu o duong cheo chinh la: ");
						if(i==j){
							printf("%d ",a[i][j]);
						}else{
							printf(" ");
						}
						}
					}
				break;
			}
			case 6:{
				printf("cac phan tu nam tren duong cheo phu: ");
			for(int i=0,j=m-1;i<n&&j>=0;i++,j--){
                printf("%2d\n",a[i][j]);
            } 
				break;
			}
			case 7:{
				int tongmax=0, dong;  
				for(int i=0;i<n;i++){
					int hangtong=0;
					for(int j=0;j<m;j++){
					    hangtong+=a[i][j];
					}if(hangtong>tongmax){
						tongmax=hangtong;
						dong=i+1;
					}
				}
				printf("tong gia tri cac ptu cua hang lon nhat la: %d\n",tongmax);
				printf("dong do la: %d", dong);
				break;
			}
			case 8:{
				printf("da thoat chuong trinh!!");
				return 0;
			}
			default :{
				printf("gia tri nhap vao khong hop le!!!");
				break;
			}
				
		}
		
	}
	return 0;
}
