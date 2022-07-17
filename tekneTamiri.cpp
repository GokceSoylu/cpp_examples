#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int tablo[3][2]={42,34,83,61,93,79}, adet, r, c, sum=0;
    char row[10],column[10];
    bool a=1;
    cout<<"\nsırasıyla tahtanın uzunlugunu, inceligi kalınkıgını ve en son olarakta adedini giriniz\n";
    while(a==1)
    {
        cin>>row;
        cout<<endl;
        cin>>column;
        cin>>adet;
        if(strcmp(row,"kisa")==0) r=0;
        else if(strcmp(row,"orta")==0) r=1;
        else if(strcmp(row,"uzun")==0)r=2;
        else{ cout<<"\ntahta bıyunda hatalı giris yapılmıstır\n"; break;}
        if(strcmp(column,"ince")==0) c=1;
        else if(strcmp(column,"kalin")==0) c=0;
        else { cout<<"\ntahta kalınlıgı girisinde hata yapılmıstır";  break;}
        sum+=adet*tablo[r][c];
        cout<<"\ndevam etmek icin 1 / durdurmak icin 0 giriniz  ";
        cin>>a;
    }
    cout<<"\ntoplam ücret "<<sum<<endl;
}