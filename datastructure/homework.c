#include <stdio.h>
int Recursive_1(int num) {


	if (num <= 0)
		return 0;

	return num + Recursive_1(num - 1);


}
int main(void) {

	int num ;

	printf("���� ���� �Է��Ͻÿ� ");
	scanf_s("%d", &num);
	Recursive_1(num);
	printf("1���� %d������ �� : %d \n", num, Recursive_1(num));
	return 0;
}
