#include <iostream>
//#include <conio.h>
#include <iomanip>
using namespace std;
void display(int a[8][8],char *[8]);
void warshalalgo(int a[8][8]);
void header(char *[8]);
int main()
{
	char *name[8]={"fsd","isd","khi","lhr","mtn","pwr","rwp","swl"};

	int city[8][8]={	{1,0,1,0,0,0,0,0},
							{0,1,0,0,0,0,0,0},
                  	{0,0,1,0,1,0,0,0},
                  	{1,1,0,1,0,0,0,0},
                  	{1,0,0,1,1,0,0,0},
                  	{0,1,0,0,1,1,0,0},
                  	{0,0,0,0,0,1,1,0},
                  	{1,0,0,0,0,0,0,1}};
  header(name);
  display(city,name);
  warshalalgo(city);
  display(city,name);
//  getch();
  }
  void header(char *ch[8])
  {
    	cout<<"    ";
   	for(int i=0;i<8;i++)
		{
      	cout<<setw(4)<<ch[i];
   	}
  }
  void warshalalgo(int arr[8][8])
  {
    	for(int k=0;k<8;k++)
 			for(int i=0;i<8;i++)
 				for(int j=0;j<8;j++)
 	     			arr[i][j]|=arr[i][k]& arr[k][j];
  }
  void display(int arr[8][8],char * ch[8])
  {
    	for(int a=0;a<8;a++)
		{
   		cout<<endl;
   		cout<<setw(4)<<ch[a];
   		for(int b=0;b<8;b++)
			{
         	cout<<setw(4)<<arr[a][b];
      	}
   	}
      cout<<endl;
  }

