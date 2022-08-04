#include <iostream>
#include <standards.h>
#include <time.h>
using namespace std;

class A//istediğimi istedeiğim kadar artırma 
{
    int num, *p, mines;
    public:
        A(int num=5):num(num)//bu havalı şey num(num) sadece constructer function'da yapılabiliyor
        {
            p= new int[num];
            for(int i=0;i<num;i++)
                p[i]=rand()% 25;
        }
        void print()
        {
            cout<<endl;
            for(int i=0;i<num;i++)
                cout<<p[i]<<" ";
        }
        void operator-(int i)
        {
            p[i]-=mines;
        }
        void set_mines(int i)
        {
            mines=i;
        }
};
int main()
{
    srand(time(NULL));
    A a;
    a.set_mines(3);
    a.print();
    a-0;
    a.print();
}//anladiık herhalde hocam. operator fonksiyonlarında ilk gelen çalıştıran eleman diğeri paremetre :)) kimisi paremetre almıyor dikkat edelim
//işleri kolaylaştirmak için kullanılır. daha karişik hale getiriyorsa overloded operator fı-unctşons kullanılmaz.