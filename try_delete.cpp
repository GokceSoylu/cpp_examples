#include <iostream>
int main()
{
    int *m, n=5;
    m=new int(10);
    std::cout<<std::endl<<*m;
    delete m;
    m=&n;
    std::cout<<std::endl<<*m;
}//deleet tuttuğun aderes bırak demek yoksa pointerin kendisini silmeyiz. Pointer kendi kaplafığı alanıkaplamaya devamm eder