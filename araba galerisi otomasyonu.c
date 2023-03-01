#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<stddef.h>



typedef struct arabalar {
    int numara;
    char marka[20];
    char model[20];
    char renk[20];
    int ucret;
    int durum;

} araba;



void arabaekle()
{
    system("cls");
    printf("Araba Ekleme Ekranina Hosgeldiniz \n\n");
    araba a1;
    int numara;
    numara=0;

    FILE * numPtr = fopen("arabaNumaralari.dat", "a+b");
    while(fread(&numara, sizeof(int), 1, numPtr) != NULL )
    {
    }
    numara++;
    fwrite(&numara, sizeof(int), 1, numPtr);
    fclose(numPtr);
    a1.numara = numara;
    printf("Araba markasini giriniz: \n");
    scanf("%s",&a1.marka);
    printf("Araba modelini giriniz: \n");
    scanf("%s",&a1.model);
    printf("Araba rengini giriniz: \n");
    scanf("%s",&a1.renk);
    printf("Araba ucretini giriniz: \n");
    scanf("%d",&a1.ucret);
    a1.durum = 0;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla eklendi \n\n");
    
}


void arabalistele()
{
    system("cls");
    printf("Araba Ekleme Listeleme Hosgeldiniz \n\n");
    araba a1;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    while(fread(&a1, sizeof(araba), 1, ptr) != NULL )
    {
        printf("Araba numarasi: %d ", a1.numara);
        printf("Araba markasi: %s ", a1.marka);
        printf("Araba modeli: %s ", a1.model);
        printf("Araba rengi: %s ", a1.renk);
        printf("Araba ucreti: %d ", a1.ucret);
        printf("Araba durumu: %d ", a1.durum);
    }
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla eklendi \n\n");
    



}





void arabasil()
{
   
    system("cls");
    printf("Araba Silme Ekranina Hosgeldiniz \n\n");
    araba a1;
    int numara;
    numara=0;

    FILE * numPtr = fopen("arabaNumaralari.dat", "a+b");
    while(fread(&numara, sizeof(int), 1, numPtr) != NULL )
    {
    }
    numara++;
    fwrite(&numara, sizeof(int), 1, numPtr);
    fclose(numPtr);
    a1.numara = numara;
    printf("Araba markasini giriniz: ");
    scanf("%s",&a1.marka);
    printf("Araba modelini giriniz: ");
    scanf("%s",&a1.model);
    printf("Araba rengini giriniz: ");
    scanf("%s",&a1.renk);
    printf("Araba ucretini giriniz: ");
    scanf("%d",&a1.ucret);
    a1.durum = 0;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla silindi \n\n");
    

}

void arabaguncelle()
{
    system("cls");
    printf("Araba Guncelleme Ekranina Hosgeldiniz \n\n");
    araba a1;
    int numara;
    numara=0;

    FILE * numPtr = fopen("arabaNumaralari.dat", "a+b");
    while(fread(&numara, sizeof(int), 1, numPtr) != NULL )
    {
    }
    numara++;
    fwrite(&numara, sizeof(int), 1, numPtr);
    fclose(numPtr);
    a1.numara = numara;
    printf("Araba markasini giriniz: ");
    scanf("%s",&a1.marka);
    printf("Araba modelini giriniz: ");
    scanf("%s",&a1.model);
    printf("Araba rengini giriniz: ");
    scanf("%s",&a1.renk);
    printf("Araba ucretini giriniz: ");
    scanf("%d",&a1.ucret);
    a1.durum = 0;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla guncellendi \n\n");
    

}


