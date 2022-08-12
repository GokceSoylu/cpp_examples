#include <iostream>
#include <standards.h>
#include <time.h>
class Arrays
{
    
    int number, *p;
    public:
        Arrays(int number=6):number(number)
        {
            std::cout<<"\nconstructer calisti\n";
            p=new int[number];
            for(int i=0;i<number;i++)
            {
                
                p[i]=rand()%9;
            }   
        }
        Arrays operator=(const Arrays a)
        {
            Arrays nw(number);
            for(int i=0;i<number;i++)
                nw.p[i]=2*a.p[i];
            return nw;
        }
        void print()
        {
            for(int i=0;i<number;i++)
                std::cout<<" "<<p[i];
            std::cout<<std::endl;
        }
};
int main()
{
    srand(time(NULL));
    using namespace std;
    Arrays a1(3), a2(3);
    cout<<"a1 ";
    a1.print();
    cout<<"a2 ";
    a2.print();
    Arrays a3=a1;       
    cout<<"a3 = ";
    a3.print();   
    cout<<"(a1=a2) = ";//önemli bir ayrıntı daha --> = kullandığımızda constructer funtion çalışmaz direkt operator=()fonksiyonu çalışır.
    (a1=a2).print();//ancak burada hem operator=(fonsiyonu hem constructer function çalışır.
    // buraya dikkat edelim! normalde PAREMETRESİZ kurucu fonsiyonumuz olmadığı için direkt a3; ifadesini kabul etmez
    // ancak burada a3=a2; dediğimiz için copy function çalışır ve direkt a2 yi a3'e kopyalar. AAA bizim copy functionımız
    //yok ki! evet yok. compiler default olarak onu oluşturur.
}