/* isalpha isdigit isalnum islower isupper tolower toupper strlen strcmp strcat strcpy*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a=2;
    char x='n', y[20]="necmiye", z[20]="Soylu";
    if(isalpha(x))
        cout<<"\nx is a latter --> "<<isalpha(x);
    else 
        cout<<"\nx is not a latter";
    if(isdigit('2'))
        cout<<"\na is a number --> "<<isdigit('2');
    else 
        cout<<"\na is not a number";
    if(isalnum('2'))//digit kontrolunde varaible kaabul etmiyor. Normal harf yazr gibi rakam yazılmalı, tırnak içinde.
        cout<<"\nx is a number or latter";
    else    
        cout<<"\nx is neider number nor latter";
    if(islower(x))
        cout<<"\nx is a lower latter ";
    else if(isupper(x))
        cout<<"\nx is a capital latter";
    cout<<endl<<strlen(y);
    cout<<endl<<strcmp(z,y);
    strcat(y,z);
    cout<<endl<<y;
    strcpy(y,z);
    cout<<endl<<y;
}