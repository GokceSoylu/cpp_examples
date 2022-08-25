#include <iostream>
using namespace std;
class Base
{
    protected: 
        int k;
    public:
        int n, b;
        Base(int n=10, int b=1, int k=30):n(n),b(b),k(k){}
        void base()
        {
            cout<<endl<<b*b;//! function and varaible cannot have same name
        }
        void where()
        {
            cout<<endl<<"base class";
        }

};
class Derivade:  public Base
{
    public:
        int n, d;
        Derivade(int n=10, int d=2):Base(n),d(d),n(n){}
        void derivade()
        {
            cout<<endl<<d*d;
        }
        void where()
        {
            cout<<endl<<"derivade class k = "<<k<<endl;
        }
};
int main()
{
    Base b;
    Derivade d;
    Base *dizi[2]={&b,&d};
    cout<<b.n;
    b.where();
    cout<<endl<<d.n;
    d.where();
    cout<<d.Base::n;
    d.Base::where();
    cout<<endl<<d.b;
    cout<<"\n--- after downcasting ---\n";
    dizi[1]->where();
    cout<<endl<<"\n--- after upcasting ---\n";
    Derivade *dp=(Derivade*)dizi[1];
    dp->where();
}