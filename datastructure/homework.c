#include <stdio.h>
int Recursive_1(int num) {


	if (num <= 0)
		return 0;

	return num + Recursive_1(num - 1);


}
int main(void) {

	int num ;

	printf("정수 값을 입력하시오 ");
	scanf_s("%d", &num);
	Recursive_1(num);
	printf("1부터 %d까지의 합 : %d \n", num, Recursive_1(num));
	return 0;
}
