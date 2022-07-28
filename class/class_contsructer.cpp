#include <iostream>
class number
{
    int x, y;
    public:
        number(int,int);
        number();
        void print();
};
int main()
{
    int x,y;
    number n(4);//boyle yapınca kurucu fonksiyonu direkt kendi çalşltiriyor
    n.print();
} 
number::number()
{
    x=10;
    y=20;
}
number::number(int x, int y=10)
{
    this->x=x;
    this->y=y;
}
void number::print()
{
    std::cout<<"\nx = "<<x<<"\ny = "<<y;
}