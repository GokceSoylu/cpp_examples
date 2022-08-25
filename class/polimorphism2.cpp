#include <iostream>
using namespace std;
class Base
{
    public:
        int n, b;
        Base(int n=10, int b=0):b(b), n(n){}
        void where()
        {
            cout<<endl<<"base class"<<endl;
        }
        void base_int()
        {
            cout<<"\nn = "<<n<<"\tb = \n";
        }
};
class Derivade1: public Base
{
    public:
        int n, d1;
        Derivade1(int d1=2): Base(), d1(d1)
        {
            n=20;
        } 
        void where()
        {
            cout<<endl<<"derivade1 class";
        }
        void derivade_int()
        {
            cout<<endl<<"1 = "<<d1<<"\tn = "<<n;
        }        
};
class Derivade2: public Base
{
    public:
        int n, d2;
        Derivade2(int d2=3): Base(), d2(d2)
        {
            n=30;
        }
        void where()
        {
            cout<<"\nderivade2 class";
        }
        void derivade2_int()
        {
            cout<<endl<<"d2 = "<<d2<<"\tn = "<<n;
        }
};
int main()
{
    Base b;
    Derivade1 d1;
    Derivade2 d2;
    Base *dizi[3]={&b, &d1, &d2};//? downcasting
    for(int i=0;i<3;i++)
        cout<<endl<<dizi[i]->n;
    Derivade1 *pd1=(Derivade1*)dizi[1];//? upcasting
    cout<<endl<<pd1->n;
    Derivade2 *pd2=(Derivade2*)dizi[2];//?upcasting
    cout<<endl<<pd2->n;
    
}