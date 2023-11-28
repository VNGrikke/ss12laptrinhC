#include<stdio.h>
#include<stdlib.h>
int integer(int a){
	if(a==2||a==3||a==5){		
		printf("%d\t",a);
	}else if(a!=1&&a%2!=0&&a%3!=0&&a%5!=0){
		printf("%d\t",a);
	}
	return 0;
}
int amountArr(int a, int b){
	int amount=b;
	if(a==2||a==3||a==5){		
		amount++;
	}else if(a!=1&&a%2!=0&&a%3!=0&&a%5!=0){
		amount++;
	}
	return amount;
}
int main(){
	int i,n,m;
	int amountOne=0;
	int amountTwo=0;
	printf("nhap so luong phan tu cua mang1:");
	scanf("%d",&n);
	int arrOne[n];
	printf("nhap gia tri phan tu cua mang 1:\n");
	for(i=0;i<n;i++){
		printf("arrOne[%d]=",i);
		scanf("%d",&arrOne[i]);	
	}
	printf("nhap so luong phan tu cua mang2:");
	scanf("%d",&m);	
	int arrTwo[m];
	printf("nhap gia tri phan tu cua mang 2:\n");
	for(i=0;i<m;i++){
		printf("arrTwo[%d]=",i);
		scanf("%d",&arrTwo[i]);	
	}
	printf("cac so nguyen to co trong mang 1:\n");
	for(i=0;i<n;i++){
		integer(arrOne[i]);
		amountOne=amountArr(arrOne[i],amountOne);
	}
	
	printf("\ncac so nguyen to co trong mang 2:\n");
	for(i=0;i<m;i++){
		integer(arrTwo[i]);
		amountTwo=amountArr(arrTwo[i],amountTwo);
	}
	

	if(amountOne>amountTwo){
		printf("\n");
		for(i=0;i<n;i++){
			printf("%d\t",arrOne[i]);
		}
	}else if(amountOne<amountTwo){
		printf("\n");
		for(i=0;i<m;i++){
			printf("%d\t",arrTwo[i]);
		}
	}else{
		printf("\n2 mang co so luong so nguyen to bang nhau!!");
	}
	return 0;
}
