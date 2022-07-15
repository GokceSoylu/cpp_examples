#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream p;
    p.open("dosya.txt");
    p<<"merhaba";
}