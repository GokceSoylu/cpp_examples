#include <iostream>
using namespace std;
void print(int m[][4]);
int main()
{
    int matris[4][4]={1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10},i,j,m=1;
    print(matris);    
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            matris[i][j]=m;
            m++;
        }    
    print(matris);
}
void print(int m[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            cout<<"  "<<m[i][j];
        cout<<endl;
    }
}