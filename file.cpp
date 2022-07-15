#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream p;
    p.open("dosya.txt",ios::app);
    p<<"Necmiye Soylu";
}//ofstream ifstream fstream pointerın tipi gibi düşünülebilir. bu tipte bir pointerin tanımlarız. daha sonra open() fonksiyonu ile bu dosyayı açarız. 
//yaınada kullanım amacımıza göre modunu yazarız. C den şöyle bir farkı var modsuz açarsakta kabul eder. yoksa oluşturu varsa silip yazar :))