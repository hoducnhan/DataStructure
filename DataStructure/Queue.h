#pragma once
#include"LinkedList.h"
using namespace Algorithm;

template<typename T>
class Queue
{
private:
	LinkedList<T>* listQueue;
public:
	Queue()
	{
		listQueue = new LinkedList<T>();
	}

	void Enqueue(T data)
	{

		listQueue->AddLast(data);
	}
	
	T Dequeue()
	{
		T tempData = listQueue->First()->data;
		listQueue->RemoveFirst();
		return tempData;
	}
	
	bool IsEmpty()
	{
		return listQueue->Length() == 0;
	}

};


