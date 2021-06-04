#include "CircularQueue.h"
#include <stdio.h>
#include <stdlib.h>

void QueueInit(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}

int QIsEmpty(Queue* pq)
{
	if (pq->front == pq->rear)//원형 큐에서는 front 와 rear빈상태로 start
		return TRUE;
	else
		return FALSE;
}

int NextPosIdx(int pos)
{
	if (pos == QUE_LEN - 1)//원형큐에서 꽉찬 상태임
		return 0;//처음으로 다시 돌아옴(꽉찬 마지막 상태에서 -> 처음으로돌아온다)
	else
		return pos + 1;
}
void Enqueue(Queue* pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front)//꽉찬상태임
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	pq->rear = NextPosIdx(pq->rear);//뒤로 한칸 미룸
	pq->queue[pq->rear] = data;//새로 들어온 것
}

Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))//더이상 뺄게 없음
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	pq->front = NextPosIdx(pq->front);//앞에꺼 한칸 뒤로 미룸.
	return pq->queue[pq->front];//한칸 미뤄진 상태의 queue
}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	return pq->queue[NextPosIdx(pq->front)];//맨앞에꺼 찾는 함수
}