void arabaara()
{
    system("cls");
    printf("Araba Arama Ekranina Hosgeldiniz \n\n");
    araba a1;
    int numara;
    numara=0;

    FILE * numPtr = fopen("arabaNumaralari.dat", "a+b");
    while(fread(&numara, sizeof(int), 1, numPtr) != NULL )
    {
    }
    numara++;
    fwrite(&numara, sizeof(int), 1, numPtr);
    fclose(numPtr);
    a1.numara = numara;
    printf("Araba markasini giriniz: ");
    scanf("%s",&a1.marka);
    printf("Araba modelini giriniz: ");
    scanf("%s",&a1.model);
    printf("Araba rengini giriniz: ");
    scanf("%s",&a1.renk);
    printf("Araba ucretini giriniz: ");
    scanf("%d",&a1.ucret);
    a1.durum = 0;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla arandi \n\n");
    

}

void arabasatis()
{
    system("cls");
    printf("Araba Satis Ekranina Hosgeldiniz \n\n");
    araba a1;
    int numara;
    numara=0;

    FILE * numPtr = fopen("arabaNumaralari.dat", "a+b");
    while(fread(&numara, sizeof(int), 1, numPtr) != NULL )
    {
    }
    numara++;
    fwrite(&numara, sizeof(int), 1, numPtr);
    fclose(numPtr);
    a1.numara = numara;
    printf("Araba markasini giriniz: ");
    scanf("%s",&a1.marka);
    printf("Araba modelini giriniz: ");
    scanf("%s",&a1.model);
    printf("Araba rengini giriniz: ");
    scanf("%s",&a1.renk);
    printf("Araba ucretini giriniz: ");
    scanf("%d",&a1.ucret);
    a1.durum = 0;

    FILE * ptr = fopen("arabalar.dat", "a+b");
    fwrite(&a1, sizeof(araba), 1, ptr);
    fclose(ptr);
    printf("Arac basariyla satildi \n\n");
    

}




int yetkilimenu ()
{
    int secim;

    printf("\n\nARABA GALERISI UYGULAMASI \n\n");

    printf("1-Araba Ekle \n");
    printf("2-Araba Sil \n");
    printf("3-Araba Guncelle \n");
    printf("4-Araba Listele \n");
    printf("5-Araba Ara \n");
    printf("6-Araba Satis \n");

    printf("0-cikis yap \n");

    printf("Seciminizi Giriniz: ");
    scanf("%d",&secim);
    return secim;
}



void yetkiliGiris()
{

int secim;
    secim = yetkilimenu();
    while(secim != 0)
    {
        switch (secim)
        {
            case 1:
            arabaekle();
            break;
            case 2:
            arabasil();
            break;
            case 3:
            arabaguncelle();
            break;
            case 4:
            arabalistele();
            break;
            case 5:
            arabaara();
            break;
            case 6:
            arabasatis();
            break;
            case 0:
            break;
            default:
            printf("hatali secim yaptiniz ! \n");
            break;
        }

        secim = yetkilimenu();

    }
    printf("cikis yapildi... \n");




}



void girisYap()
{
    system("cls");
    char kullaniciAdi[20];
    char sifre[20];
    printf("Giris Ekranina Hosgeldiniz \n");
    printf("Kullanici Adi: ");
    scanf("%s",&kullaniciAdi);
    printf("Sifre: ");
    scanf("%s",&sifre);
   
   if(strcmp(kullaniciAdi,"admin") == 0 && strcmp(sifre,"1234") == 0)
   {
       printf("Giris Basarili \n");
       yetkiliGiris();
   }
   else
   {
       printf("Giris Basarisiz \n");
   }
}

int menu ()
{
    int secim;

    printf("\n\nARABA GALERISI UYGULAMASI \n\n");
    printf("1-Giris Yap \n");
    printf("0-Programi Kapat \n");
    printf("Seciminizi Giriniz: ");
    scanf("%d",&secim);
    return secim;
}





int main ()
{

    int secim;
    secim = menu();
    while(secim != 0)
    {
        switch (secim)
        {
            case 1:
            girisYap();
            break;
            case 0:
            printf("program kapatiliyor... \n");
            break;
            default:
            printf("hatali secim yaptiniz ! \n");
        }
        secim = menu();

    }
    printf("program kapatiliyor... \n");




    return 0;
}