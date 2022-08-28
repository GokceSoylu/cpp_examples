/* pointer-variable = new data-type(value); a=new int[10];*/
#include <iostream>
using namespace std;
class  Base
{
    int n;
    public:
        Base(int n=10):n(n){}
        virtual void where()=0;
};
class Derivade:public Base
{
    int m;
    public:
        Derivade(int n=10):Base(n),m(n*2){}
        void where()
        {
            cout<<endl<<m;
        }
};
int main()
{
   
    Derivade x[2]={Derivade(1),Derivade(2)},y[2]={Derivade(3),Derivade(4)},z[2]={Derivade(5),Derivade(6)};
    Base **p = new Base*[3];// ! burada initialize etme
    //? Derivade x=new Derivade; Bu neden olmadı? Çünkü new aders döndürür. Derivade değişkene adres atamaya çalışıyorsun.
            //* kısaca şuna dikkat edelim new adres döndürür atamalarımızı ona göre yapalım! 
    p[0]=x;
    p[1]=y;
    p[2]=z;
    for(int i=0;i<3;i++)
        for(int j=0;j<2;j++)
            p[i][j].where();
}
// New hakkında bir özetleme yapalım. Öncelikle new adress döndürdüğü için aderss elde etmek isteğinde yani adress atayacağın zaman new 
//opereatorunu kullanırsın. malloc gibi düşünebilirsin. class