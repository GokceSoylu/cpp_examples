#include <iostream>
int function1(int);
int function2(int);
void function3(int &);//this is new:)
void function4(int *);
using namespace std;
int main()
{
    int a=10, &b=a, *c=&a;//alians simply is an another namecof the value
    cout<<"before functions"<<endl<<"a = "<<a<<"   b = "<<b<<"   *c = "<<*c<<endl;//10 10 10
    cout<<"fuction1 = "<<function1(a)<<"   fuction2 = "<<function2(b)<<endl;// 100 100 
    function3(a);
    cout<<"after function3   a = "<<a<<"    b = "<<b<<"   *c = "<<*c<<endl;//100 100 100
    function4(c);
    cout<<"after function4 a = "<<a<<"    b = "<<b<<"   *c = "<<*c;//1000 1000 1000
} 
int function1(int x)
{
    return x*x;
}
int function2(int x)
{
    return x*x;
}
void function3(int &x)
{
    x*=x;
}
void function4(int *x)
{
    *x*=*x;
}//özet: tanımlamada & ile tanımlama yeni, eğer böyle yaparsan alians olur bu da değişkenin ikinci bir ismi gibi olur, * ile tanımlama normal pointer
//diğer yeni özelliğimiz fonksiyona(int &)ile gödermek böyle tanımladığımızda değiişkenin normal sadece adıyla göndeririz ancak fonsiyon değişkenin adresini alır
//şunuda belirtelim int &b; şeklinde yapacağın tanımlama hatalı olur. b birinin ikinci ismi olacak diyorsun eee kimin der derleyici:)