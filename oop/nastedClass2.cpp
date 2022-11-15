#include <iostream>//alt sınıf private olsa neler değişirdi. y'yi tanımlayabilir miydik yada y2'yi?
class A 
{
    public:
        class B 
        {
            public:
                int n=20;
        };
        B z;
    public:
        int m=10;
public:
class C : public B 
{
    public:
        B y;//burada B sınıfından nesne tanımlayabilirsin.
        A::B y2;
        C *x;//* pointer tanımlanabilir.
        C *x2;//* ancak C sınıfından nesne tanımlayamazsın çünkü C sınıfı henüz tmamalanmadı.
        int k=10;
    };
};
int main()
{
    A sinif1;
    A::B sinif2;
    A::C sinif3;
    A::C sinif4;
    sinif4.x2=&sinif3;
    std::cout<<std::endl<<sinif1.m;
    std::cout<<std::endl<<sinif1.z.n;
    std::cout<<std::endl<<sinif2.n;
    std::cout<<std::endl<<sinif3.y.n;
    std::cout<<std::endl<<sinif3.y2.n;
    std::cout<<std::endl<<sinif4.x2->k;
}
//gördüğün gibi sınıf içi sınıf oluşturabiliyorsun. hatta sınıf içi sınıf türemiş bir sınıfta olabilir.