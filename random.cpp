#include <iostream>
#include <cstdlib>
int main()
{
    using namespace std;
    srand(time(NULL));
    cout<<1+rand()%9<<endl; //değişkensiz bu sekilde c'de yazdıramıyorduk.
}