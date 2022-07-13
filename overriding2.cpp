#include <iostream>
using namespace std;
class Fruit
{
    public:
        Fruit()
        {
            cout<<"\n\nI am a fruit";
        }
};
class Apple: public Fruit
{
    public:
        Apple()
        {
            cout<<"\nI am an apple";
        }
};
class Banana: public Fruit
{
    public:    
        Banana()
       {
            cout<<"\nI am a banana";
       } 
};
int main()
{
    Banana b;
    Apple a;
}//bu nasıl oldu??? sanırım yapıcı fonk direkt kendi çalışyor bu yüzeden yapıcı fonk paremetrre albiliyor. eger paremetre alıyorsa onları alıp işlem yapar
//hmm yok paremetre almıyorsa da 