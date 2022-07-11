#include <iostream>
using namespace std;
class garden 
{
    public:
    int length;//wuhuuu bu arkadaş private olursa mainde direkt atama yapamazsın ama public olursa atma yaparsın. işte private üyeye sadece sınıftaki foksiyonlar ulaşabilir muhabbeti:)
    int cevre();
    int alan();
};
int main()
{
    int a,b;
    garden x,y;
    cout<<"bahcelerin kener uzunluklarını giriniz"<<endl;
    cin>>a>>b;
    x.length=a;
    y.length=b;
    cout<<endl<<"x bahcesiinin cevresi  "<<x.cevre()<<endl<<"x bahcesinin alanı  "<<x.alan();
    cout<<endl<<"y  bahcesinin cevresi  "<<y.cevre()<<endl<<"y bahcesinin alanı  "<<y.alan();

}
int garden::cevre()
{
    return 4*length;
}
int garden::alan()
{
    return length*length;
}