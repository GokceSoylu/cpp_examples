#include <iostream>
#include <cstring>
using namespace std;
class avatar
{
    public:
        char name[20], guc[20], zayıflık[20];
        int yas, boy, kilo;

};
int main()
{
    typedef avatar av;
    av avatars[5];
    cout<<"\navatarların sirasiyla isim, güc, zayıflık, yas, boy, kilo degerlerini giriniz\n";
    int i;
    for(i=0;i<5;i++)
    {
        cout<<i+1<<". avatar ";
        cin>>avatars[i].name>>avatars[i].guc>>avatars[i].zayıflık>>avatars[i].yas>>avatars[i].boy>>avatars[i].kilo;
        cout<<endl;
    }
    cout<<"kac numaralı avatrı secmek istersiniz ";
    cin>>i;
    cout<<avatars[i-1].name<<" "<<" "<<avatars[i-1].guc<<" "<<avatars[i-1].zayıflık<<endl<<avatars[i-1].yas<<" "<<avatars[i-1].boy<<" "<<avatars[i-1].kilo;
} 