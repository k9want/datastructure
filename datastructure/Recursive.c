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

	printf("�� ����� �Է��Ͻÿ� \n");
	printf("ù ��° ��� : ");
	scanf_s("%d", &num1);
	printf("�� ��° ��� : ");
	scanf_s("%d", &num2);
	printf("�� ���� �ִ����� : %d \n", Euclidean(num1,num2));


}