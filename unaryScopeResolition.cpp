#include <iostream>
int a=10;
int main()
{
    int a=20;
    using namespace std;
    cout<<"local   "<<a<<endl;
    cout<<"global   "<<::a;
}//normalde zaten local varaible'ı dikkate alır ancak " :: " sayeasinde lolcal'i boşver glabal varaible'a bak deriz. 
//isimleri aynı olmasa bildiğin gibi zaten böyle bir şeye gerek kalmaz
//aa bunu global değilde başka bloktaki değişkene ulaşmak için kullanayım diyen sivri zekalı arkadaş Hayır olmaz:)) sadece global için kullanabilirsin:))