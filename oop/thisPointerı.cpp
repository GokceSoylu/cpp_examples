//this içinde bulununan nesnenin adresini gösteren bir pointerdır
#include <iostream>
class A
{
    int number;
    public:
        A(int number=10):number(number){};
        A operator+(int n)
        {
            number+=n;
            return *this;//bu nesnenşn adresini dödürüyor
        }
        void print()
        {
            std::cout<<"\n"<<number;
        }
};
int main()
{
    A a1, a2;
    a1.print();
    a2.print();
    a2=(a1+5);
    a2.print();
    (a2+1).print();
}