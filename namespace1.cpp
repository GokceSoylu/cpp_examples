#include <iostream>
namespace class1
{
   int x=10, y=20;
}
namespace class2
{
    int x=15, y=25;
}
using namespace class1;
using std::cout;
int main()
{
    cout<<x<<y;
}
