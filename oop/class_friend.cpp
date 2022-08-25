#include <iostream>
using namespace std;
class Y;
class X
{
    int x;
    public:
        int get();
        void initialize(int);
        friend void change(X &);
        void change(Y&);
};
class Y
{
    int y;
    public:
        int get();
        void initialize(int);
        friend class X;
};
int main()
{
    int x,y;
    X first;
    Y second;
    cout<<"\nx degeri? ";
    cin>>x;
    first.initialize(x);
    cout<<"\ny degeri? ";
    cin>>y;
    second.initialize(y);
    cout<<"\nx = "<<first.get()<<"\ny = "<<second.get();
    cout<<"\nx in degerini arkadaş fonksiyonla y nin degerini arkadaş sınıf yardımıyla değiiştiriyoruz\n";
    change(first);
    first.change(second);
    cout<<"x = "<<first.get()<<"\ny = "<<second.get();
}
int X::get(void)
{
    return x;
}
int Y::get(void)
{
    return y;
}
void X::initialize(int x_)
{
    x=x_;
}
void Y::initialize(int y_)
{
    y=y_;
}
void X::change(Y & y)
{
    y.y+=100;
}
void change(X &x)
{
    x.x+=100;
}
/*& tanımlamada kullanırsan birinin ikinci ismi olur
Eger fonksiyon paremetresinde & yaparsan değişkeni normal adıyla gönderirsin ama fonksiyon adresini alır :)
Arkadaş fonksiyon başka fonksiyona gerek kalmaksızın private degere ulaşabilir. Yani kendi fonksiyonu gibi oluyor.
Sınıfların arkadaşlığında ise bir nesne üzerinden başka nesneye ulaşabiliyoruz. 
Bu nesnenin içinde, şu fonksiyon ile diğer sınıftaki private değişkeni değiştir*/