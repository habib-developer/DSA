// Quick Sort program
#include <iostream>
#include <string>
using namespace std;
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SortBubble(int a[],int low,int high)
{
    int count=0;
    
    for(int i=0;i<high;i++)
    {
        for(int j=0;j<high-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                Swap(&a[j],&a[j+1]);
                }
                
            count++;
        }
    }
}
int main()
{
  cout<<"Hello world"<<endl;
  int a[10]={2,4,6,8,1,3,5,7,9,11};
  for(int i=0;i<10;i++)
        cout<<a[i]<<",";
    cout<<endl;
    SortBubble(a,0,9);
    for(int i=0;i<10;i++)
        cout<<a[i]<<",";
}
