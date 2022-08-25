#include <iostream>
#include <cstring>
using namespace std;
class avatar
{
    char name[20];
    int age;
    public:
        avatar(char n[], int yas)
        {
            strcpy(name,n);
            age=yas;
        }
        ~avatar()
        {
            cout<<"\nnesne silindi\n";
        }
};
int main()
{
    avatar a1("necmiye",21);
    avatar a2("sabriye",22);
}