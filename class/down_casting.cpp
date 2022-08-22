#include <iostream>
using namespace std;
class Human
{
    public:
        string name;
        Human(string name="jane"):name(name){}
};
class Devoloper: public Human
{
    public:
        string language;;
        Devoloper(string name="jane", string language="c++"):Human(name), language(language){}
};
class Doctor: public Human
{
    public:
        string departman;
        Doctor(string name="jane", string departman="hearth"):Human(name),departman(departman){}
};
int main()
{
    Human h;
    Devoloper dev;
    Doctor dr;
    cout<<endl<<h.name;
    cout<<endl<<dev.name<<"\t"<<dev.language;
    cout<<endl<<dr.name<<"\t"<<dr.departman;
    //* buraya kadar tipik. buradan sonra downcasetig'e başlıyıcaz. up castingin tam tersi bu sefer türemiş sınıf türünden bir pointara
    //* base sınıfın adresını atıyıcaz. derleyici haliyle hey dostum bunların tipi aynı değil değil atama yapamam diyicek. bizde kardeşim merak 
    //* etme bu sınıfın zaten ondan türedi atynı özelliğe sahip. sen bunu o tipden düşünüver diyicec ve (*)tip dönüşümünü kullanıcaz 
    Devoloper n("necmiye","c++"), *np;
    cout<<endl<<endl<<n.name<<"\t"<<n.language;
    Human *dizi[3];
    dizi[0]=&h;
    dizi[1]=&dev;
    dizi[2]=&dr;
    for(int i=0;i<3;i++)
        cout<<endl<<dizi[i]->name;
    // su anda dizi[1]->language ulaşamıyoruz
    Devoloper *dp=(Devoloper*)dizi[1];
    cout<<endl<<dp->language;
    //? tamamen pointerın bellekte tuttuğu yerle ilgili. humanın pointerı sadece bir stringlik yeri tutar bu yüzden bu tip pointer ssadece
    //? bir stringlik yere erişebilir. Ddevoloper pointerı ise iki stringlik yere erişebilir bu sayede languageye erişir :))
    Doctor *drp=(Doctor*)dizi[1];//todo normalde dizi doctor değil devoloper ama bu pointerında iki stringe erişim hakkı var
    cout<<endl<<drp->departman;// hahaha bulduğu stringi yazdırdı. işte pointer ve class mantığının net özeti :))
}