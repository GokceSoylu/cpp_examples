#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void func()//! DİKKAT VİRTUAL
        {
            cout<<endl<<"base class";
        }
};
class Derivade: public Base
{
    public:
        void func()
        {
            cout<<endl<<"derivade class";
        }
};
int main()
{
    Base b;
    Derivade d;
    Base *p=&d;
    p->func();

}