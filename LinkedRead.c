#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
}Node;

int main(void) {
	
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while (1){


		printf("�ڿ��� �Է� : ");
		scanf_s("%d", &readData);

		if (readData < 1)
			break;


		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;



		if (head == NULL)
		{
			head = newNode;
		}
		else {
			tail->next = newNode;
		}
		tail = newNode;
	}
	printf("\n");
	
	printf("�Է� ���� �� \n");
	if (head == NULL) {
		printf("�ƹ��͵� �����ϴ�");
	}
	else
	{
		cur = head;
		printf("%d \n", cur->data);

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d \n", cur->data);
		}
	}

	//delete
	printf("\n���� \n");
	if (head == NULL)
	{
		printf("nothing");
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d \n", head->data);
		free(delNode);


		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d \n", delNode->data);
			free(delNode);

		}

	}
	return 0;

}
