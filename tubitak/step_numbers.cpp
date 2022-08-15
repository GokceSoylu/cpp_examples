#include <iostream>
#include <math.h>
int control(long int);
int main()
{
    long int n, i, counter=0;
    for(i=10;i<pow(10,8);i++)
    {
        n=i;
        if(control(n)) counter++;
    }
    printf("\n%ld",counter);
    return 0;
}
int control(long int n)
{
    int digit, last_digit;
    last_digit=n%10-1;
    while(n>0)
    {
        last_digit=digit;
        digit=n%10;
        n=n/10;
        if(last_digit!=digit+1 || last_digit!=digit-1) return 0;
    }
    return 1;
}