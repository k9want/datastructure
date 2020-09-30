#include <stdio.h>
int RecursiveSum(int num) {
	if (num <= 0)
		return 0;
	return num + RecursiveSum(num - 1);
}
int main(void) {

	int num ;

	printf("정수 값을 입력하시오 ");
	scanf_s("%d", &num); 
	RecursiveSum(num);
	printf("1부터 %d까지의 합 : %d \n", num, RecursiveSum(num));
	return 0;
}

