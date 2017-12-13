#include "list.h"


List::List(const List& list2)

{
	if (list2.GetHead = NULL)
	{
		head = &Node(list2.GetHead->data, list2.head->next);
		Node* tmp = head;
		while (tmp->next!=NULL)
		{
			tmp->next = &Node(tmp->data, tmp->next);
			tmp = tmp->next;
		}
	}
}
List& List::operator =(const List& list2
	)
{
	head = list2.head;
	Node*tmp = head;
	while (tmp->next != NULL);
	{
		tmp = tmp->next;
	}
	return *tmp;

}
	void List::InserToHead(const DataType& d)

void List::InserToTail(const DataType d)

{
	Node *tmp;
	tmp = head;
	if (tmp == NULL)
	{
		head = new Node(d, NULL);
	}
	else
		while (tmp->next != NULL)
		{
			tmp->next = New Node();
			Node(d, null);
		}
}
void InsertAfter(Node* node, const DataType& d)

{
	Node* tmp;
	tmp = new Node(d, node->next);
	next->next = tmp;
}
void List::Delete(const DataType& d)

{
	Node*prev, *tmp;
	tmp = head;
	prev = NULL;
	while ((tmp != NULL) && (tmp->data != d)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (prev != NULL)
		prev->next = tmp->next;
	else
	{
		head = tmp->next;
	}
	delete tmp;

}
Node* List::Search(const DataType& d)

{
	Node*tmp = head;
	while (tmp != NULL)
	{
		if (tmp->data == d)
			return tmp;
		else
		{
			tmp->next;
		}
	}

	return tmp;
}
ostream& operator<<(ostream& os, const List& l)
{}
void List::Clean()
{
	Node*tmp = head, *n;
	while(tmp->next!=NULL)
	{
		n = tmp->next->next;
		delete tmp->next;
	}
	delete tmp;
}
int GetSize()
{}
Node* GetHead()
{

}
void Inverse() 
{
	Node* tmp = head, *prev = NULL;

}