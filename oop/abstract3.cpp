//* Öncelikle abstract sınıf oluşturduğunmuzda (base sınıfta virtual fonkoluturup=0; diyoruz) artık sınıfımız nesne oluşturma özelleğini kaybeder.
//* bizde down casting yaparken Base tipinde pointer oluşturuyırduk. Tamamdır buraya kadar sorun yok nesne oluşturmuyoruz pointer oluşturuyoruz.
//* Dizi olusturecağımız zaman ise *p[3]; yapıyorduk yani pointer dizisi. aderes tutan dizi. Neden normal dizi oluşturamıuoruz. Yukarıdaki sebepten. dizimiz normal olsa 
//* nensne tutan dizi olur bunu yapamayız.Bu yüzden adres tutan dizi yapıyoruz. 

//? peki new kullanımı?? 
    //? New isteğimiz tipte bellekten yer alır ve adress döndürür. syntax: pointer=new type(value);  or pointer=new type[size];
    //? initializ'a gelince initialize yapamayız. Tanımlar daha sonra altta istediğimiz atarız.
#include <iostream>
using namespace std;
class Base
{
    int n;
    public:
        Base(int n=10):n(n){}
        virtual void where()=0;
};
class Der: public Base
{
    int m;
    public:
        Der(int n=10): Base(n), m(n*10){}
        void where()
        {
            cout<<endl<<"in derivade\t"<<m;
        }
};
class Der2:public Base
{
    int k;
    public:
        Der2(int n=10):Base(n),k(n*5){}
        void where()
        {
            cout<<endl<<"in Der2\t"<<k;
        }
};
int main()
{
    //! Der d2=new Der; Hey dear what are you doing? you're trying to assign an adress a varible. Oh no! unaccaptable
   
    // buradaki asıl amacımız initialize yöntemlerini denemek
    
    Der d1(1);
    Der d1_array[2]={Der(2),Der(3)}; //* genç hanım burada Der diye belirtmezsek int gibi algılar ve tip uyuşmazlığından hata verir. DAvul bile dengi dengine :))

    //? buraya kadar gayet normal bir şekilde new olmadan normal nesne de aldık dizi halinde nesne de aldık ve hiç sorunsuz tanımladığımız yerde initializxe ettik no problem:)

    Der *pd=new Der;
    pd=&d1;
    Der *pd2=new Der[2];
    pd2[0]=d1_array[0];
    pd2[1]=d1_array[1];

    //? şimdiyse array ve normal tek nesneyi new ile aldık. adres aldığımız zaman değil daha sonra edebimizce atamada yaptık.
    //todo yukarıdaki iki yöntem arasındaki farka bakalım. pointer kullanacağimiz zaman adress atayacağoımız zaman new kullandık. diğerinde dümdüz nensne, array oluşturuyoruz

    //buradan sonraysa Abstract'da kullandığımız kısma geçelim. Downcasting yapıcaz yani :))

    Base *pb=&d1;
    Base *pb_array[1]={&d1};
    Base *pb_multiArray[1]={d1_array};
    Base *pb_2=pd;
    Base *pb2[2]={pd2,d1_array};// wuhuuu 

    //? Abstract class olduğunda adres tutan değişkenler tanımlayabiliyoruz. bu mantıktan dizi yapacaksamda adres tutan dizi yaparız:))
    //? initialize'a geldiğmizde de direkt initialize ederiz sııntı olmaz. İnitialize sıkıntısını new'de yaşarız ama boşveriyorum onuda malloc'tada initialize edmeyiz sorun yok
    //? bir sayır altta değer atariz hiç bir şey aolmaz:))

    Base **p_new= new Base*[1];
    p_new[0]=&d1;
    Base **p2_new=new Base*[2];
    p2_new[0]=d1_array;
    p2_new[1]=pd2;

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            pb2[i][j].where();
    cout<<endl<<endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            p2_new[i][j].where();
} 