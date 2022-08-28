# Downcastig 

Downcasting türemiş sınıfı yeniden base sınıf haline getirmek diyebiliriz. dedik😁. 

base sınıf tipinde pointer tanımlıyoruz bu pointera türemiş sınıfın nesnesinin adresini atıyoruz. pointerda kendi size'ı kadar alana bakacağı
icin pointrla ulaştığımızda nesneye bir nevi türmiş sınıftaki özellikklerini kaybediyor. onlara ulaşamıyoruz. [örnek](blob/master/oop/polimorphism.cpp)


# Upcasting

aslında upcasting'de bunu geri alma alma işlemi. Base tipindeki pointerı , türemiş sınıf tipindeki  başka pointera atıyoruz.

ancak türemiş = base gibi bir durum oluştuğundan tip dönüşümü yapmamız gerekiyor. **ptr_türemiş=(türemiş*)base_ptr yaparız**.

bu işlmeden sonra artık yeni pointerımızla türemiş sınıf ozelliklerine de ulaşabiliriz. [Örnek](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/polimorphism2.cpp)

Not:: Downcasting'de değil upcasting'de tip dönüşümüne ihtiyaç duyarız.