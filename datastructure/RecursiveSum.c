#include <stdio.h>
int RecursiveSum(int num) {
	if (num <= 0)
		return 0;
	return num + RecursiveSum(num - 1);
}
int main(void) {

	int num ;

	printf("���� ���� �Է��Ͻÿ� ");
	scanf_s("%d", &num); 
	RecursiveSum(num);
	printf("1���� %d������ �� : %d \n", num, RecursiveSum(num));
	return 0;
}

