#include <iostream>
void count(int counter, int i, int *x, int *y);
int basamak(int);
int main()
{
    int i, x, y, counter500=0, counter1000=0, counter1500=0;
    for(i=1;i<=100;i++)
    {
        x=3;
        y=2;
        count(1,i,&x,&y);
        if(basamak(x)>basamak(y)) 
        {
            counter500++;
            //std::cout<<std::endl<<" "<<i<<" "<<x<<" "<<y;
        }
            
    }
    for(i=501;i<=1500;i++)
    {
        x=3;
        y=2;
        count(1,i,&x,&y);
        if(basamak(x)>basamak(y))
            counter1000++;
    }
    for(i=1001;i<=1500;i++)
    {
        x=3;
        y=2;
        count(1,i,&x,&y);
        if(basamak(x)>basamak(y))
            counter1500++;
    }
    std::cout<<"\nilk 500'de "<<counter500<<"\nilk 1000'de "<<counter1000<<"\nilk 1500'de "<<counter1500;
}
void count(int counter, int i, int *x, int *y)
{
    int tmp;
    if(counter==i)
    {
        return;
    }
    else
    {
        *x=*y+*x;
        tmp=*y;
        *y=*x;
        *x=*x+tmp;
        return count(counter+1,i,x,y);
    }
}
int basamak(int n)
{
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    return i;
}