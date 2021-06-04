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
	if (pq->front == pq->rear)//���� ť������ front �� rear����·� start
		return TRUE;
	else
		return FALSE;
}

int NextPosIdx(int pos)
{
	if (pos == QUE_LEN - 1)//����ť���� ���� ������
		return 0;//ó������ �ٽ� ���ƿ�(���� ������ ���¿��� -> ó�����ε��ƿ´�)
	else
		return pos + 1;
}
void Enqueue(Queue* pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front)//����������
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	pq->rear = NextPosIdx(pq->rear);//�ڷ� ��ĭ �̷�
	pq->queue[pq->rear] = data;//���� ���� ��
}

Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))//���̻� ���� ����
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	pq->front = NextPosIdx(pq->front);//�տ��� ��ĭ �ڷ� �̷�.
	return pq->queue[pq->front];//��ĭ �̷��� ������ queue
}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	return pq->queue[NextPosIdx(pq->front)];//�Ǿտ��� ã�� �Լ�
}
