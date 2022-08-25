#include <iostream>
#include <standards.h>
#include <time.h>
using namespace std;
class A
{
    int num, *p;
    public:
        A(int num=3):num(num)
        {
            p=new int[num];
        }
        void print()
        {
            cout<<endl;
            for(int i=0;i<num;i++)
                cout<<p[i]<<" "; 
        }
        void set(int array[])
        {
            for(int i=0;i<num;i++)
                p[i]=array[i];
        }
        void set()
        {
            for(int i=0;i<num;i++)
                p[i]=rand()%9;
        }
        void print(int i)
        {
            cout<<endl<<p[i];
        }
        void operator()()
        {
            this->print();// :))
        }
        void operator()(int i)
        {
            this->print(i);
        }
};
int main()
{
    srand(time(NULL));
    A a1(2), a2;
    int a[]={10,20,30};
    a2.set(a);
    a1.set();
    a1();
    a1(1);
    a1(0);
    a2();
    a2(1);
}