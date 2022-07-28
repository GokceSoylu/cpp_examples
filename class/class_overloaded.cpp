#include <iostream>
using namespace std;
class toplama
{
    public:
        int t(int a, int b)
        {
            return a+b;

        }
        float t(float a, float b)
        {
            return a+b;
        }
        int t(int a)
        {
            cout<<"\nyalnızlııık :) bu a = "<<a<<endl;
        }
};
int main()
{
    int a, b;
    toplama add;
    cout<<"iki adet sayı giriniz";
    cin>>a>>b;
    cout<<endl<<add.t(a,b);
    add.t(a);

}