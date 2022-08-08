#include <iostream>
using namespace std;
class Numbers
{
    int x, y, *p;
    int const z;
    public:
        Numbers() : z(3)
        {
            x=y=3;
            p = new int;
            *p=3;
        }
        Numbers(int x, int y, int z) : z(z)
        {
            this->x=x;
            this->y=y;
            p=new int;
            *p=z;
        }
        Numbers(Numbers &n) : z(n.z)//this is  a constructer function. yeni nesne oluşturacak ama kendisini çalıştıran nesneye paremetre olarak aldığı nesnenin değerlerini atyarak
        {
            x=n.x;
            y=n.y;
            p=new int;
            p=n.p;
        }
        void get()
        {
            cout<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z<<"\n*p = "<<*p;
        }
};
int main()
{
    Numbers n(1,2,3), n2(n);
    n.get();
    n2.get();
}
//copy constructer adı üstünde kopyalayan kurucu fonksiyon. Sınıfımızın kendi türünden bir değişken veririz aynı içerikte
//yeni değişken oluşturur:)