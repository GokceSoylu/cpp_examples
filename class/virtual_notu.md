# virtual

şimdi dostum burada virtual functiun'dan bahsetmeyeceğim. istediğin polimprphism/virtual funcs ise [gidiniz](polimorphism notu)

virtual'ı n bir başka kullanım şekli sınıfı virtual yapmaktır. multiinhertance sırasında yaşadığımız bir sorun var. iki tane 

türemiş sınıfı base alıp türeyen bir sınıf en temel sınıfa ulaşma sıkıntısı yaşıyor ve en temel sınıf iki kez oluşturulmuş olluyor 

bunu engellemek için sınıftan tğreme türünü belirlerken virtual yapıyoruz ornekle daha net olur. [Ornek](virtuall.cpp) 

bu ornekte ise aynı kodu virtual kullanmadan yazdık çıktıları karşılaştırırsak daha iyi oturur [ornek2](without_virtuall.cpp)