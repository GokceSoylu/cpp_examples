#include <iostream>
class Bank
{
    int number;
    int *grade;
    public:
        Bank(int number):number(number)
        {
            grade=new int[3];
        }
        void initialize(int array[])
        {
            for(int i=0;i<3;i++)
                grade[i]=array[i];
        }
        Bank operator+(Bank &b)
        {
            Bank nw(number+1);
            for(int i=0;i<3;i++)
                nw.grade[i]=grade[i]+b.grade[i];
            return nw;
        }
        int get_number()
        {
            return number;
        }
        void print()
        {
            std::cout<<std::endl;
            for(int i=0;i<3;i++)
                std::cout<<"  "<<grade[i];
            std::cout<<std::endl;
        }
};
int main()
{
    Bank b(1), bb(2);
    int p[3]={100,50,100}, pp[3]={100,90,60};
    b.initialize(p);
    bb.initialize(pp);
    using namespace std;
    cout<<endl<<"b -> "<<b.get_number();
    b.print();
    cout<<endl<<"bb-> "<<bb.get_number();
    bb.print();
    (b+bb).print();//😳
}