#include <iostream>
using namespace std;
int control(char,int, int);
char table[3][3];
int main()
{
    char tas;
    int i, j, k, l, counter=0;
    while(counter<9)
    {
        cout<<"\ntasınızı giriniz. ";
        cin>>tas;
        cout<<"\nkoordinatları giriniz. ";
        cin>>i>>j;
        table[i][j]=tas;
        for(k=0;k<3;k++)
        {
            for(l=0;l<3;l++)
                cout<<" "<<table[k][l];
            cout<<endl;
        }
        if(control(tas,i,j)==1)
        {
            cout<<endl<<tas<<tas<<tas;
            break;
        }
        counter++;
    }
    if(counter==9)
        cout<<endl<<"XOX";
}
int control(char tas, int i, int j)
{
    if(table[i+1][j]==tas)
        if(table[i-1][j]==tas || table[i+2][j]==tas)
            return 1;
    if(table[i-1][j]==tas)
        if(table[i+1][j]==tas || table[i-2][j]==tas) 
            return 1;
    if(table[i][j+1]==tas)
        if(table[i][j+2]==tas || table[i][j-2]==tas)
            return 1;
    if(table[i][j-1]==tas)
        if(table[i][j-2]==tas || table[i][j+1]==tas)
            return 1;
    if(table[i+1][j+1]==tas)
        if(table[i+2][j+2] || table[i-1][j-1])
            return 1;
    if(table[i-1][j-1]==tas)
        if(table[i+1][j+1]==tas || table[i-2][j-2]==tas)
            return 1;
    return 0;
}