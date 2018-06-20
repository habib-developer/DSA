// Dynamic Stack Or Stack using Linklist program for int
#include <iostream>
#include <string>
using namespace std;
struct Node
{
    int Data;
    Node *Next;
};
class Stack
{
    Node *Top;
    public:
    Stack()
    {
        Top=NULL;
    }
    void Push(int value)
    {
        Node *ptr=new Node;
        ptr->Data=value;
        ptr->Next=Top;
        Top=ptr;
    }
    int Pop()
    {
        int Value=Top->Data;
        delete(Top);
        return Value;
    }
    bool IsEmpty()
    {
        return Top==NULL?true:false;    
    }
};
int main()
{
  cout << "Hello world ";
  return 0;
}
