#include <iostream>
#include <string.h>
#include <time.h>
#include <standards.h> 
using namespace std;
class Card
{
    protected://! sınıfın kendisi aynı özelliğe sahip olduğu için buradak değişkenlere ulaşabilir. Ancak sınıfın değikeni o özelliğe ulaşamaz
    // * buradaki mantık şu. Alt sınıfın (mirasçı arkadaşın) üstündeki elemanlara ulaşma hakkı yok. ancak buradaki ozelliklerin hepsine kendide sahip olduğu için bu özelliklere birşeyler atayabilir ama başka bir sınıfın değişkenine bir şey atamıyor
    //*kendi bu ozelliğe sahip ve ona atama yapıyor
        int number;
        string type;
    public:
        Card(int number=1, string type="maca"):number(number), type(type){}
        void print()
        {
            cout<<endl<<type;
            if(number==1) cout<<"\t"<<"as";
            else if(number==11) cout<<"\t"<<"vale";
            else if(number==12) cout<<"\t"<<"kiz";
            else if(number==13) cout<<"\t"<<"papaz";
            else cout<<"\t"<<number;
        }
        /*void operator=(Card &c)
        {
            this->number=c.number;
            this->type=c.type;
        }*/
};
class Deck: private Card
{
    Card deck[52];
    string tip;
    public:
        Deck()
        {
            for(int i=0;i<4;i++)    
                for(int j=1;j<14;j++)
                {
                    switch(i)
                    {
                        case 0: tip="maca"; break;
                        case 1: tip="sinek"; break;
                        case 2: tip="karo"; break;
                        case 3: tip="kupa"; break;
                    }
                    deck[13*i+j]=Card(j,tip);
                }
        }
        void print()
        {
            for(int j=0;j<53;j++)
                deck[j].Card::print();
        }
        void mix(int n=50)
        {
            int x,y;
            Card tmp;
            for(int i=n;i>0;i--)
            {
                x=rand()%53;
                y=rand()%53;
                tmp=deck[x];
                deck[x]=deck[y];
                deck[y]=tmp;
            }
        }
        Card give_card()
        {
            int x=rand()%53;
            return deck[x];
        }
};
int main()
{
    srand(time(NULL));
    Deck d1;
    d1.print();
    d1.mix();
    d1.print();
    cout<<endl<<endl;
    d1.give_card().print();
}