#include <iostream>
using namespace std;
class A
{
    int a, b;
    int *p;
    public:
        A(int a, int b)
        {
            this->a=a;
            this->b=b;
            p=new int[2];
            p[0]=a;
            p[1]=b;
        }
        A()
        {
            a=10;
            b=20;
            p=new int[2];
            p[0]=a;
            p[1]=b;
        }
        ~A()//parametre alamaz
        {
            cout<<"\ndestructer function run ";
            delete p;
        }
        void get()
        {
            cout<<"\na = "<<a<<"\nb = "<<b<<"\np[0] = "<<p[0]<<"\np[1] = "<<p[1];
        }
};
int main()
{
    A x, y(25,15);
    x.get();
    y.get();
    //x.~A();  
    //y.~A();
}// main de destructer function'ı çaliştirmana gerek yok class'ın içine yazdığında zaten kendi çalıştırıyor :))