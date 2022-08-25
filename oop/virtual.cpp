#include <iostream>
using namespace std;
class O
{
    protected:
        int o;
    public:
        O(int o=10):o(o)
        {
            cout<<endl<<"O sinifi";
        }
};
class A: virtual public O
{
    protected:
        int a;
    public:
        A(int a=20):a(a)
        {
            cout<<endl<<"A sinifi";
        }
};
class B:virtual public O
{
    protected:
        int b;
    public:
        B(int b=30):b(b)
        {
            cout<<endl<<"B sinifi";
        } 
};
class AB: public A, public B
{
    protected:
        int ab;
    public:
        AB(int ab=40): ab(ab)
        {
            cout<<endl<<"AB sinifi";
        }
        void try_()
        {
            o=50;//* wuhuu 🎉 
        }
};
int main()
{
    AB blood;
}
//?  O sınıfını iki kez oluşturulmasını engelleyen ve yine AB üzerinden direkt O ya erişimi sağlayan keyword "virtual" .