#include <iostream>
using namespace std;
class Person
{
    //protected:  protected-> base class and inheritance class can access these varaibles.
    //pravite -> just base class can access the varaibles
    long int id;
    string name;
    public:
        Person(long int id, string name):id(id), name(name){}
        void print()
        {
            cout<<endl<<id<<" "<<name;
        }
        void set_name(string name)
        {
            this->name=name;
        }
        void set_id(int id)
        {
            this->id=id;
        }
};
class Student :public Person
{
    int std_num;
    string dep;
    public:
        Student(long int id, string name, int std_num, string dep): std_num(std_num), dep(dep), Person(id, name) {}//şu paremetreyi sınıfa atama off😍
        void set_std_num(int num)
        {
            std_num=num;
        }
        void set_dep(string dep)
        {
            this->dep=dep;
        }
        void print()
        {
            cout<<" "<<std_num<<" "<<dep<<endl;
        }
        /*void set_name(string name)
        {
            this->name=name;
        }
        */
};
int main()
{
    Student s(44434454596,"Necmiye",2010213001,"computer engineering");
    s.Person::print();//👍🏻
    s.print();//✌🏻
    s.set_name("Necmiye Soylu");
    s.Person::print();
}//to sum up if functions name are not same you can write derived obje.function name directly but, if their name are same you should
//write obje.base_class_name:function_name()
//overriding ☝🏻