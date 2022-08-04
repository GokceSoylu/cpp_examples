#include <iostream>
#include <standards.h>
#include <time.h>
using  namespace std;
class A
{
    int num, *p, plus;
    public:
        A(int num=3):num(num)
        {
            p=new int [num];
            for(int i=0;i<num;i++)
            {
                p[i]=rand()%25;
            }
        }
        void operator++(int)
        {
            for(int i=0;i<num;i++)
                p[i]+=plus;
        }
        void plusValue(int plus)
        {
            this->plus=plus;
        }
        void print()
        {
            cout<<endl;
            for(int i=0;i<num;i++)
                cout<<p[i]<<" ";
        }
};
int main()
{
    srand(time(NULL));
    A a1;
    a1.plusValue(5);
    a1.print();
    a1++;
    a1.print();
}