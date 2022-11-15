#include <iostream>
int top(int a, int b)
{
    return a+b;
}
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    printf("\n%d",top(2,3));
    printf("\n%d",sum(2,3));
    printf("\n%d",sum(1,2,3));
}