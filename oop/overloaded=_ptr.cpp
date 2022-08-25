#include <iostream>
using namespace std;
class Base 
{
    int n, *ptr;
    public:
        Base(int n=5):n(n)
        {
            ptr=new int(n);
            cout<<"\nBase run\n";
        }       
        void print() const
        {
            cout<<endl<<ptr<<"\t"<<*ptr;
        }
};
class Derived :public Base
{
    int n, *ptr;
    public:
        Derived(int n=10, int m=5):n(n), Base(m)
        {
            ptr=new int (n);
            cout<<"\nDerived run\n";
        }
        void operator=(const Derived d) 
        {
            //delete ptr;
            n=d.n;
            ptr=new int(d.n);
        }
        void print()
        {
            cout<<endl<<ptr<<"\t"<<*ptr<<endl;
        }
};
int main()
{//bu kısım tamamen deneme amaçlı. Main karışık gelebilir direkt özete geçebilirsin :))
    Base b;
    Derived d; 
    d.print();
    b.print();
    Base bb=b, bbb;//yeni tanımlama sırasında direkt copy fonksiyonunu çalıştırırsa constructer fonksiyonu hiç çalışmaz bb=b böyle. Ancak bbb kısmında consructer fonk çallışır
    Derived dd=d;
    dd.print();
    bb.print();
    cout<<endl<<"---"<<endl;
    bbb.print();
    bbb=b;//burada ise opereator= fonksiyonu çalışır
    bbb.print();
    Derived x, y;
    x.print();
    y.print();
    y=x;
    x.print();
    y.print();
} // ÖZET
//ilk tamımlamada kurucu fonsiyon çallışır. ancak ilk tanımlamada direkt başka bir nesneden kopyalıyorsa, kurucu fonksiyon değil copy fonk ççalışır.
//eğer copy fonsiyonu kendimiz yazıpta pontera yeni adres alıp oyle atıyorsak kopya değeri. pointer farklı adresi tutar ancak kopyaladığımız
//nesne ile aynı değeri alır. kendimiz copy function yazmadığımızda ise pointer ın adresini değişkenin değerini atar gibi direkt yeni pointer'a atar
//iki farklı nesnenin pointerı aynı adresi tutar. ayıkla pirincin taşını :))
//bir de bu yazdığımız copy constructerda once pointerı deletleyip sonra yeni adres alabilirsin ama gerek yok zaren new kullandığında farklı bir adres atamış olacaksın