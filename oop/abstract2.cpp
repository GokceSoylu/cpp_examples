#include <iostream>
using namespace std;
class Main
{
    public:       
        virtual void show_user()=0;
};
class Normal_user:public Main
{
    string name, country;
    int age;
    public:
        Normal_user(string name, string country, int age): name(name), country(country), age(age){}
        void show_user()
        {
            cout<<endl<<name<<"\t"<<age<<"\t"<<country;
        }
};
class Premium_user:public Main
{
    string name, country;
    int age, paymanent; 
    public:
        Premium_user(string name, string country, int age, int paymanent): name(name), country(country), age(age), paymanent(paymanent){}
        void show_user()
        {
            cout<<endl<<name<<"\t"<<age<<"\t"<<country<<"\t"<<paymanent;
        }
};
int main()
{
    Normal_user n("necmiye","turkey",22);//n2=new("hasan","fas",38);
    Premium_user p("sabriye","turkey",23,90);
    Main *m[2]={&n, &p};
    for(int i=0;i<2;i++)
        m[i]->show_user();
}