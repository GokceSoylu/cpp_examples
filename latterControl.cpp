#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char name[20];
    int i=0;
    cout<<"\nisminizi girniz. Durdurmak icin * giriniz\n";
    cin>>name[i];
    while(name[i]!='*')
    {
        if(isalpha(name[i]))
            i++;
        else     
            cout<<"\nisminizde rakam bulunamaz ";
        cin>>name[i];
    }
    name[i]='\0';
    cout<<endl<<name;
}