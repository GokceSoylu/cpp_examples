#include <iostream>
// template tip sorulduğunda ne vereyim abime demektir. Template ne iş olursa yaparımm demektir.
using namespace std;
template <class T>
T function_(T x, T y)
{
    return x+y;
}

template <typename X>
X swap_(X &x, X &y)
{
    X z;
    z=x;
    x=y;
    y=z;
    return x+y;
}
int main()
{
    int a=10, b=20, c;
    char x='A', y='B', z;
    float m=2.4, n=9.8, k;
    cout<<endl<<function_(a,b);
    cout<<endl<<function_(m,n);
    cout<<endl<<function_(x,y);

}