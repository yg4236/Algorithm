#include <stdio.h>
#include <malloc.h>

typedef char element;
typedef struct QNode {
	element data;
	struct QNode* link;
}QNode;

typedef struct {
	QNode* front, * rear;
}LQueueType;

LQueueType* creatLinkedQueue() {
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

int isEmpty(LQueueType* LQ) {
	if (LQ->front == NULL)
	{
		printf("Linked Queue is empty!");
		return 1;
	}
	else return 0;
}
void enQueue(LQueueType* LQ, element item)
{
	QNode* temp = (QNode*)malloc(sizeof(QNode));
	temp->data = item;
	temp->link = NULL;
	if (LQ->front == NULL)
	{
		LQ->front = temp;
		LQ->rear = temp;
	}
	else
	{
		LQ->rear->link = temp;
		LQ->rear = temp;
	}
}

element deQueue(LQueueType* LQ)
{
	element temp;
	temp = LQ->front->data;
	LQ->front = LQ->front->link;
	return temp;
}

void printLQ(LQueueType* LQ)
{
	QNode* temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp)
	{
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ] ");
}

void main(void)
{
	LQueueType* LQ = creatLinkedQueue();
	element data;

	printf("\n ***** Queue ***** \n");
	printf("\n enqueue C >>"); enQueue(LQ, 'C'); printLQ(LQ);
	printf("\n enqueue A >>"); enQueue(LQ, 'A'); printLQ(LQ);
	printf("\n enqueue B >>"); enQueue(LQ, 'B'); printLQ(LQ);
	printf("\n enqueue D >>"); enQueue(LQ, 'D'); printLQ(LQ);
	printf("\n enqueue E >>"); enQueue(LQ, 'E'); printLQ(LQ);

	printf("\n dequeue  >>"); data = deQueue(LQ); printLQ(LQ);
	printf("\tdequeue data: %c", data);
	printf("\n dequeue  >>"); data = deQueue(LQ); printLQ(LQ);
	printf("\tdequeue data: %c", data);
	printf("\n dequeue  >>"); data = deQueue(LQ); printLQ(LQ);
	printf("\tdequeue data: %c", data);
	printf("\n dequeue  >>"); data = deQueue(LQ); printLQ(LQ);
	printf("\tdequeue data: %c", data);
	printf("\n dequeue  >>"); data = deQueue(LQ); printLQ(LQ);
	printf("\tdequeue data: %c", data);
	getchar();
}