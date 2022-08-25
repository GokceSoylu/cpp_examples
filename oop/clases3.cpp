#include <iostream>
#include <cstring>
using namespace std;
class Student
{
    int std_num;
    char name[20], sur_name[20];
    public:    
        void add(int num, char names[], char surname[])
        {
            std_num=num;
            strcpy(name,names);
            strcpy(sur_name,surname);
        }
        void show()
        {
            cout<<endl<<std_num<<"  "<<name<<"  "<<sur_name<<endl;
        }
};
int main()
{
    int num;
    char name[20], surname[20];
    Student std1, std2;
    cout<<"ilk ogrencinin sırasıyla numarası. adı ve soy adını giriniz"<<endl;
    cin>>num>>name>>surname;
    std1.add(num,name,surname);
    cout<<"\nikincşiogrencinin numarası, ismi ve soyismini giriniz \n";
    cin>>num>>name>>surname;
    std2.add(num, name, surname);
    std1.show();
    std2.show();
}
