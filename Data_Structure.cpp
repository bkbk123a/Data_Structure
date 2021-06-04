#include <stdio.h>
#include "iostream"
#include "ArrayBaseStack.h"
#include "CircularQueue.h"

int main(void)
{
	// Stack의 생성 및 초기화 ///////
	Stack stack;
	StackInit(&stack);

	// 데이터 넣기 ///////
	SPush(&stack, 1);  SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);
	SPush(&stack, 5);

	// 데이터 꺼내기 /////// LIFO(last input first out 구조인거 확인)
	while (!SIsEmpty(&stack))
	{
		std::cout << SPop(&stack);
	}
	
	Queue q;
	QueueInit(&q);

	// 데이터 넣기 ///////
	Enqueue(&q, 1);  Enqueue(&q, 2);
	Enqueue(&q, 3);  Enqueue(&q, 4);
	Enqueue(&q, 5);

	// 데이터 꺼내기 ///////
	while (!QIsEmpty(&q))
		printf("%d ", Dequeue(&q));



	return 0;
}