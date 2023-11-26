#include<stdio.h>
#include<stdlib.h>

void capSo1(int a, int b){
	printf("cap so thu nhat:\n");
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
void capSo2(int b, int c){
	printf("cap so thu hai:\n");
	if(b>c){
		printf("%d * %d = %d\n",b,c,b*c);
		if(b%c==0){
			printf("%d / %d = %d\n",b,c,b/c);
		}else{
			printf("%d khong chia het cho %d\n",b,c);
		}
	}else{
		printf("%d * %d = %d\n",c,b,c*b);
		if(c%b==0){
			printf("%d / %d = %d\n",c,b,c/b);
		}else{
			printf("%d khong chia het cho %d\n",c,b);
		}
	}
}
void capSo3(int a, int c){
	printf("cap so thu ba:\n");
	if(a>c){
		printf("%d * %d = %d\n",a,c,a*c);
		if(a%c==0){
			printf("%d / %d = %d\n",a,c,a/c);
		}else{
			printf("%d khong chia het cho %d\n",a,c);
		}
	}else{
		printf("%d * %d = %d\n",c,a,c*a);
		if(c%a==0){
			printf("%d / %d = %d\n",c,a,c/a);
		}else{
			printf("%d khong chia het cho %d\n",c,a);
 		}
	}
}

int main(){
	int a,b,c;
	printf("nhap vao gia tri a, b, c:");
	scanf("%d %d %d",&a,&b,&c);
	capSo1(a,b);
	capSo2(b,c);
	capSo3(a,c);
}
