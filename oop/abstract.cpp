#include <iostream>
using namespace std;
#define pi 3.14
class Shape
{
    protected:
        int perimeter, area;
    public:
        virtual void calculate_area()=0;
        virtual void get_area()=0;
        virtual void calculate_perimeter()=0;
        virtual void get_perimeter()=0;
};
class Rectangle:public Shape
{
    int n, m;
    public:
        Rectangle(int n, int m): n(n), m(m){}
        void calculate_area()
        {
            area=n*m;
        }
        void get_area()
        {
            cout<<"\nthe rectangle area = "<<area;
        }
        void calculate_perimeter()
        {
            perimeter=2*(n+m);
        }
        void get_perimeter()
        {
            cout<<"\nthe rectangle perimater = "<<perimeter;
        }
};  
class Circle: public Shape
{
    int n;
    public:
        Circle(int n): n(n){}
        void calculate_area()
        {
            area=(int)pi*n*n;
        }
        void get_area()
        {
            cout<<"\nthe circle area = "<<area;
        }
        void calculate_perimeter()
        {
            perimeter=2*pi*n;
        }
        void get_perimeter()
        {
            cout<<"\ncircle perimeter = "<<perimeter;
        }
};
class Square: public Rectangle
{
    int n;
    public:
        Square(int n): Rectangle(n, n){}
        void get_area()
        {
            cout<<"\nthe square area = "<<area;
        }
        void get_perimeter()
        {
            cout<<"\nthe square perimeter = "<<perimeter;
        }
};
int main()
{
    //! Shape s;// abstracter class dan nsne oluşturulamaz
    Circle c(3);
    Rectangle r(3,4);
    Square s(3);
    Shape *array[3];
    array[0]=&c;
    array[1]=&r;
    array[2]=&s;
    for(int i=0;i<3;i++)
    {
        array[i]->calculate_perimeter();
        array[i]->calculate_area();
        array[i]->get_perimeter();
        array[i]->get_area();
    }
}