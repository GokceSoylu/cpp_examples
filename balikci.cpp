#include <iostream>
#include <fstream>
using namespace std;
class balik
{
    public:
        float l=0.45*40, p=0.6*25, c=0.5*30;
};
class levrek:public balik
{
    public:
        float hesapla(int adet)
        {
            return adet*l;
        }
};
class palamut:public balik
{
    public:
        float hesapla(int adet)
        {
            return p*adet;
        }
};
class cupra:public balik
{
    public:
        float hesapla(int adet)
        {
            return adet*c;
        }
};
int main()
{
    fstream file;
    levrek levrek;
    palamut palamut;
    cupra cupra;
    int l, p, c, sum=0;
    cout<<"\nbaliklerin adedini giriniz\nlevrek ";
    cin>>l;
    cout<<"\npalamut ";
    cin>>p;
    cout<<"\ncupra ";
    cin>>c;
    sum=levrek.hesapla(l)+palamut.hesapla(p)+cupra.hesapla(c);
    file.open("hesap.txt",ios::app);
    file<<"hesap : "<<sum<<endl;
    cout<<"\n "<<sum;
    file.close();
}