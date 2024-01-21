#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

using namespace std;

struct Sefer {
	int sayac=0;
	string ad_soyad;
	string tel_no;
	string tarih;
	string koltuk_no;
	int fiyat;

};

void SeferBilgileri(Sefer sfr);
int main(){
	setlocale(LC_ALL, "Turkish");
		int islem;
			char Dongukontrolu;
   Sefer sfr;
    cout << "--------------------------------Aþaþðýdaki Seferlerden Herhangi Birini Seçiniz--------------------------------\n" 
	     << "| 1. Isparta'dan Afyon'a\t\n"
	     << "| 2. Isparta'dan Kütahya'ya\t\n"
	     << "| 3. Isararta'dan Eskiþehir'e\t\n"
	     << "| 4. Isparta'dan Bursaya\t\n"
	     << "| 5. Afyon'dan Kütahya'ya\t\n"
	     << "| 6. Afyon'dan Eskiþehir'e\t\n"
	     << "| 7. Afyon'dan Bursa'ya\t\n"
	     << "| 8. Kütahya'dan Eskiþehir'e\t\n"
	     << "| 9. Kütahya'dan Bursa'ya\t\n"
	     << "| 10.Eskiþehir'den Bursaya\t\n"
		 << "--------------------------------------------Sýra Bilgilerinizde------------------------------------------------------\n";
	
do {
	cout << "\n\t\t\t\tYapmak Ýstediðiniz Seferin Numarasýný Yazýnýz\n";
	cin>>islem;
	srand(time(0));
	
	while(cin.get()!='\n');
	
			cout << "Adýnýzý ve Soyadýnýzý Giriniz: " ;
		getline(cin,sfr.ad_soyad);
		cout << "Telefon Numaranýzý Giriniz: " ;
		getline(cin,sfr.tel_no);
		cout << "Bilet Tarihini Giriniz: " ;
		getline(cin,sfr.tarih);
		cout << "Koltuk Numarasýný Giriniz: " ;
		getline(cin,sfr.koltuk_no);
	
	switch(islem)
	{
case 1:

    	sfr.fiyat = 120;
	break;
	
case 2:

    sfr.fiyat =200;
    break;
    
case 3:

	sfr.fiyat =300;
	break;
	
case 4:

	sfr.fiyat =450;
	break;
	
case 5:

	sfr.fiyat =80;
	break;
	
case 6:

    sfr.fiyat =180;
	break;	
	
case 7:

	sfr.fiyat =330;
	break;
	
case 8:

	sfr.fiyat =100;
	break;
	
case 9:

	sfr.fiyat =250;
	break;
	
case 10:

	sfr.fiyat =150;
	break;
}
SeferBilgileri(sfr);
	Dongukontrolu='X';
	while(Dongukontrolu!='e' && Dongukontrolu!='E' && Dongukontrolu!='h' && Dongukontrolu!='H')
	{
		cout<<"Baþka iþlem yapmak istiyorsanýz e(evet), istemiyorsanýz h(hayýr) tuþuna basýn: \n";
		cin>>Dongukontrolu;
	}


}while(Dongukontrolu=='e' || Dongukontrolu=='E');

cout << "Ýþleminiz baþarýyla gerçekleþmiþdir  ------------------ Ýyi Yolculluklar Dileriz----- " << endl;
	
	system("Pause");
	return 0;
}

void SeferBilgileri(Sefer sfr)
{
	cout << "--------------------------Sefer Bilgileriniz------------------------\n";
	cout << "Ad Soyad: " << sfr.ad_soyad << endl;
	cout << "Telefon: " << sfr.tel_no << endl;
	cout << "Tarih: " << sfr.tarih << endl;
	cout << "Koltuk Numarasý: " << sfr.koltuk_no << endl;
	cout << "Fiyat: " << sfr.fiyat << endl;
	cout << "------------------------------------\n";
}


