#include <stdio.h>

int main(){
	int a = 0000,b;
	while(1){
	printf("Nhap mat khau: ");
	scanf("%d", &b);
	if(a==b){
		printf("Mat khau dung\n");
		break;
	}else{
		printf("Mat khau sai\n");
	}
	}
}		
