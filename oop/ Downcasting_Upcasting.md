# downcastig 

Downcasting türemiş sınıfı yeniden base sınıf haline getirmek diyebiliriz. dedik😁. 

base sınıf tipinde pointer tanımlıyoruz bu pointera türemiş sınıfın nesnesinin adresini atıyoruz. pointerda kendi size kadar alana bakacağı
icin pointrla ulaştığımızda nesneye bir nevi türmiş sınıftaki özellikklerini kaybediyor. onlara ulaşamıyoruz.[örnek](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/class/polimorphism.cpp)

## upcasting

aaslında upcasting'de bunu geri alma alma işlemi. Base tipindeki pointera , türemiş sınıf tipindeki  baska pointerra atıyoruz.

ancak türemiş = base gibi bir durum oluştuğundan tip dönüşümü yapmamız gerekiyor. ptr_türemiş=(türemiş*)base_ptr yaparız.

bu işlmeden sonra artık yeni pointerımızla türemiş sınıf ozelliklerine de ulaşabiliriz. [örenk](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/class/polimorphism2.cpp)
