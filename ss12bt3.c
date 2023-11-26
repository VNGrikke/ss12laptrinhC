#include<stdio.h>
#include<stdlib.h>
int amountArr(int a){
	int amount=0;
	if(a==2||a==3||a==5){		
		printf("%d\t",a);
		amount++;
	}else if(a!=1&&(a%2!=0&&a%3!=0&&a%5!=0)){
		printf("%d\t",a);
		amount++;
	}
	return amount;
}


int main(){
	int i,n;
	int arrOne[n],arrTwo[n];
	printf("nhap so luong phan tu cua 2 mang:");
	scanf("%d",&n);

	printf("nhap gia tri phan tu cua mang 1:\n");
	for(i=0;i<n;i++){
		printf("arrOne[%d]=",i);
		scanf("%d",&arrOne[i]);	
	}
		
	printf("nhap gia tri phan tu cua mang 2:\n");
	for(i=0;i<n;i++){
		printf("arrTwo[%d]=",i);
		scanf("%d",&arrTwo[i]);	
	}
	printf("cac so nguyen to co trong mang 1:\n");
	for(i=0;i<n;i++){
		amountArr(arrOne[i]);
	}
	int amountOne=amountArr(arrOne[i]);
	
	printf("\ncac so nguyen to co trong mang 2:\n");
	for(i=0;i<n;i++){
		amountArr(arrTwo[i]);
	}
	int amountTwo=amountArr(arrTwo[i]);
	
	if(amountOne>amountTwo){
		for(i=0;i<n;i++){
		printf("%d\t",arrOne[i]);
		}
	}else if(amountOne<amountTwo){
		printf("%d\t",arrTwo[i]);
	}else{
		printf("2 mang co so luong so nguyen to bang nhau!!");
	}
}

