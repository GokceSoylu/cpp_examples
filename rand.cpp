#include <iostream>
#include <cstring>
#include <ctime>
int main()
{
    using namespace std;
    int posword[8];
    srand(time(0));
    for(int i=0;i<8;i++)
    {
        posword[i]=rand()%10;
        cout<<" "<<posword[i];
    }
}