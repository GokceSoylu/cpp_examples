#include <iostream>
#include <ctime>//97 122
int main()
{
    int i;
    using namespace std;
    char posword[9];
    srand(time(0));
    for(i=0;i<8;i++)
        posword[i]=rand()%25+97;
    posword[i]='\0';
    cout<<endl<<posword;
}