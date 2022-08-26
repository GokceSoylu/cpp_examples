# Abstract class

### mini özet
Baştan başlıyorum taban sınıf oluşturduk. türemiş sınıf oluturduk. içlerinde aynı ismli method olunca herkes kendi scob'undakine ulaşıyordu. downcasting yapınca (türemiş sınıfı base sınıf türünden pointera atamak) kendi methoduna değil base class'taki methoda ulaşıyordu. bunu engellemek içinde base sınıftaki methodu virtual yapmıştık (virtual function).


>Şimdi ise bu aynı isimli sanal sınıfları soyutlaştırıcaz. Overriding function'ları base class'da tanımlarken **virtual return_tip Function ()=0;** yapıcaz bu sekilde = 0; dediğimizde fonksiyonu soyutlamış oluyoruz(abstract) bu sekilde içerisinde abstruct function bulunan sınıfta artık nesne oluşturamayız. Ancak bu sınıftan türeyen sınıflardan nesne oluşturulabilir. base sınıfta abstruct function var diye artık normla gövdesi bulunan fonk yazamayız diye bir şey yokmyazabiliriz. Sadece artık sınıf nesne üretme özelliğini kaybetti o kadar :)) 

**peki bu durum bizim ne işimize yarıyor?**  zaten downcasting+virtual yaptığımızda herkes kendi fonksiyonuna ulaşıyordu. Abstract'ın bize sağladığı en önemli şey. Base class'ta fonksiyonun içeriğini belirmek zorun da olmamamız. Türemiş sınıfların her birinde fonsiyonlar farkı içeriğe sahip olduğunu düşünelim. Mesala hayvan base sınıfından sınıflar türettiğimiz kabul edelim. tüm hayvanlar ses çıkaracak ancak ancak her biri farklı ses çıkaracak ses() fonksiyonu ortak ancak içerik farklı. 
> akıllarda şöle bir soru oluşabilir "zaten gövde her class'ın içerisinde varsa ne diye pure fonk oluturuyoruz base class'a?". Biliğimiz  gibi downcasting yaptığımızda türemiş sınnıf kendine has methodları, özellikleri kaybeder. Virtual ile sadece overriding olanlara ulaşabilir hale gelir. Şu anda netleşti değil mi? pointer sadece basse class'taki içerik kadar içerige ulaşır. bizde sınıflarda bulunancak fonk'un bir nevi prototipini base class'ta oluşturuyoruz. :))   
[ornek1](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/abstract.cpp)      [ornek2](https://github.com/NecmiyeSoylu/cpp_examples/blob/master/oop/abstract2.cpp)
