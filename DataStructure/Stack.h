#pragma once
#include"LinkedList.h"
using namespace Algorithm;

template<typename T>
class Stack
{
private:
	LinkedList<T>* listStack;
public:
	Stack() {
		listStack = new LinkedList<T>();
	}

	void Push(T data) {
		listStack->AddFirst(data);
	}

	T Pop() {
		T tempData = listStack->First()->data;
		listStack->RemoveFirst();
		return tempData;
	}

	bool IsEmpty() {
		return listStack->Length() == 0;
	}

};

