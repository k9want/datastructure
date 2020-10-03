#include <stdio.h>

int Euclidean(int n1, int n2) {
	if (n1 % n2 == 0)
	{
		return n2;
	}
	else
		return Euclidean(n2, (n1%n2));
}

int main(void) {
	int num1, num2;

	printf("두 양수를 입력하시오 \n");
	printf("첫 번째 양수 : ");
	scanf_s("%d", &num1);
	printf("두 번째 양수 : ");
	scanf_s("%d", &num2);
	printf("두 수의 최대공약수 : %d \n", Euclidean(num1,num2));


}