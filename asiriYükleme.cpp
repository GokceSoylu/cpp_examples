/* overloaded function türkçe asırı yükleme. Çok havalı bir şey paremetre sayına göre adam hangi fonksiyonu kullnacağını biliyor */
#include <iostream>
int cevre(int);
int cevre(int,int);
int main()
{
    using namespace std;
    int a, b;
    cout<<"kenar uzunluklarini giriniz";
    cin>>a>>b;
    if(a==b)
        cout<<endl<<cevre(a);
    else
        cout<<endl<<cevre(a,b);
}
int cevre(int a)
{
    return 4*a;
}
int cevre(int a, int b)
{
    return 2*(a+b);
}
//şu an bu kodun çok saçma olduğunun farkındayım ama overloaded function çok afilli aslında. İki tane aynı isimli fom-nksiyonu paremetre sayısı
//yada türü farklı olduğunda rahatlıkla ayırt edebiliyor. Nasıl ayırt edbiliyor diye merek ediyorsan overloadedFunctions.cpp 'ye bakabilirsin:)
//ancak bu overloaded functions da ilk degeri tanımlama kısmında verirsen adamın aklın karışır. Az deger verdin gerisinin ilk tanımlamdan mı alacak
//yoksa degisken sayısımı o kadar anlayamaz. çokta sey etmeyelim :)
