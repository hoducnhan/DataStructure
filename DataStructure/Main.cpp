#include<iostream>
#include"Queue.h"
#include"Stack.h"
int main()
{


	//LinkedList<int>* list = new LinkedList<int>();
	////list->AddFirst(5);
	//list->Display();
	//return 0;

	Stack<int>* stack = new Stack<int>();
	stack->Push(1);
	stack->Push(2);
	stack->Push(3);
	stack->Push(4);
	stack->Push(5);
	while (!stack->IsEmpty()) {
		std::cout << stack->Pop() << std::endl;

	}
	return 0;

	/*Queue<int>* queue = new Queue<int>();
	queue->Enqueue(1);
	queue->Enqueue(2);
	queue->Enqueue(3);
	queue->Enqueue(4);
	queue->Enqueue(5);
	queue->Enqueue(6);
	while (!queue->IsEmpty())
	{
		std::cout << queue->Dequeue()<<std::endl;
	}
	return 0;*/
}