//aslında tam olarak sınıf mantiğini anladiğimiz nokta burası. sınıf sadece bir type ve biz bu tiipte değişkenler oşoiştiriyoruz şeklinde düşünmek
//hatlaı olur. sınıf ve nesne bağlantili kalır. hep derler ya sınıf iskeleet nesne ozelliğidir diye aynen oyle. arada bağlantının kalduğını unutmayalım.
#include <iostream>
using namespace std;
class sinif
{
    int x;
    public:
        int static counter;
        int y;
        sinif()
        {
            counter++;
            x=10;
            y++;
        }  
};
int sinif::counter=0;
int main()
{
    sinif n1;
    cout<<"counter = "<<sinif::counter<<"   y = "<<n1.y;   //bu iafade sadece static için !!!
    sinif n2;
    cout<<"\ncounter = "<<sinif::counter<<"  y = "<<n1.y;
    sinif n3;
    cout<<"\ncounter = "<<sinif::counter<<"   y = "<<n1.y;
}