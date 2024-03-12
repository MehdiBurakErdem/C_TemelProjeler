// ! 1.6 Hazırlık ---> Klavyeden girilen 10'un katları olan bir paranın en az bankot olacak şekilde girilen sayı ... ve içerir = bu kadar yüzlük , ellilik, yirmilik ve onluk diyecek kod.(negatiflik kontrol edilmeye değmez)
// Eger 10 katı değil ise tekrar isteyin

// ! 1.6 ---> Güncelle ve artık birlik ve 5 lik de alsın (yani her türlü sayı alır).
#include <stdio.h>
int main()
{
    int para, parad ,beslik, onluk, yirmilik, ellilik, yuzluk;
    printf("Lutfen paranizi giriniz: ");
    scanf("%d", &para);
    parad = para; // Oynayacağım tutar

    //parad = 287 
    yuzluk = parad/100;  //2
    parad %= 100;   // Olabilir

    //parad = 87
    ellilik = parad/50;  // 1
    parad -= ellilik*50; // Olabilir

    //parad = 37
    yirmilik = parad/20; //1
    parad %= 20;

    //parad = 17
    onluk = parad/10; // 1
    parad %= 10;

    //parad = 7
    beslik = parad/5; // 1
    parad %= 5;
        
    printf("%d TL PARANIZ TAM OLARAK = %d YUZLUK + %d ELLILIK + %d YIRMILIK + %d ONLUK + %d BESLIK + %d BIRLIK." , para , yuzluk, ellilik , yirmilik , onluk, beslik, parad);
    return 0;
}