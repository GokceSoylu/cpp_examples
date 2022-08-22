#include <iostream>
using namespace std;
class O
{
    protected:
        int o;
    public:
        O(int o=5):o(o)
        {
            cout<<endl<<"O sinifi";
        }
};
class A: public O
{
    protected:
        int a;
    public:
        A(int a=10):a(a)
        {
            cout<<endl<<"a sinifi";
        }
};
class B: public O
{
    protected:
        int b;
    public:
        B(int b=20):b(b) 
        {
            cout<<endl<<"b sinifi ";
        }
};
class AB: public A, public B //, public O
{
    protected:
        int ab;
    public:
        AB(int ab=30):ab(ab)
        {
            cout<<endl<<"AB sinifi";
        }
        void try_()
        {
            A::o=40;
        }
};
int main()
{
    AB blood;
}

// todo Neler öğrendik?
//?     ->multiple inheritance mümkün. hem busınıftan hem şu sınıftan türedim diyebilir. 
//?     ->ancak multiple inheritance'da bir türemiş sınıfınfın hem kendisini hem base sınıfını yazamazsın. mesala bu örnek için AB sınıfı
//? hem A 'dan hem O sınıfından türedi yazamayız. Çünkü A sınıfı zaten O dan türedi ve Biz AB A dan türedi dediğmizde zaten O daki özelliklere sahip oluyoruz.:))
//?     ->bunların yanı sıra AB sınıfı hem A hem B sayesinde O sınıfının özelliklerine sahip ancak dediğimiz gibi hem A hem B den geldiği için 
//? O daki bir özelliğe erişeceğimiz zaman karışılık oluyor. 44. satırda hangi o diye sorrar A'daki mi Bdekimi bunu belirtmemiz lazım :)) 
//todo yok mu bunun ☝🏻 bir çözümü? olmaz mı tabi var vitual.cpp dosyasına göz atalım:)) 