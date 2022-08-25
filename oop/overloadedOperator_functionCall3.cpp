#include <iostream>
using namespace std;
class A
{
    int num, *p;
    public:
        A(int num=5):num(num)
        {
            p=new int[num];
            for(int i=0;i<num;i++)
                p[i]=i+1;
        }
        void print()
        {
            cout<<endl;
            for(int i=0;i<num;i++)
                cout<<p[i]<<" ";
        }
        int* operator()(int i)
        {
            return (p+i);
        }
        void operator=(int n)
        {
            p[n]=n;
        }
        int operator[](int i)
        {
            return p[i];
        }
};
int main()
{
    A a1, a2;
    a1.print();
    a2.print();
    *a1(3)=a2[2];// 😊
    a1.print();
}