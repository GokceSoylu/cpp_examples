#include <iostream>
using namespace std;
class Base
{

    public://eveet neden kurucu fonksiyonu public olarak tanımlıyoruz? main'de sadece public metodlara direkt erişim sağlanabilir. -> bizde değişken
        int n, *p;   //tanımladığımızda kurucu fonsiyonu cağiriyoruz çağırabilmek için public olmalı :))
        Base(int n=10):n(n)
        {
            //p=new int(n);
            p=&this->n;
        }
        void print_p()
        {
            cout<<endl<<"base *p = "<<*p;
        }
        void print_n()
        {
            cout<<endl<<"base n = "<<n;
        }
        ~Base()
        {
            delete p;
        }
        
};
class Derived: public Base
{
    
    public:
       int n, *p;
        Derived(int n=25, int m=10): Base(m), n(n) 
        {
            //p=new int (n);
            p=&this->n;
        }
        void print_p()
        {
            cout<<endl<<"derived *p = "<<*p;
        }
        void print_n()
        {
            cout<<endl<<"derived n = "<<n;
        } 
        ~Derived()
        {
            delete p;
        }
        
};
int main()
{
    Derived d;
    d.print_n();
    d.Base::print_n();
    d.Base::n*=2;//20
    d.Base::print_p();
    d.n+=d.Base::n;//45
    d.print_p();
}