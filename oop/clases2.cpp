#include <iostream>
class Havuz
{
    public:
        int r;
        int alan();
};
using namespace std;
int main()
{
    Havuz h1, h2;
    cout<<"havuzların yarıcaplarını giriniz ";
    cin>>h1.r>>h2.r;
    cout<<"ilk havuzun alanı = "<<h1.alan()<<endl<<"ikinci havuzun alanı = "<<h2.alan();
}
int Havuz::alan()
{
    return 3*r*r;
}