#include "ArrayBaseStack.h"
#include "iostream"


void StackInit(Stack* pstack)
{
	pstack->topIndex = -1;
}

int SIsEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void SPush(Stack* pstack, Data data)
{
	pstack->topIndex += 1;//top�� ��ġ index+1
	pstack->stackArr[pstack->topIndex] = data;//�迭�� ���� �����Ѵ�.
}

Data SPop(Stack* pstack)
{
	int rIdx;

	if (SIsEmpty(pstack))
	{
		std::cout << "Stack Memory Error";
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;//������ �������Ƿ� �ε��� �����Ѵ�.

	return pstack->stackArr[rIdx];//���� ���� ��ġ�� �� return�ϰԵ�.
}


Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		std::cout << "Stack Memory Error";
		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];//Pop�� �ٸ��� �׳� �������ִ°� return / return + topIndex-=1���ֳ� �����Դϴ�. 
}
