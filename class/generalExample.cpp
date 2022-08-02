#include <iostream>
using namespace std;
class Student
{
    
    int number;
    int *grade;
    public:
        Student(int number=5):number(number)//afilli bunu kullanalım
        {
            //this->number=number;
            grade=new int[number];
        }
        ~Student()
        {
            delete[]grade;
        }
        void Student_copy(const Student &S)
        {
            number=S.number;
            grade=new int[number];
            for(int i=0;i<number;i++)
                grade[i]=S.grade[i];
        }
        int get_num()
        {
            return number;
        }
        int* get_array()
        {
            return grade;
        }
        void set(int indis, int value)
        {
            grade[indis]=value;
        } 
        void print()
        {
            cout<<endl;
            for(int i=0;i<number;i++)
                cout<<" "<<grade[i];
        }
        int sum()
        {
            int sum=0;
            for(int i=0;i<number;i++)
                sum+=grade[i];
            return sum;
        }
};
int main()
{
    Student st, stt;//burada paremetresiz kurucu fonksiyonu çalıştırmak istiyorsak hiç parentez koymadan direkt
    for(int i=0;i<5;i++)
        st.set(i,i*10);
    stt.Student_copy(st);
    cout<<"\nthe number of stt = "<<stt.get_num();
    st.print();
    stt.print();
    cout<<"\nsum of the array inside of st = "<<st.sum();
    cout<<"\nsum of the array of stt = "<<stt.sum();
}