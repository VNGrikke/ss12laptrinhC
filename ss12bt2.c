#include<stdio.h>
#include<stdlib.h>

void capSo(int a, int b){
	if(a>b){
		printf("%d * %d = %d\n",a,b,a*b);
		if(a%b==0){
			printf("%d / %d = %d\n",a,b,a/b);
		}else{
			printf("%d khong chia het cho %d\n",a,b);
		}
	}else{
		printf("%d * %d = %d\n",b,a,b*a);
		if(b%a==0){
			printf("%d / %d = %d\n",b,a,b/a);
		}else{
			printf("%d khong chia het cho %d\n",b,a);
		}
	}
}
int main(){
	int a,b,c;
	printf("nhap vao gia tri a, b, c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("cap so thu nhat:\n");
	capSo(a,b);
	printf("cap so thu hai:\n");
	capSo(b,c);
	printf("cap so thu ba:\n");
	capSo(a,c);
}
