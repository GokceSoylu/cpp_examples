#include <iostream>
#include <string>
class Student
{
    int number, number2;
    char name[20];
    public:
        friend void get(Student);
        Student()
        {
            number=10;
            number2=20;
            strcpy(name,"Ahmet");
        }
        Student(int number, int number2, char name[])
        {
            this->number=number;
            this->number2=number2;
            strcpy(this->name,name);
        }
};
int main()
{
    using namespace std;
    Student sinif[]={Student(1,3,"selin"),Student(1,3,"seli"),Student(1,3,"lin")};//   THİS 
    Student ogrenci(1,3,"selin");
    int i;
    get(ogrenci);
    cout<<endl;
    for(i=0;i<3;i++)
    {
        get(sinif[i]);
        cout<<endl;
    }    
}
void get(Student s)
{
    std::cout<<s.name<<" "<<s.number<<" "<<s.number2;
}
