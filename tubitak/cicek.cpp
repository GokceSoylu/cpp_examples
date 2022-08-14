#include <iostream>
#include <math.h>
int main()
{
    long int dikilecek_cicek;
    int year=20;//2^(2n-1)
    dikilecek_cicek=pow(2,2*year-1);
    std::cout<<dikilecek_cicek;
}