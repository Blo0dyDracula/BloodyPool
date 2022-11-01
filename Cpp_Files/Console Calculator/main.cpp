#include<iostream>
#include<windows.h>
using namespace std;
void title()
{
	cout<<"(----------------------)"<<endl;
	cout<<"---Console Calculator---"<<endl;
	cout<<"(----------------------)"<<endl;
}
int main()
{
	system("cls");
	double a,b;
	char oper;
	while(true)
	{
		title();
		cin>>a;
		cin>>oper;
		cin>>b;
		if(oper == '+')
		{
			cout<<a<<oper<<b<<"="<<a+b<<endl;
		}
		else if(oper == '-')
		{
			cout<<a<<oper<<b<<"="<<a-b<<endl;
		}
		else if(oper == 'x')
		{
			cout<<a<<oper<<b<<"="<<a*b<<endl;
		}
		else if(oper == ':')
		{
			cout<<a<<oper<<b<<"="<<a/b<<endl;
		}
		Sleep(1000);
		system("PAUSE");
		system("cls");
	}
	return 0;
}