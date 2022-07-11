#include <cstring>
#include <iostream>
using namespace std;
class student
{
    char name[20];
    int age;
    public:
        student(char n[], int yas)
        {
            strcpy(name,n);
            age=yas;
        }
        void print()
        {
            cout<<endl<<name<<" "<<age;
        }
};