/*  1  2  3  4      şeklindeki matrisi      1  2  3  4      haline getiriniz 
    5  6  7  8                              8  12 16 15
    9  10 11 12                             14 13 9  5
    13 14 15 16                             6  7  11 10                         */
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(;i<=3;i++)
        cout<<"  "<<m[j][i];
    i--;
    for(j=1;j<=3;j++)
        cout<<"  "<<m[j][i];
    j--;
    for(i=2;i>=0;i--)
        cout<<"  "<<m[j][i];
    
    i++;
    for(j=2;j>0;j--)
        cout<<"  "<<m[j][i];
    j++;
    i++;
    for(;i<3;i++)
        cout<<"  "<<m[j][i];
    j++;
    for(i=2;i>0;i--)
        cout<<"  "<<m[j][i];
}