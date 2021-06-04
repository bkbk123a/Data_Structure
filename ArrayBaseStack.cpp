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
	pstack->topIndex += 1;//top의 위치 index+1
	pstack->stackArr[pstack->topIndex] = data;//배열에 실제 삽입한다.
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
	pstack->topIndex -= 1;//위에서 빠졌으므로 인덱스 감소한다.

	return pstack->stackArr[rIdx];//제일 위에 위치한 값 return하게됨.
}


Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
	{
		std::cout << "Stack Memory Error";
		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];//Pop과 다른건 그냥 맨위에있는거 return / return + topIndex-=1해주냐 차이입니다. 
}
