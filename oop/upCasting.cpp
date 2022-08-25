#include <iostream>// What is the upcasting? I also don't know:))
using namespace std;
class Base
{
    public:
        string name;
        Base(string name="jane"):name(name){}
};
class X: public Base
{
    public:
        string surname;
        X(string name="jane", string surname="eyre"):Base(name), surname(surname){}

};
class Y:public Base
{
    public:
        int age;
        Y(string name="Jane", int age=21):Base(name), age(age){}
};
int main()
{
    Base b;
    X x;
    Y y;
    cout<<endl<<b.name;
    cout<<endl<<x.name<<"\t"<<x.surname;
    cout<<endl<<y.name<<"\t"<<y.age;
    //* buraya kadar sorun yok bildiğimiz inhertance class muhabbeti. Türeyen sınıf türediği sınıfın özelliklerine sahiptir. 
    //*Şimdi çarşıyı karıştırıcaz. Bir Base tipinde pointer dizi oluturucaz. ooo heyecanlı değil mi evet pointer dizi yapıcaz yani adresleri tutan bir dizi
    //*her elemanı ayrı bir pointermış gibi davranan dizi :)). Heyecanımız tazeyken anlatıma devam--> bu pointerlara X ve Y sınıflarının nesnelerinin
    //*adreslerini atıyıcaz. devamı haftaya... Şaka Şaka :))
    //*bu pointerların tipi Base olduğundan her ne kadar türemiş sınıfların nesnelerinin adreslerini de tutsa sadece Base in özelliklerine erişebilecek
    cout<<endl<<"pointer diziye tama yapiliyoor";
    Base *dizi[3];
    dizi[0]=&b;
    dizi[1]=&x;
    dizi[2]=&y;   
    for(int i=0;i<3;i++)
        cout<<endl<<dizi[i]->name;  //?dikkat "->"" yaptık çünkü pointer.
    // cout<<"\n "<<dizi[1]->surname; dikkat bu mümkün değil.
}