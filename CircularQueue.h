#pragma once

#define TRUE 1
#define FALSE 0
#define QUE_LEN 500


typedef int Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queue[QUE_LEN];
}CQueue;

typedef CQueue Queue;


void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
int NextPosIdx(int pos);
void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);
