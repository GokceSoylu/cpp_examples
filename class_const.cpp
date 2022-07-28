#include <iostream>
//const özellik degistirilemez bu yüzzden const olan bir değişken sınıfın metoslarının hiç birini kullanamaz. const olan metod is sınıfın 
//hiç bir değişkenini degiştiremez
using namespace std;
class Number
{
    int x, y;
    int const z;
    public:
        void get()
        {
            cout<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
        }
        int const m_double()
        {
            return 2*x;
        }
        Number() : z(15)//const değikenin atamasına dikkat edelim.
        {
            x=5, y=10;
        }
        Number(int x, int y, int z) : z(z)
        {
            this->x=x;
            this->y=y;
        }
};
int main()
{
    int a,b;
    Number n, n2(1,2,3);
    n.get();
    cout<<"\n2*x = "<<n.m_double();
    n2.get();
    cout<<"\n2*x = "<<n2.m_double();
}
