#include <stdio.h>

int main(){
	int a;
	for(a=1; a<=100; a++){
	
	printf("%d\n", a);
		if (a%5==0 && a%3==0){
	printf("FizzBuzz\n");
	}else if (a%5==0){
	printf("Buzz\n");
	}else if (a%3==0){
	printf("Fizz\n");

	}
}


}
