#include <iostream>//normalde kod çalişiyor eğer çalişmamışsa sayıların büyükm olmasından kaynaklanıyor olabilir. sayıları küçülterek deneyebilirsiniz
#include <math.h>
using namespace std;
int ahlak_sayisi(int, int, int);
bool asal(int);
int main()
{
    int i, j, k, number, counter=0;
    for(i=2;i<10000;i++)
    {
        if(asal(i)) continue;
        for(j=2;j<10000;j++)
        {
            if(asal(j)) continue;
            for(k=2;k<10000;k++)
            {
                if(asal(k)) continue;
                number=ahlak_sayisi(i,j,k);
                if(number>10000000 && number<100000000)
                    counter++;
            }
        }
    }
    cout<<"\n"<<counter;
}
int ahlak_sayisi(int x, int y, int z)
{

    return pow(x,2)+pow(y,3)+pow(z,4);
}
bool asal(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0 && x!=2)
            return true;
    }
    return false;
}