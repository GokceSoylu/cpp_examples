/*  a 12 8 4 şeklindeki matrisi a  b  c     şeklinde yazdırınız
    b 11 5 6                    12 11 16
    c 16 3 7                    8  5  3
                                4  6  7 */
#include <iostream>
int main()
{
    using namespace std;
    int m[3][3]={12,8,4,11,5,6,16,3,7},i,j,tmp;
    for(i=0;i<3;i++)
    { 
        for(j=i+1;j<3;j++)
        {
            tmp=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=tmp;
        }     
    }
    for(i=0;i<3;i++)
    {  
        for(j=0;j<3;j++)
            cout<<" "<<m[i][j];
        cout<<endl;
    }
}