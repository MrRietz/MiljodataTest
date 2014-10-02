#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

#include <iostream>

using namespace std;


enum direction { NEXT, PREV };

template <class T>

class LinkedList
{
private:
	class Node
	{
	public:
		T value;
		Node * next;
		Node * previous;
		Node(T value)
		{
			this->value = value;
			this->next = NULL; 
			this->previous = NULL;
		}
		~Node(); 
	};
	Node * current;
	int nrOfNodes;
	direction currDir;

public:
	LinkedList();
	virtual ~LinkedList();
	void add(const T &item);
	bool remove(const T &item); 
	int size() const;
	T &currentItem() const;
	void changeDirection(const T &item);
	void move();
};


template <class T>
LinkedList<T>::LinkedList()
{
	this->current = NULL;
	this->nrOfNodes = 0;
	this->currDir = NEXT;
}
template <class T>
LinkedList<T>::~LinkedList()
{
	Node *walker = this->current;
	Node *remover = NULL;
	while (walker != NULL)
	{
		remover = walker;
		walker = walker->next;
		delete remover;
	}
}
template <class T>
void LinkedList<T>::changeDirection(const T &item)
{
	//If the items currentDir is equal to NEXT we switch the currentDir to Previous and set the items Current pointer to the previous one. 
	//Vice versa with the prev it is set to next. 
	if (item->currDir == NEXT)
	{
		item->currDir = PREV;
		item->current = item->current->previous;
	}
	else
	{
		item->currDir = NEXT;
		item->current = item->current->next;
	}
}





#endif