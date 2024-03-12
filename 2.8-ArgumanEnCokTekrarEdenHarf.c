// ! 2.7 ---> Argüman olarak girilen değerlerde; en çok harfi(sadece küçük harf) tekrar eden harfi bulan bir fonksiyon yazıp aa fonksiyonda her argüman için en çok tekrar edene yazarsın (Örnek : .\a.exe mehdie burakukak => 1. argümanda en çok tekrar eden harf e \n 2. argümanda en çok tekrar eden harf k) Kolay gelsin 
#include <stdio.h>

char ft_countword(char *p)
{
    int i;
    char harf;
    int encok;

    i = 0;
    int harfler[26] = {0};
    while (p[i])
    {
        //p[i] elemanı bir char ve bunu ascii olarak karşılığını tutuyor  bilgisayar ben o asci karsılığında a çıktım ki harfler[0] indeksini sanki a nın sayacıymış gibi kullanmak için;
        // p[2] elemanı 'c' diyelim ascii karşılığı 63 ben p[2] - 'a' dediğimde 63 - 61 yapar ve harfler[2] bir artırır yani bu index(harfler[3]) numarası c harfini sayar  
        harfler[p[i] - 'a']++;
        i++;
    }
    i = 0;
    encok = harfler[i];
    harf = i + 'a';

    while (++i <= 26)
    {
        if (harfler[i] > encok)
        {
            encok = harfler[i];
            harf = i + 'a';
        }
    }
    return(harf);
}


int main(int argc, char *argv[])
{
    char a;
    int j = 2;

    //Çalıştırılabilir dosya içince başka bir argüman varsa girer yoksa argüman girilmedi der.
    if (argc != 1)
    {
        while (j <= argc)
        {
            a = ft_countword(argv[j - 1]);
            printf("%d. Argumanda en cok kullanilan harf: %c\n", j - 1, a); // çalışırılabilir dosya argüman olarak sayılmadı.
            j++;
        }
    }
    else
        printf("!!! Arguman girilmedi !!! ");
    
    return 0;
}