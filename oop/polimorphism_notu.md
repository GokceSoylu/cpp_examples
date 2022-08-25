# Polimorphism

### giriş / polimorphism'e hazırlık

Başta temelden başlayalim seviyeyi artirarark devam ederiz. inheritance class'ta base class in içeriğine method ve özelliklerine 

ulaşabiliriz bunda bir sıkıntı yok. Public olanlara rahatlikla ulaşabiliriz ister mainde ister sinif çinde fark etmez. protected olanlara

inheritance sinif ulaşabilir ama sinif içerisindeyken. Yani sinif içerisinde onlari kullanbilir ancak fonksiyonla ulaşabilir. 

çünkü fonsiyon inheritance sinifin içerisinde tanimmli olduğu için bir nevi işlem sinif içerisinde yapilmiş gibi olur. private olursa da 

birtek sinifin kendi ulaşabilir başka kimse ulamaz. mainden ulaşmanin yoluda sinifin kendi methodunu kullanmaktir. 

ayni isimli method yada özellik olmasi durumunda herkes once kendi scobundakine oncelik veriri. inheritance sınıf olurda kendi değil 

base class ın aynı isimlı method yada ozelliğne ulaşmak isterse :: işaretini kullanır.

--- buraya kadar virtual kullanmaya gerek yok. :: bunu kullanmayı bilsek yeter. [örnek](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/polimorphism.cpp)---

## Polimorphism Nedir

çok şekilliliktir bitti. hadi dağılalım :))

overloading, overring, virtual func.s birer polimorphism orengidir.

polimorphism'i iki kısıma ayırabiliriz

compile time polimorphizm

> overloaded functions

> overloded operators

run time polimorphizm

> overrinding functions

> virtual functions

zaten overloded ve overridingle alakalı bir sürü örnek çözdük. bunları anldık. burada virtual üzerinde duracağız.

## virtual funtion: 

iki tane sınıfımız var Base ve derivade şimdi bu sunuflarda aynı isimli metodlar var. Şu anda bir sorun yok değilmi herkes kendi

methoduna ulaşır. üst sınıfın methoduna ulaşmak içinde :: operatorunu kullanırız👍🏻. Ancak downcasting yaptığın zaman pointer

bellekte kapladığı yer belli olduğu için alt sınıfın özelliklerine ulaşamıyordu ya. işite bu yüzden aynı isimli methodlarda base sınıftakine

ulaşabilir. Ancak iki fonsiyonunda bellekte kapladığı alan aynı biz diyoruz ki o zaamn bu base class'ın methoduna ulaşacağına aynı isimli 

derivate calss'ın methoduna ulaşsın iişte tam da bub için methodu virtual yapıyoruz [ornek](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/polimorphism_virtual.cpp)

virtual'ın bir özelliği daha var ona ulaşmak için [gidiniz](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/virtual_notu.md)

