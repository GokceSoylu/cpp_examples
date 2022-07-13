#include <iostream>
using namespace std;
class Shell
{
    public:
        void print(int a)
        {
            cout<<"\nShell int a = "<<a;
        } 
        void print(char a)
        {
            cout<<"\nshell cahr a = "<<a;
        }
};
class Layer: public Shell
{
    public:
        void print(int a)
        {
            cout<<"\nLayer int a = "<<a;
        }
        void print(char a)
        {
            cout<<"\nLayer char a = "<<a;
        }
};
int main()
{
    Layer l1, l2;
    l1.print(5);
    l1.print('e');
    cout<<endl;
    l1.Shell::print(5);
    l1.Shell::print('e');
}
//:: operatoru locala degil globala erismeyi saglar bu sadece sınıflar için degil normal varaible içinde geçerli