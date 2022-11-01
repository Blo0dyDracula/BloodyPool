#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
class Objects
{
    public:
        int ab;
        int l;
        void clength(int rad)

        {
            int PI = 3;
            l = 2*PI*rad;
        }
        int clAnswer()
        {
            return l;
        }
        //Pyphogor teorem
        void pyphogor(double a,double b)
        {
            ab=pow(a,2/1)+pow(b,2/1);
        }
        int pyAnswer()
        {
            return sqrt(ab);
        }
};
int main()
{
    while(true)
    {
        system("clear");
        int choose;
        int lan;
        Objects obj;
        cout<<"Set your language:\n[1]-English\n[2]-Turkish"<<endl;
        cin>>lan;
        system("clear");
        if(lan == 1)
        {
            cout<<"Which one do you need ?"<<endl;
            cout<<"[1]-The length of the circle"<<endl;
            cout<<"[2]-Pythagorean theorem"<<endl;
            cin>>choose;
            if(choose == 1)
            {
                int rad;
                cout<<"Enter a radius of the circle:";
                cin>>rad;
                obj.clength(rad);
                cout<<"The length of the circle = "<<obj.clAnswer();
                Sleep(1000);
            }
            else if(choose == 2)
            {
                double a,b;
                cout<<"Enter a value of a:"<<endl;
                cin>>a;
                cout<<"Enter a value of b:"<<endl;
                cin>>b;
                obj.pyphogor(a,b);
                cout<<"Value of c = "<<obj.pyAnswer();
                Sleep(1000);
            }
        }
        else if(lan == 2)
        {
            cout<<"Hangisine ihtiyacin var ?"<<endl;
            cout<<"[1]-Dairenin uzunlugu"<<endl;
            cout<<"[2]-Pisagor teoremi"<<endl;
            cin>>choose;
            if(choose == 1)
            {
                int rad;
                cout<<"Dairenin rediusun giriniz:";
                cin>>rad;
                obj.clength(rad);
                cout<<"Dairenin uzunlugu = "<<obj.clAnswer();
                Sleep(1000);
            }
            else if(choose == 2)
            {
                double a,b;
                cout<<"a-nin degerin giriniz:"<<endl;
                cin>>a;
                cout<<"b-nin degerin giriniz:"<<endl;
                cin>>b;
                obj.pyphogor(a,b);
                cout<<"c-nin degeri = "<<obj.pyAnswer();
                Sleep(1000);
            }
        }
    }
    return 0;
}
