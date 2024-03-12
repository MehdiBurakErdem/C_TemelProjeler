// ! 1.1 ---> Haftanın angi günü olduğunu sorup, verilen sayının hangi güne denk geldiğini bulup yazdıran program (!! Amelelik olabilir ama el alışkanlığı olsun Kaç sorgu işlemi var kendinize sorun)                              7 kere sorgu olur biliyorsun else bir sorgu işlemi değildir
// (Tabiki farklı şekillerde yapabilirsiniz belki diziler kullanarak :) NaSiL İsTeRsEn
#include <stdio.h>

int main(){

    int sayi;
    printf("Haftanin kacinci gunundesiniz: ");
    scanf("%d" , &sayi);

    if (sayi == 1)
    {
        printf("Gunlerden Pazartesi !!\nIyi Gunler");
    }

    else if (sayi == 2)
    {
        printf("Gunlerden Sali !!\nIyi Gunler");
    }

    else if (sayi == 3)
    {
        printf("Gunlerden Carsamba !!\nIyi Gunler");
    }

    else if (sayi == 4)
    {
        printf("Gunlerden Persembe !!\nIyi Gunler");
    }

    else if (sayi == 5)
    {
        printf("Gunlerden Cuma !!\nIyi Gunler");
    }   

    else if (sayi == 6)
    {
        printf("Gunlerden Cumartesi !!\nIyi Gunler");
    }   

    else if (sayi == 7)
    {
        printf("Gunlerden Pazar !!\nIyi Gunler");
    }

    else{
        printf("Hafta 7 gundur biliyorsun deilmi? \n");
        main(); // Atıs serbest :) Neden burada main() cağırdım bunu do while ile yapsam neler farkederdi? Program da farklar olurmuydu? --->   ---->   ---->                      EVET ise sorun yok(Recursive fonksiyonlar birikir üst üste öğrenmeden geçme)
    }
    return 0;
}