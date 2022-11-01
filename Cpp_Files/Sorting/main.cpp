#include <iostream>
using namespace std;

int main()
{	
	int num[10];
	int x,y;
	cout<<"Enter 10 numbers:"<<endl;
	for(x = 0;x<10;x++)
	{
		cin>>num[x];
	}
	for(x = 0;x<10;x++)
	{
		for(y = x+1;y<10;y++)
		{
			int storage;
			if(num[x]>num[y])
			{
				storage = num[x];
				num[x] = num[y];
				num[y] = storage;
			}
		}
	}
	cout<<"After sorting:"<<endl;
	for(x = 0;x<10;x++)
	{
		cout<<num[x]<<endl;
	}
	return 0;
}