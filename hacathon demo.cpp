#include <stdio.h>

int main(){
	int MAX =100;
	int arr[MAX][MAX];
	int r,c;
	int n = sizeof(arr)/sizeof(int),choice ;
	do{
		printf("     \nMENU\n     ");
		printf("1.nhap kich co va gia tri cac phan tu cua mang \n");
		printf("2.in gia tri va phan tu cua mng theo ma tran \n");
		printf("3.in cac phan tu nam tren duong bien va tinh tich \n");
		printf("4.in ra cac phan tu nam tren duong cheo chinh \n");
		printf("5. in ra cac phan tu nam tren duong cheo phu\n");
		printf("6.sap xep duong cheo chinh theo thu tu tang dan \n");
		printf("7.tim kiem 1 phan tu va in ra phan tu do trong mang\n");
		printf("8. thoat");
		printf("\n");
		scanf("%d", &choice);
		switch (choice){ // nhap kich thuoc va gia tri phan tu  
			case 1: 
			printf("Nhap so hang: ");
                scanf("%d", &r);
                printf("Nhap so cot: ");
                scanf("%d", &c);

                if (r <= 0 || c <= 0 || r > MAX || c > MAX) {
                    printf("Kich co mang khong hop le!\n");
                } else {
                    printf("Nhap cac phan tu cua mang:\n");
                    for (int i = 0; i < r; i++) {
                        for (int j = 0; j < c; j++) {
                            printf("arr[%d][%d]: ", i, j);
                            scanf("%d", &arr[i][j]);
                        }
                    }
                }
			break;  
		    case 2: 
		    printf("gia tri cua mang theo ma tran la : \n");
		    for(int i=0;i<r;i++){
		    	for(int j=0;j<c;j++ ){
		    		printf("%d  ", arr[i][j]);
				}
				printf("\n"); 
			}
			break;
			case 3: 
			printf("in ra cac phan tu nam tren duong bien :\n");
			int product ; 
			for (int i=0; i< r ;i++){
				for(int j=0;j<c;j++){
					if(i==0||i==r-1||j==0||j==c-1) 
					printf(" %d ", arr[i][j]);
					product *= arr[i][j]; 
				}
			}
				printf("tich bien cua mang la : %d", product);
			break;
			case 4: 
			printf("cac phan tu nam trne duong cheo chinh la :  "); 
			for (int i = 0; i < r; i++) { 
			printf("%d ", arr[i][i]); 
			 }
            printf("\n");
			break;
			case 5:
				printf("cac phan tu nam tren duong cheo phu la:  "); 
			for (int i = 0; i < r; i++){
				printf("%d ",arr[i][c-1]); 
			}
			printf("\n");
			case 6:
				printf("ma tran sau khi dc sap xep duong cheo chinh la :");
				int i,j; 
			for( i=0;i<r-1;i++){
				for( j=0; j<c-i-1;j++){
					int temp;
					if(arr[j][j]>arr[j+1][j+1]){
						temp=arr[j][j];
						arr[j][j]=arr[j+1][j+1];
						arr[j+1][j+1]=temp; 
						
					}
					printf("%d",arr[i][j]);
				} 
			}
			break;
			case 7:
				int found=0; 
			printf("nhap gia tri : ");
	        scanf("%d", &n);
	        for( i=0;i<r;i++){
		        for(j=0;j<c;j++){
			    if(arr[i][j]==n){
				printf("vi tri phan tu trong mang la [%d][%d]",i,j);
				found=1; 
				break; 
			}
			}
		}
		if( !found){
				printf("phan tu ko ton tai trong mang \n");
                break; 
			}  
	 
    }
	}while(choice!=8);
	printf("thoat chuong trinh");
	return 0; 
    }

	


	


     

	


