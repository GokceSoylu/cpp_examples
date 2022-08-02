#include <iostream>
void count(int counter, int i, int *x, int *y);
int basamak(int);
int main()
{
    int i, counter100=0, counter500=0, counter1000=0, counter1500=0;
    int x, y; 
    for(i=1;i<=1500;i++)
    {
        x=3;
        y=2;
        count(1,i,&x,&y);
        //std::cout<<std::endl<<" "<<i<<" "<<x<<" "<<y;
        if(basamak(x)>basamak(y)) 
        {
            if(i<100) counter100++;
            if(i<=500) counter500++;
            if(i<=1000) counter1000++;
            if(i<=15000) counter1500++;
            //std::cout<<std::endl<<" "<<i<<" "<<x<<" "<<y;
        }
    }
    std::cout<<"\n\nilk 100'de "<<counter100<<"\nilk 500'de "<<counter500<<"\nilk 1000'de "<<counter1000<<"\nilk 1500'de "<<counter1500;
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