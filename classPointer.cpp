#include <iostream>
using namespace std;
class Try
{
    public:
        int x, y;   
        void atama(int x_, int y_)
        {
            x=x_;
            y=y_;
        }
        void print()
        {
            cout<<endl<<x<<" "<<y;
        }
        bool control()
        {
            return x!=0 && y!=0;
        }
};
int main()
{
    Try T1, *T, *T2=new Try(); 
    T=&T1;
    T1.atama(8,9);
    if(T->control())
        T->print();
    T2->atama(4,8);
    if(T2->control())
        T2->print();
}

