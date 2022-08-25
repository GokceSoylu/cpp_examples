/* tring for protected type*/
#include <iostream>
using namespace std;
class Shell
{
    int x;
    protected:
        int y;
    public:
        int z;
};
class Layer1 : public Shell
{
    public:
    void print()
    {
        cout<<endl<<Shell::y;
    }
};
int main()
{
    Layer1 l;
    //l.Shell::y=10;
}
// ! burası önemli dikkat edelim!  
//  *public sınıfa heryerden erişilebilir (basse class, türemiş sınıflar, fonksiyonlar, main)
//  *protected sınıfa base sınıftan ve türemiş sınıftan erişilebilir. Ancak dikkat! türemiş sınıfın içerisindeyken erişebilirsin türemiş sınıfın nesnesiyle mainden erişemezsin
//  *private gelince. bu kadar nazlısına rastlayamazsın sadece base class dan erişilebilir.
// ? gelelim son nota. Sınıftan erişilebilir demek o sınıfın içerisindeyken erişebilirsin ve o sınıfın fonksiyonu erişeblir demek. çünkü o sınıfın fonksiyonu sınıfın içerisinde tanımlı. fonksiyon çalıştırıldığınıda sınıfın içerisine giriliyor, işlemi o sınıfın içerisinde yapıyor gibi  