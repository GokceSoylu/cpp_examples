#include <iostream>
class room
{
    int a;
    public:
        int get(void)
        {
            return a;
        }
        room(int a)
        {
            this->a=a;
        }
        room()
        {
            a=25;
        }
};
int main()
{
    int i;
    room r(89);
    std::cout<<"\n "<<r.get();
}
//constructer function notes: the function can have paremeters and without parematers but can not have return value. to run the function just create a value whis type is the class
//if there is no any constructer function, its not problem couse compiler can give a value the varaible but if you code on prototype compiler can not.  