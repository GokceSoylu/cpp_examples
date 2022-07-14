#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name[20];
    bool a=true;
    while(a)
    {   
        a=false;
        cout<<"\nisminizi giriniz ";
        cin>>name;
        for(int i=0;name[i];i++)
        {
            if(!isalpha(name[i]))
            {
                cout<<"\nisminizde rakam bulunamaz ";
                a=true;
            }    
        }
    }
}