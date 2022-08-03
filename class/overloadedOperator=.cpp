#include <iostream>
#include <standards.h>
#include <time.h>
class Arrays
{
    
    int number, *p;
    public:
        Arrays(int number):number(number)
        {
            
            p=new int[number];
            for(int i=0;i<number;i++)
            {
                
                p[i]=rand()%9;
            }   
        }
        Arrays operator=(Arrays a)
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
    cout<<"(a1=a2) = ";
    (a1=a2).print();
    // buraya dikkat edelim! normalde parametresiz kurucu fonsiyonumuz olmadığı için direkt a3; ifadesini kabul etmez
    // ancak burada a3=a2; dediğimiz için copy function çalışır ve direkt a2 yi a3'e kopyalar. AAA bizim copy functionımız
    //yok ki! evet yok. compiler default olarak onu oluşturur.
}