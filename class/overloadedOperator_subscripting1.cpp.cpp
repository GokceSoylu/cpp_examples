#include <iostream>
#include <standards.h>
#include <time.h>
using namespace std;

class safearay 
{
    private:
        int *arr, num;
    public:
        safearay(int num=5):num(num) 
        {
            arr=new int[num];
            int i;
            for(i = 0; i < num; i++) 
            {
                arr[i] = rand()%5;
            }
        }
      
      int* operator[](int i) {
         if( i > num ) {
            //cout << "Index out of bounds" <<endl; 
            // return first element.
            return arr;
         }
         
         return arr+i;
      }
        void print()
        {
            for(int i=0;i<num;i++)
                cout<<" "<<arr[i];
        }
};

int main() 
{
    srand(time(NULL));
    safearay A;
    *A[1]=10;
    A.print();
    return 0;
}