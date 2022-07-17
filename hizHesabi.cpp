#include <iostream>
using namespace std;
int hiz(int t);
int main()
{
    int t, v;
    cout<<"\nkacinci dakikadaki hizini ogrenmek istersiniz ";
    cin>>t;
    v=hiz(t);
    cout<<"\nhiz = "<<v;
}
int hiz(int t)
{
    if(t<=4)
        return t*3;
    if(t>4 && t<=12)
        return 4*3;
    if(t>12)
        return 4*3-t*3;

}