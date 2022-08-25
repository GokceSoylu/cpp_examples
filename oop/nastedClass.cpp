//iç içe class ta birbirlerinin private method ve üyelerini ulaşamazlar
#include <iostream>
class shell
{
    int x;
    void makeDouble_prv()//bu private buna ulaşamazsın:)
    {
        x*=2;
    }
    public:
        int m; 
        shell(int x)
        {
            this->x=x;
        }
        void makeDouble_pbl()
        {
            x*=2;
        }
        void print()
        {
            std::cout<<"\n"<<x;
        }
        void print(int x)
        {
            std::cout<<"\n"<<x;
        }
    private:
        class layer_prv
        {
            int y;
            void maketrible_prv()
            {
                y*=3;
            }
            public:
                layer_prv(int y)
                {
                    this->y=y;
                }
                void makeTrible_pbl()
                {
                    y*=3;
                }
        };
    public:
        class layer_pbl
        {
            int z;
            void makeHalf_prv()
            {
                z=z/2;
            }
            public:
                layer_pbl(int z)
                {
                    this->z=z;
                }
                void makeHalf_pbl()
                {
                    z=z/2;
                }
        };
};
int main()
{
    shell sh(1);
    sh.print();
    sh.makeDouble_pbl();
    sh.print();
    shell::layer_pbl ly(3);
    ly.makeHalf_pbl();
}
//ilginç ama içi içe sınıflarda kimsa kimsenin ne fonksiyonuna ne değişkenine ulaşamaz.
//-her sınıf sadece kendi metod ve üyelrine ulaşabilir.
