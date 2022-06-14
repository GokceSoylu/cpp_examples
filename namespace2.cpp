#include <iostream>
namespace room1
{
   int x=10, y=20;
}
namespace room2
{
    int x=15, y=25;
}
using room2::x;
using room1::y;
using std::cout;
using std::endl;
int main()
{
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<room2::y<<endl;
    cout<<room1::x;
    //15 20 25 10
}//özet geçelim struct tarzı isim alanları olusturabilirsin namespaca ile. bunları kullanırken fonksiyonda tamamen belirli bir namespace kullanacaksan
//using namespace isim_alani; diyerek tanimlarsin - işte dümdüz bu isim alanını kullan diyoruz - ancak isim alanından belirli bir değişkeni kullanacaksak
//using isim_alani::degisken; deriz. namespaca yazmadik dikkat! Sonra syntax error :) 
//yahu std::cout yaz yaz bununla ugrasilmaz diyorsan evet haklisin. başa bir using std::cout; atarsan hallolur. using namaspace std; de
//diyebilirsin ancak bu sekilde direkt isim alanı belirlemek sıkıntıya sebep olabilir -isim alanı çakışması yasanabilir- pek tavsiye edilmez:)