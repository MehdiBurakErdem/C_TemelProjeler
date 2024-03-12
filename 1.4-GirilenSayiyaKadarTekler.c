// ! 1.4 ---> Girilen bir sayiya kadar ki tüm tek sayıları tek satırda _aralarında_ virgül ile ayırarak yazdıran program 
#include <stdio.h>

int main()
{
    int sayi , i;
    printf("Hangi sayiya kadar ki tek sayilari yazdirmak istersiniz: ");
    scanf("%d", &sayi);

    // Amacım continue göstermek, continue amaci birsey yapmadan döngünün başına dön demek.
    for (i = 1; i <= sayi; i++)
    {
        if (i % 2 == 0) // tabiki (i % 2 != 0) sorgusunun altında yazdırabilirdik veya if else işte cokk var amaaan
        {
            continue;
        }
        else if (i == sayi || i == sayi - 1)
            printf("%d" , i);         
        else
            printf("%d, " , i);
    }
    return 0;
}