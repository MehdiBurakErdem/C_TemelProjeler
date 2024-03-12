// ! 2.2 ---> Main fonksiyondan alınan alınan bir karakter dizisinin(sadece 1 kelime) tersten yazdıran bir fonksiyon oluşturunuz 

#include <string.h>

void TersDizi(char a[])
{
  //Tabiki bu sorumuz için amaç fonksiyona bir dizi nasıl atılır onu denemek , yani yeni bir dizi oluşturmamıza gerek yoktu sondan başlayarak gelen dizinin elemanlarını yazdırabilirdik ancak bir diziye başka bir diziye atama işlemini de göstermek istedim
  char tersisim[30];
  int boyut = strlen(a);
  int i = 0;
  printf("%d\n" ,boyut);

  tersisim[boyut] = '\0';
  for (i = 0; boyut > 0 ; i++)
    tersisim[i] = a[--boyut];

  printf("Tersten yazimi %s" , tersisim); // ana fonksiyonda yazdırabilirmiydim?                                                                                                                                                                                                         Hayır çünkü globalde tanımlı değil bu sadece fonksiyonun içinde tanımlı olan bir dizi
}

int main(){
  char isim[30];
  printf("1 Kelime giriniz: ");
  scanf("%s" , isim);
  TersDizi(isim);

  return 0;
}