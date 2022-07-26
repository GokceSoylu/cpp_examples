#include <iostream>//yazar burada this pointerından bahsetmek istedi :)
using namespace std;
class numbers
{
    int x;
    float y;
    double z;
    public:
        void initialize(int);
        void initialize(float);
        void initialize(double);
        friend void print(numbers);
};
int main()
{
    int x;
    float y;
    double z;
    cout<<"\n x y z degerlerini giriniz ";
    cin>>x;
    cin>>y;
    cin>>z;
    numbers n;
    n.initialize(x);
    n.initialize(y);
    n.initialize(z);
    print(n);
}
void numbers::initialize(int x)
{
    this->x=x;
}
void numbers::initialize(float y)
{
    this->y=y;
}
void numbers::initialize(double z)
{
    this->z=z;
}
void print(numbers n)
{
    cout<<"\nx = "<<n.x<<"\ny = "<<n.y<<"\nz = "<<n.z;
}//✌🏻