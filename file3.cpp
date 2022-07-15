#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    ofstream p;
    p.open("file.txt",ios::app);
    p<<"hi there";
}
