#include <iostream>
void count(int counter, int i, long int *x, long int *y);
int basamak(long int);
int main()
{
    int i, counter100=0, counter500=0, counter1000=0, counter1500=0;
    long int x, y; 
    for(i=1;i<=1500;i++)
    {
        x=3;
        y=2;
        count(1,i,&x,&y);
        //std::cout<<std::endl<<" "<<i<<" "<<x<<" "<<y;
        if(basamak(x)>basamak(y)) 
        {
            if(i<=100) counter100++;
            else if(i<=500) counter500++;
            else if(i<=1000) counter1000++;
            else if(i<=15000) counter1500++;
            std::cout<<std::endl<<" "<<i<<" "<<x<<" "<<y;
        }
    }
    std::cout<<"\nilk 100'de "<<counter100<<"\nilk 500'de "<<counter500<<"\nilk 1000'de "<<counter1000<<"\nilk 1500'de "<<counter1500;
}
void count(int counter, int i, long  int *x, long int *y)
{
    long int tmp;
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
int basamak(long int n)
{
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    return i;
}