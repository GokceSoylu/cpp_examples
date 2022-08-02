#include <iostream>
int factorial(int);
int main()
{
    int digit, sum, i, number;
    for(i=145;i<1000000000000;i++)
    {
        number=i;
        sum=0;
        while(number!=0)
        {
            digit=number%10;
            number=number/10;
            sum+=factorial(digit);
        }
        if(sum==i)
            std::cout<<"\n"<<i<<std::endl;
    }
}
int factorial(int x)
{
    if(x==0)
        return(1);
    else 
        return x*factorial(x-1);
}