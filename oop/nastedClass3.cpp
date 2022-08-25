#include <iostream>
class A
{
    class B
    {
        public:
            int x=20;
    };
    
    public:
        B b;
        A::B bb;//A bitmedi?? ama sorun olmuyor çünkü B sinifindan değişken oluşturuyoruz ve B sinifi bitti
        class C:public B
        {
            public:
                int y=2*x;
                B bc;
                A::B bcc;//eveeet B sinfi private B'ye ulaşamıyoruz ama ulaşmak için yaptığımıza bakin public sınıfın içine B tipinde
                //değişken oluşturduk ona ulaşıp oradan B sınıfının içeriğine ulaşabiliyoruz.
        };
};
int main()
{
    A sinif1;
    //A::B sinif2; //!!! B sinifi private olduğu için direkt erişim yok
    A::C sinif3;
    using namespace std;
    cout<<endl<<sinif1.bb.x;
    cout<<endl<<sinif1.b.x;
    cout<<endl<<sinif3.bc.x;
    cout<<endl<<sinif3.bcc.x;
    cout<<endl<<"->"<<sinif3.x; //!!! türetilmiş bir sinif üst sinifinin değişkenlerine, fonksiyonlarına ulaşabilir 
    //ancak türetilmiş bir sinifin nesnesinin üst sinifin içeriğine ulaşip ulaşamayacağina ninifin yanına yazdiğimiz kısım belirler.
    //claass C : public B iste burası public olduğu için ulaşabilir:))
}