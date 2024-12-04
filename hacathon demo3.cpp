#include <stdio.h>

int main(){
	int MAX=100; 
	int arr[MAX]; 
	int choice;
	int Index;
	int max=arr[0];
	int n=0;
	int correct=0; 
	do{
		printf("     \nMENU\n     ");
		printf("1.nhap so phan tu va gia tri cua cac phan tu  \n");
		printf("2.in ra cac gia tri phan tu dang quan li \n");
		printf("3.in ra gia tri lon nhat cua mang  \n");
		printf("4.in ra cac phan tu la so nguyen to trong mang  \n");
		printf("5.them 1 phan tu vao trong mang \n");
		printf("6.xoa 1 phan tu trong mang  \n");
		printf("7.sap xep mang theo thu tu tang dan \n");
		printf("8. tim kiem phan tu va in ra vi tri cua phan tu do ");
		printf("9. thoat "); 
		printf("\n");
		scanf("%d", &choice);
		switch (choice){
			case 1:
			printf("Nhap so phan tu : ");
                scanf("%d", &Index);
            if(Index<0||Index>MAX){
            	printf("so phan tu ko hop le ");
            	
			}else{
				printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < Index; i++) {
                    printf("arr[%d]: ", i);
                    scanf("%d", &arr[i]);
			} 
		    }
            break;
			case 2 :
				printf("cac phan tu vua nhap la :"); 
			for(int i=0;i<Index;i++){
				printf(" %d   ", arr[i]); 
			}
			break;	 
			case 3:
			for(int i=0;i<Index;i++){
			if(max<arr[i]){
				max=arr[i]; 
			}	
			}
			printf("gia tri lon nhat cua mang la : %d", max); 
			break;
			case 4:
				if (Index == 0) {
                    printf("ko có so nguyen to \n");
                } else {
                    printf("Cac phan tu la so nguyen to: ");
                    for (int i = 0; i < Index; i++) {
                        int correct  = 1;
                        if (arr[i] <= 1) correct  = 0;
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                correct = 0;
                                break;
                            }
                        }
                        if (correct) {
                            printf("%d ", arr[i]);
                        }
                    }
                    printf("\n");
                }
            break;
            case 5:
			 if (Index >= 100) {
                    printf(" khong the them phan tu!\n");
                } else {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[Index] = value;
                    Index++;
                    printf("mang sau khi them phan tu :\n");
                    for (int i = 0; i < Index; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
			        
                }
            break;
            case 6: 
				 if (Index == 0) {
                    printf(" khong co phan tu de xoa\n");
                } else {
                    int index;
                    printf("Nhap vi tri can xoa : ", Index - 1);
                    scanf("%d", &n);
                    if (n < 0 || n >= Index) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = n; i < Index - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        Index--;
                        printf("mang sau khi xoa phan tu :\n");
                        for (int i = 0; i < Index; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    }
                }
            break;
            case 7:
			for (int i = 0; i < Index - 1; i++) {
                    for (int j = 0; j < Index-i-1; j++) {
                        if (arr[j] > arr[j+1]) {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
            printf("mang sau khi dc sap xep la  :\n");
                for (int i = 0; i <Index; i++) {
                    printf("%d ", arr[i]);
                    }  
             
        }
        break;
		case 8:
		printf("nhap phan tu muon tim : ");
        scanf("%d", &Index);
 
        for (int i = 0; i < Index; i++) {
        if (arr[i] == Index) {
        	printf("vi tri phan tu ban muon tim la : %d", arr[Index] ); 
            correct = 1;
            break;
        }
        if (!correct){
        	printf("phan tu ko co trong mang "); 
        	break; 
		}  
    }
    }
	} while(choice!=9);
		printf("thoat chuong trinh ");
		return 0; 
	    
}

