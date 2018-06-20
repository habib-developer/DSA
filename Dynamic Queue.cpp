#include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node *Next,*Prev;
};
class DQueue
{
	Node *Rear;
	Node *Front;
	public:
	DQueue()
	{
		Rear=Front=NULL;
	}
	void EnQueue(int value)
	{
		Node *Temp=new Node;
		Temp->Data=value;
		Temp->Prev=NULL;
		if(Rear!=NULL)
			Rear->Prev=Temp;
		else
			Front=Temp;
		Temp->Next=Rear;
		Rear=Temp;
	}
	int DeQueue()
	{
		int Temp=Front->Data;
		Node *address=Front;
		Front=Front->Prev;
		if(Front!=NULL)
			Front->Next=NULL;
		delete(address);
		return Temp;
	}
	bool IsEmpty()
	{
		if(Front==NULL)
			return true;
		else
			return false;
	}
};
