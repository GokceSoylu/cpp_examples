#include <iostream>
void print(int[][4]);
using namespace std;
int main()
{
    int matris[4][4]={1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10},i,j,add;
    print(matris);
    for(i=1;i<16;i++)
    {    
        add=matris[(i-i%4)/4][i%4];
        for(j=i-1;j>=0 && add<matris[(j-j%4)/4][j%4];j--)
            matris[((j+1)-(j+1)%4)/4][(j+1)%4]=matris[(j-j%4)/4][j%4];
        j++;
        matris[(j-j%4)/4][j%4]=add;
    }
    print(matris);
}
void print(int m[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    { 
        for(j=0;j<4;j++)
            cout<<" "<<m[i][j];
        cout<<endl;
    }
}