#include <iostream>
using namespace std;
class Parent
{
    public:
        int n;
        Parent(int n=10):n(n){}
        void where()
        {
            cout<<"\nparent calss";
        }
};
class Childran : public Parent
{
    public: 
        int n;
        Childran(int n=20): Parent(), n(n){}
        void where()
        {
            cout<<"\nchildrean class";
        }
};
class Grand_child: public Childran
{
    public:
        int n;
        Grand_child(int n=30):Childran(),n(n)// Parent() direkt erişim yok dikkat
        {}
        void where()
        {
            cout<<"\ngrandchild class";
        }
};
int main()
{
    Parent p;
    Childran c;
    Grand_child gc;

}