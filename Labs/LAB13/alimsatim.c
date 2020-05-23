#include <stdio.h>

int alinanUrunEkle(int alimUrunKod[], int alimUrunMiktar[], int alimUrunFiyati[], int alimAy[], int alimSayisi);
int satilanUrunEkle(int satimUrunKod[], int satimUrunMiktar[], int satimUrunFiyat[], int satimAy[], int satimSayi);
void tumSatisListele(int satimUrunKod[], int satimUrunMiktar[], int satimUrunFiyat[], int satimAy[], int satimSayi);
int urunSatisBul(int urunKod, int satimUrunKod[], int satimUrunMiktar[], int satimSayi);
int ayToplamGiderBul(int ay, int alimAy[], int alimUrunMiktar[], int alimUrunFiyati[], int alimSayisi);
int urunKarBul(int alimUrunKod[], int alimUrunMiktar[], int alimUrunFiyati[], int satimUrunKod[], int satimUrunMiktar[], 
			   int satimUrunFiyat[], int urunKod, int alimSayisi, int satimSayi);
int urunStokBul(int alimUrunKod[], int alimUrunMiktar[], int satimUrunKod[], int satimUrunMiktar, int alimSayisi, int satimSayi);
int menu();

int main()
{
	int urunKod;
	int secenek=0;
	int alimSayisi=5;
	int alimUrunKod[100]={1,2,1,1,3};
	int alimUrunMiktar[100]={20,50,30,20,40};
	int alimUrunFiyati[100]={75,30,60,150,100};
	int alimAy[100]={1,1,2,2,3};
	int ay;
	int result;

	int satimSayi=4;
	int satimUrunKod[100]={1,2,1,2};
	int satimUrunMiktar[100]={8,15,5,35};
	int satimUrunFiyat[100]={90,60,200,60};
	int satimAy[100]={2,2,2,3};

	while(secenek != -1){
		secenek = menu();
		switch(secenek){
			case 1:
				alimSayisi = alinanUrunEkle(alimUrunKod, alimUrunMiktar, alimUrunFiyati, alimAy, alimSayisi);
				break;
			case 2:
				satimSayi = satilanUrunEkle(satimUrunKod, satimUrunMiktar, satimUrunFiyat, satimAy, satimSayi);
				break;
			case 3:
				tumSatisListele(satimUrunKod, satimUrunMiktar, satimUrunFiyat, satimAy, satimSayi);
				break;
			case 4:
				printf("Urun kodu girin:\n");
				scanf("%d", &urunKod);
				satimSayi = urunSatisBul(urunKod, satimUrunKod, satimUrunMiktar, satimSayi);
				break;
				case 5:
				result = ayToplamGiderBul(ay,alim, alimAy, alimUrunFiyati, alimurunfiyati
                , alimsayi);
                printf("result\n",&ay);
			     break;
			default:
				printf("Islem gecersiz!\n");

		}
	}

	return (0);
}

int alinanUrunEkle(int alimUrunKod[], int alimUrunMiktar[], int alimUrunFiyati[], int alimAy[], int alimSayisi)
{
	printf("Urun kodunu giriniz:");
	scanf("%d", &alimUrunKod[alimSayisi]);
	printf("Alim miktarini giriniz: ");
	scanf("%d", &alimUrunMiktar[alimSayisi]);
	printf("Birim fiyatini girin: \n");
	scanf("%d", &alimUrunFiyati[alimSayisi]);
	printf("Urun aliminin yapildigi ayi giriniz: \n");
	scanf("%d", &alimAy[alimSayisi]);

	return (alimSayisi++);
}

int satilanUrunEkle(int satimUrunKod[], int satimUrunMiktar[], int satimUrunFiyat[], int satimAy[], int satimSayi)
{
	printf("satilanUrunEkle fonksiyonu yapim asamasinda\n");
	printf("Urun kodunu giriniz:");
	scanf("%d", &satimUrunKod[satimSayi]);
	printf("Satim miktarini giriniz: ");
	scanf("%d", &satimUrunMiktar[satimSayi]);
	printf("Birim fiyatini girin: \n");
	scanf("%d", &satimUrunFiyat[satimSayi]);
	printf("Urun aliminin yapildigi ayi giriniz: \n");
	scanf("%d", &satimAy[satimSayi]);

	return (satimSayi++);
}

int urunSatisBul(int urunKod, int satimUrunKod[], int satimUrunMiktar[], int satimSayi)
{
	int toplamSatis=0;
	for (int i = 0; i < satimSayi; ++i)
	{
		if(satimUrunKod[i] == urunKod){
			toplamSatis += satimUrunMiktar[i];
		}
	}
	return (toplamSatis);
}

void tumSatisListele(int satimUrunKod[], int satimUrunMiktar[], int satimUrunFiyat[], int satimAy[], int satimSayi)
{
	printf("tumSatisListele fonksiyonu yapim asamasinda\n");
	printf("Satim\n");
	printf("Urunkod 	miktar 		fiyat 		ay\n");
	for (int i = 0; i < satimSayi; ++i)
		{
			printf("%d		%d		%d		%d\n", satimUrunKod[i], satimUrunMiktar[i], satimUrunFiyat[i], satimAy[i]);
		}	
}

int menu()
{
	int secenek;
	printf("*****************************\n");
	printf("***	NE YAPMAK ISTERSINIZ? ***\n");
	printf("1. Urun alim ekleme\n");
	printf("2. Urun satim ekleme\n");
	printf("3. Tum satislari listeleme\n");
	printf("4. Bir urunun satis miktarini bulma\n");
	printf("5. Bir ayin toplam giderini bulma\n");
	printf("6. Bir urunun toplam karini bulma\n");
	printf("7. Bir urunun stok miktarini bulma\n");

	scanf("%d", &secenek);

	return (secenek);
	int ayToplamGiderBul(int ay,int alim[],int alimAy[],int alimUrunFiyati[],int int alimurunfiyati
    [],int alimsayi);
    printf("month\n");
    scanf("%d",ay);
    int aytoplamGider = 0;
	for (int i = 0; i <=ay; ++i)
	{
		if (ay==alimay[i])
		{	toplamGider+=alimUrunFiyati[i]

		}
		return(toplamGider);
	}
}
