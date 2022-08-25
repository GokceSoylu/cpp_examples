#include <iostream>
using namespace std;
class A
{
    int n;
    public:
        int *ptr;
        A(int i=10)
        {
            ptr=new int(i);
            n=i;
        }
        A(const A & a)
        {
            ptr=new int(*a.ptr);
        }
        void print()
        {
            cout<<endl<<&n<<"   "<<ptr<<"   "<<&ptr;

        }
};
class B: public A
{
    int *ptr;
    public:
        B(int i=20)
        {
            ptr=new int(i);
        }
        B(const B &b)
        {
            ptr=new int(*b.ptr);
        }
        void print()
        {
            cout<<endl<<ptr<<"\t"<<*ptr;
            A::print();
        }
};
int main()
{
    A aa;
    aa.print();
    A a1=aa;
    a1.print();
    cout<<endl<<endl;
    A a2;
    a2.print();
    A a3=a2;
    a3.print();
}