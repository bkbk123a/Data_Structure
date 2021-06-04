#include <stdio.h>
#include "iostream"
#include "ArrayBaseStack.h"
#include "CircularQueue.h"

int main(void)
{
	// Stack�� ���� �� �ʱ�ȭ ///////
	Stack stack;
	StackInit(&stack);

	// ������ �ֱ� ///////
	SPush(&stack, 1);  SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);
	SPush(&stack, 5);

	// ������ ������ /////// LIFO(last input first out �����ΰ� Ȯ��)
	while (!SIsEmpty(&stack))
	{
		std::cout << SPop(&stack);
	}
	
	Queue q;
	QueueInit(&q);

	// ������ �ֱ� ///////
	Enqueue(&q, 1);  Enqueue(&q, 2);
	Enqueue(&q, 3);  Enqueue(&q, 4);
	Enqueue(&q, 5);

	// ������ ������ ///////
	while (!QIsEmpty(&q))
		printf("%d ", Dequeue(&q));



	return 0;
}