#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
int main()
{
    char a[20];
    int n;
    cout<<"\nname  ";
    cin>>a;
    cout<<"\nyas ";
    cin>>n;
    student s1(a,n);
    s1.print();

}
