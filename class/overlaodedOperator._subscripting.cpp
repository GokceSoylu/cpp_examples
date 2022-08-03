#include <iostream>
#include <standards.h>
#include <time.h>
using namespace std;
class a
{
    int n, *array;
    public:
        
        a(int n=3):n(n)
        {
            array=new int[n];
            for(int i=0;i<n;i++)
                array[i]=rand()%5;
        }
        int* operator[](int i)
        {
            if(i>=n) cout<<"\nboyutu aştınız";
            return array+i;
        }
        void print()
        {
            cout<<endl;
            for(int i=0;i<n;i++)
                cout<<" "<<array[i];
        }
};
int main()
{
    srand(time(NULL));
    a a1;
    a1.print();
    *a1[1]=10;
    a1.print();
}