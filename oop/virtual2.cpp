//? öncelikle virtula pointer olan yerde çalışırr!!!
//* biz bu zamana kadar iki şeyde virtual kullanıyoruz bir ortada upcasting downcasting gibi bir poşnter muhabbeti vardır. 
//* birde multiple inhertance yani birden fazla sınıftan türeme söz konusudu. :))
#include <iostream>
using namespace std;
class Kedi
{
    public:
        int n=0;
        void ses()
        {
            cout<<endl<<"miyav";
        }
};
class Aslan:virtual public Kedi
{
    public:
        int n=10;
        void ses()
        {
            cout<<endl<<"kukreme";
        }
};
int main()
{
    Aslan a;
    Kedi k;
    a.ses();
    k.ses();
    cout<<"\nburaya kadar virtual var yok fark etmez herkes once kendi skobundakine oncelik verir\nama pointera atamaya başladiğimizda işler değişir";
    Kedi *kedi[2]={&a,&k};
    Aslan *aslan[1];
    cout<<endl<<a.n;
    cout<<endl<<k.n;
    //aslan[0]=(Aslan*)kedi[0];
    cout<<endl<<kedi[0]->n;
}//? şimdi anladık değil mi? normalde virtual olmadığı zaman. pointer sadece kendi alanını kaplıyo ve
