#pragma once
#include<iostream>
namespace Algorithm
{
	template<typename T>
	class Node
	{
	public:
		Node* prev;
		Node* next;
		T data;
		Node(T value)
		{
			data = value;
			prev = nullptr;
			next = nullptr;
		}
		Node() {}
	};
}




