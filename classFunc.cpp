#include <iostream>
using namespace std;
class Try
{
    public:
        int x ,y;
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
            return x%2==0 && y%2==0;
        }
};
int main()
{
    Try T1, T2;//bunlar nesne
    T1.atama(2,4);
    T2.atama(6,46);
    if(T1.control() && T2.control())
    {
        T1.print();
        T2.print();
    }
}