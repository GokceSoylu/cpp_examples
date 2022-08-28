#include <iostream>
using namespace std;
class Base
{
    int n;
    public:
        Base(int n=10):n(n){}
        virtual void where()=0; //! Pure fonksiyonun virtual olması gerektiğini unutmayalım 
};
class Derivade: public Base
{
    int m;
    public:
        Derivade(int n=10):Base(n), m(n*2){}
        void where()
        {
            cout<<endl<<m;
        }
};
int main()
{
    Derivade x(5), y(3), z(7); 
    Base *array;
    array=&x;
    
}
