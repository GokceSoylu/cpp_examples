#include <iostream>//same name varaible
using namespace std;//same name function
class Person
{
    long int id;
    string name;
    public:
        Person(long int id, string name):id(id),name(name){}
        long int get_id()
        {
            return id;
        } 
        string get_name()
        {
            return name;
        }
        void set(string name,long int id)
        {
            this->name=name;
            this->id=id;
        }
        void print()
        {
            cout<<endl<<name<<" "<<id;
        }
};
class Student: private Person
{
    long int id;
    string dep;
    public:
        Student(string name, long int id, long int id_std, string dep): id(id_std),dep(dep),Person(id, name){}//pay attantion please! you shold run Person constructer function.
        string get_dep()
        {
            return dep;
        }
        long int get_id()
        {
            return id;
        }
        void set(string name, long int id, string dep, long int id_std)
        {
            Person::set(name,id);
            id=id_std;
            this->dep=dep;
        }
        void print()
        {
            Person::print();
            cout<<" "<<id<<" "<<dep;
        }
};
int main()
{
    Student summer[3]={Student("Necmiye", 44434454596, 2010213001,"cmpe"), Student("Sabriye", 25613678828, 2010213051,"cmpe"), Student("hakan",12345678910,2010213040,"eee")};
    for(int i=0;i<3;i++)
        summer[i].print();
}