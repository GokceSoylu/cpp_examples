#include <iostream>
class A 
{
    public:
        class B 
        {
            public:
                int n=20;
        };
        A::B z;
    public:
        int m=10;
public:
class C : public B 
{
    public:
        B y;
        A::B y2;
        C *x;
        C *x2;
        int k=10;
    };
};
int main()
{
    A sinif1;
    A::B sinif2;
    A::C sinif3;
    A::C sinif4;
    sinif4.x2=&sinif3;
    std::cout<<std::endl<<sinif1.m;
    std::cout<<std::endl<<sinif1.z.n;
    std::cout<<std::endl<<sinif2.n;
    std::cout<<std::endl<<sinif3.y.n;
    std::cout<<std::endl<<sinif3.y2.n;
    std::cout<<std::endl<<sinif4.x2->k;
}