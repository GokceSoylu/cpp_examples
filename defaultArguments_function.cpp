/* really inerasting topic--> you can initialize a valua pareter of function.*/
#include <iostream>
int areaOfTriangle(int a=1, int b=1, int c=1);
int main()
{
    using namespace std;
    int x,y,z;
    cout<<"deger vermeden  "<<areaOfTriangle()<<endl<<"2 yazdım   "<<areaOfTriangle(2)<<endl<<"2,2 yazdım   "<<areaOfTriangle(2,2)<<endl<<"2,2,2 yazdım    "<<areaOfTriangle(2,2,2);
}
int areaOfTriangle(int a, int b, int c)//be cearfull you should the values at prototip not here :))
{
    return a*b*c;
}