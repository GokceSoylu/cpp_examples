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
        void print(int k)
        {
            cout<<endl<<p[k];
        }
        int operator()(int i, int j)
        {
            int tmp;
            tmp=p[i];
            p[i]=p[j];
            p[j]=tmp;
        }
};
int main()
{
    A a1(5), a2(3);
    a1.print();
    a1(0,4);
    a1.print();
}