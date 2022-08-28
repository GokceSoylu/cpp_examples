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
    Base *a,*array[2]={&y,&z};
    a=&x;//* Hey doatum neden tip dönüşümü yapmıyorsun? Çünkü deowncastigde tip dönüşümüne ihtiyaç duymayız. Base'e türemişi atraken
    //* sorun  yaşamayız ancak türemiş = base derken tipm dönüşümü gerekir. Şöyle düşünelim türemişin içinde zaten Base'in özellikleri bukunduğu için
    //* Base=türemiş dediğimizde adam kabul ediyor zaten bu durumda bir nevi türemiş bae 'ten ayrı kendine has özellikleride kaybediyor.
    //* türemiş=base dediğiimizde ise base'te türemiş'in özellikleri yok ki! 
    a->where();
    array[0]->where();
    array[1]->where();
}
