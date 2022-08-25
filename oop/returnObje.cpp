#include <iostream>
using namespace std;
class Number
{
    
    public:
       int x, y;
        Number(int x, int y)
        {
            this->x=x;
            this->y=y;
        }
        Number add(Number n) const
        {
            int x=this->x+n.x;;
            int y=this->y+n.y;
            return Number(x,y);
        }
};
int main()
{
    Number n1(3,5),n2(7,4);
    Number n3=n2.add(n1);//yeni bir nesne oluşturup fonsiyonumuzun döndürdüğü nesneyi bu yeni nesnemize atatdık.
    cout<<"\nn1 x = "<<n1.x<<"  y = "<<n1.y;
    cout<<"\nn2 x = "<<n2.x<<"  y = "<<n2.y;
    cout<<"\nn3 = n1 + n2   x = "<<n3.x<<"   y = "<<n3.y;
    cout<<"\nn2 + n3  x = "<<(n2.add(n3)).x<<"   y = "<<(n2.add(n3)).y;//buarada ise yeni nesne oluşturmadık return edilen nesneye tek seferlik
    //sadece fonksiyonu çalıştırdığımızda kullandık. bu yöntem ile oluşturulan  nesneyi saklayamayız. return edilen int değeri bir yer atamadn direkt
    //yazdırmamaız gibi :))
}