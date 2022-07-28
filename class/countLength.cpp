#include <iostream>
#include <math.h>
using namespace std;
class Koordinat
{
    int x, y;
    public:
        int static counter;
        Koordinat(int x, int y)
        {
            this->x=x;
            this->y=y;
            counter++;//kaç kez nesne oluşturulduğunu sayıyoruz. Peki bunu neden yapıoruz? static'i öğrenmek için :))
        }
        int length(Koordinat n)
        {
            return sqrt(pow(x-n.x,2)+pow(y-n.y,2));
        }
};
int Koordinat::counter=0;
int main()
{
    int x, y;
    cout<<"\nnoktaların koordinat degerlerini giriniz ";
    cin>>x>>y;
    Koordinat k(x,y);
    cout<<"\nikincimnoktayı giriniz  ";
    cin>>x>>y;
    Koordinat k2(x,y);
    cout<<"\nuzaklık "<<k.length(k2);
}