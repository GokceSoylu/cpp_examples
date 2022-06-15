/* derleyici fonksiyonların hangisi olduğunu bakarken önce __Z ifadesini koyar bu hepsinde var. Daha sonra fonksiyon kaç harfliyse yanına onu yazar
adı toplama ise __Z7 olur sonrada parametre listesini bakar double toplama(int) olsun __Z7i şeklinde kodlanır. sırasıyla isme sonra parametre listesine
bakılır gördüğün gibi ne döndürdüğünün bir onemi yok (return). o zaman iki fonksiyonun ismi aynıysa paremetre listesine bakar. bu yüzden 
overloaded fonksiyonlarda defaoult value kullanırsan adama ilk değeri verdin çalıştırıken o degeri kullansın diye toplama(); diyerek direkt
çalıştıracağın için derleyice hangi fonksiyon kast ettiğiini anlayamaz. Ayrıca aynı parametre listesine sahip ancak farklı tipte return döndüren
overloaded fonksiyonlarda hatalıdır. */
#include <iostream>
int addition(int, int, int);
int addition(int, int);
int addition(int);
int main()
{
    using namespace std;
    cout<<"addition(1,2,3) = "<<addition(1,2,3)<<endl;
    cout<<"addition(50,70) = "<<addition(50,70)<<endl;
    cout<<"addition(10) = "<<addition(10)<<endl;
} 
int addition(int v, int y, int z)
{
    return z+y+v;
}
int addition(int a, int b)
{
    return a+b;
}
int addition(int x)
{
    return x+x;
}