#include <iostream>
//template class oreneği
using namespace std;
template <class A>
class Base
{
    A x;
    public:
        Base(A x):x(x){}
        virtual void a()=0;
};
template <class A>//bunun her seferde tekrar tanımlanmasına dikkat edelim
class Derivade: public Base<A>
{
    A y;
    public:
        Derivade(A x):Base<A>(x),y(x+1){}
        void a()
        {
            cout<<endl<<y;
        }
};
int main()
{
    int a=10;
    float b=2.3;
    double c=4.567;
    char d='C';
    Derivade <int>a_(a) ;
    Derivade <float>b_(b);
    Derivade <double>c_(c); 
    Derivade <char>d_(d);
    a_.a();
    b_.a();
    c_.a();
    d_.a();
}//nasıl afilli dimi :))