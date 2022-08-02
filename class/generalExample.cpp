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
        void Student_copy(const Student &S)
        {
            number=S.number;
            grade=new int[number];
            for(int i=0;i<number;i++)
                grade[i]=S.grade[i];
        }
        int get_num() const
        {
            return number;
        }
        int get_element(int i)
        {
            return grade[i];
        }
        const int* get_array()//return değerini al, kullan ama değiştirme! bir de ye, iç ama israf etme 😁 
        {
            return grade;
        }
        void set(int indis, int value)
        {
            grade[indis]=value;
        } 
        void print() const
        {
            cout<<endl;
            for(int i=0;i<number;i++)
                cout<<" "<<grade[i];
        }
        int sum_itself() const//buradaki const abicim ben alırım sizin değerleri kullanırım ama değiştirmem bi zararım olmaz diyor;)
        {
            int sum=0;
            for(int i=0;i<number;i++)
                sum+=grade[i];
            return sum;
        }
        int sumWith(Student s)//işte class'ı parametre olarak alma öreneği
        {
            int sum=0;
            for(int i=0;i<number;i++)
                sum+=grade[i]+s.get_element(i);
            return sum;
        }
        Student product(const Student s)//aldığımız nesnenin ve fonksiyonu çalıştıran nesnenin değerlerini çarpıp yeni nesneye atıyoruz.
        {
            Student nw;
            for(int i=0;i<number;i++)
                nw.grade[i]=grade[i]*s.grade[i];//wuhuu
            return nw;
        }
        double avarage()
        {
            int sum=0;
            for(int i=0;i<number;i++)
                sum+=grade[i];
            return (double)sum/number; // buraya dikkat edelim! iki int değeri bölerek double değer elde edemeyiz, int değer elde ederiz. Burada tip dönüşümü yapıyoruz.
        }
        /*~Student()
        {
            cout<<"\n\ndelete on";
            delete[]grade;
            cout<<"\ndelete of\n";
        }
        */
};
int main()
{
    Student st, stt;//burada paremetresiz kurucu fonksiyonu çalıştırmak istiyorsak hiç parentez koymadan direkt
    int *p;
    for(int i=0;i<5;i++)
        st.set(i,i*10);
    stt.Student_copy(st);
    cout<<"\nthe number of stt = "<<stt.get_num();
    st.print();
    stt.print();
    cout<<"\nsum of the array inside of st = "<<st.sum_itself();
    cout<<"\nsum of the array of stt = "<<stt.sum_itself();
    //p=stt.get_array();    //!!! yukarıda retern degeri const olduğu için bu atamayı yapmana izin vermiyor. ee değişkene atarsan değiştireblirsin
    //yer mi anadolu çocuğu :))
    cout<<"\nsum of st and stt arrays = "<<st.sumWith(stt);
    (st.product(stt)).print(); // nesneye atamak yerine oluşturulan nesneyi yazdır fonksiyonunu çalışıtırmak için kullandık. böyle yapınca oluşturulan nesneyi tek sefer kullanabildik
    cout<<"\navarage of st array = "<<st.avarage();
    cout<<"\navarege of pruduct of st and stt arrays = "<<(st.product(stt)).avarage(); //nasıl kıyak hareket di mi :))
}