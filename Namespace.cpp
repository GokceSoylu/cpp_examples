/* tüm mesele :: operatörü ile alakalı. Bu operatör scope demek yani buraki degiskene degilde bu operatorden once yazan alana bak demek istiyor
    en alttta class ın fonksiyonu yazdığımız kısma bakalım Try::atma dedik yani buralada yok Trry'ın içerisindeki fonsiyondaan bahsediyorum git 
    onun scob'una bak diyoruz. Tanımlanan isim alanlarında da aynı şey var. globala ulasmak içinse ::'dan once hiç bir sey yazmayız global itse scobsuz:)*/ 
#include <iostream>
using namespace std;//std de bir isim uzayı bunda da :: kullanılır
int a=20;
namespace dev1
{
    int money=10, debt=80;
    int m()
    {
        return money*2-debt;
    }
};
namespace dev2
{
    int money=100, debt=60;
    int m()
    {
        return money-debt;
    }
};
class Try
{
    public:
        int x, y;
        void atama(int x_, int y_);
};
int main()
{
    int a=10;
    cout<<endl<<"dev2\n";
    {
        using namespace dev2;
        cout<<"money "<<money<<" debt "<<debt<<" result "<<m();

    }
    cout<<endl<<"dev1\n";
        cout<<"money "<<dev1::money<<" debt "<<dev1::debt<<" result "<<dev1::m();
    Try T;
    T.atama(8,9);
    cout<<endl<<T.x<<" "<<T.y;
    cout<<"\nlocal a = "<<a<<"\nglobal a = "<<::a;
}
void Try::atama(int x_, int y_)
{
    x=x_;
    y=y_;
}