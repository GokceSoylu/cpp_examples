#include <iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"\nbase run";
        }
        void forBase()
        {
            cout<<"\nbase class'a ulastınız";
        }
        void where()
        {
            cout<<"\nbase";
        }
};
class Derivade:virtual public Base
{
    public:
        Derivade()
        {
            cout<<"\nderiavade run";
        }
        void where()
        {
            cout<<endl<<"derivade";
        }
};
class Derivade2:virtual public Base
{
    public:
        Derivade2()
        {
            cout<<endl<<"derivade2 run";
        }   
        void where()
        {
            cout<<endl<<"derade2";
        }
};
class Super_derivade: public Derivade, public Derivade2
{
    public:
        Super_derivade()
        {
            cout<<endl<<"super_derivade run";
        }
    void where()
    {
        cout<<"\nsuper_derivade";
    }
};
int main()
{
    Base b;
    Derivade d;
    Derivade2 d2;
    Super_derivade sd;
    sd.Base::where();
    sd.forBase();
}