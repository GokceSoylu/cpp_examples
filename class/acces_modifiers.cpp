#include <iostream>//There is really importent deffances between default and writed by us copy fuctions. If you use default function poiters adress bocame same
using namespace std;
class Base
{
    int prv_a=5;
    protected:
        int prtc_a=10;
    public:
        int pub_a=15;
        void print()
        {
            cout<<endl<<prv_a<<" "<<prtc_a<<" "<<pub_a;
        }
};
class Layer1: public Base//en kısa ifadeyle buradaki belirteç bu sınıfı etkilemez benden sonraki bu sınıfı böyle görsün demektir.
{
    int prv_a=20;
    protected:
        int prtc_a=25;
    public:
        int pub_a=30;
        void print()
        {
            Base::print();
            cout<<endl<<prv_a<<" "<<prtc_a<<" "<<pub_a;
        }
};
class Layer2: protected Layer1
{
    int prv_a=35;
    protected:
        int prtc_a=40;
    public:
        int pub_a=45;
        void print()
        {
            Base::print();
            Layer1::print();
            cout<<endl<<prv_a<<" "<<prtc_a<<" "<<pub_a;
        }
};
class Layer3: private Layer2//please be caerfull It's private
{
    int prv_a=50;
    protected:
        int prtc_a=55;
    public:
        int pub_a=60;
        void print()
        {
            Base::print();
            Layer1::print();
            Layer2::print();
            cout<<endl<<prv_a<<" "<<prtc_a<<" "<<pub_a;
        }
};
class Layer4: public Layer3//BOM! for layer3 whta about others
{
    int prv_a=65;
    protected:
        int prtc_a=70;
    public:
        int pub_a=75;
    void print()
    {
        cout<<endl<<prv_a<<" "<<prtc_a<<" "<<pub_a;
       /* 
        LAyer3::print();
        Layer2::print();        the previous access modifier was private that's why this class cannot reach top clsses
        Layer1::print();
        Base::print();
        */
    }
};
int main()
{
    Layer3 a;
    Layer4 b;
    a.print();
    b.print();
}