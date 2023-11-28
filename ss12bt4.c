#include<stdio.h>
#include<stdlib.h>

int symmetric(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if(arr[start] != arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main(){
	int i,n,m;
	int start = 0;
	printf("nhap so luong phan tu cua mang 1:");
	scanf("%d",&n);
	int arrOne[n];
	
	printf("\nnhap so luong phan tu cua mang 2:");
	scanf("%d",&m);
	int arrTwo[m];
	
	printf("\nnhap gia tri cac phan tu mang 1:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arrOne[i]);
	}
	
	printf("\nnhap gia tri cac phan tu mang 2:\n");
		for(i=0;i<m;i++){
		scanf("%c",&arrTwo[i]);
	}
		
	if(symmetric(arrOne,n)){
		printf("mang 1 la mang doi xung.\n");
	}else{
		printf("mang 1 khong phai mang doi xung\n");
	}
		
	if(symmetric(arrTwo,m)){
		printf("mang 2 la mang doi xung.");
	}else{
		printf("mang 2 khong phai mang doi xung");
	}
	

}
