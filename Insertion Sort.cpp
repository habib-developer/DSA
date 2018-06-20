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
void InsertionSort(int a[],int low,int high)
{
    for(int i=1;i<high;i++)
    {
        int valueToInsert=a[i];
        int whole=i-1;
        while(whole>=0 && a[whole]>valueToInsert)
        {
            a[whole+1]=a[whole];
            whole--;
        }
        a[whole+1]=valueToInsert;
     }
}
int main()
{
  cout<<"Hello world"<<endl;
  int a[10]={2,4,6,8,1,3,5,7,9,11};
  for(int i=0;i<10;i++)
        cout<<a[i]<<",";
    cout<<endl;
    InsertionSort(a,0,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<",";
}
