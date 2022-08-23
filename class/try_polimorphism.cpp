// aslında virtual bir nevi gücünü azaltmak. Onun başka bir sınıfı ezmesini engellemek
#include <iostream>//bildiiğin etkisizleştiriyor!! sanallaştırıyor
using namespace std;
class Exam
{
    int grade;
    public:
        float result;
        Exam(int grade=0):grade(grade)
        {
            result=(float)grade;
        }
        
        void print()
        {
            cout<<"\ngrade = "<<result;
        }
};
class Midterm:public Exam
{
    int grade;
    public:
        float result;
        Midterm(int grade=0):Exam(grade)
        {
            result=(float)grade*0.4;
        }
         
        void print()
        {
            cout<<"\ngarde = "<<result;
        }
};
class Final: virtual public Exam
{
    int grade;
    public:
        float result;
        Final(int grade=0):Exam(grade)
        {
            result=(float)grade*0.6;
        }
        
        void print()
        {
            cout<<"\ngrade = "<<result;
        } 
};
int main()
{
    //* öncelikle şunu sorgukayalımm türediği sınıf virtual olasa ne olmasa ne oluyor;
    Exam e(100);
    Midterm m(100);
    Final f(100);
    cout<<e.result;
    cout<<endl<<m.result;
    cout<<endl<<f.result;
    cout<<endl<<endl;
    e.print();
    m.print();
    f.print();
}