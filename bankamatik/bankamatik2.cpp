    #include <stdio.h>	/*Standart giriþ çýkýþ fonk. bulunduðu kütüphanemz.*/
	#include <stdlib.h>	/*system("pause") komutunun bulunduðu kütüphanemiz. ;*/
	#include <conio.h>	/*getch(); komutunu içeren kütüphane.*/
	#include<string.h>
	int main()
	{
	system("color 17"); //Arka planýn rengini mavi yazý rengini beyaz yapar.
	char kullanici[5]="taha";	/*Burada sadece 1 karekter sorguladýk birden fazla sorgulanmak istenirse dizi tanýmlanarak yapýlabilir.*/
	int Parola,secim;	/*int tipindeki deðiþkenlerimiz.*/
	int DgrHesap,Yatrlan,Cekilen,Gondrln,HespDgri=2500; /*Tanýmladýðýmýz diðer deðiþkenler.*/
	char tercih;
	printf("\t\t --------------------------------------- \n");	//
	printf("\t\t *                Eg Bank               *\n");	// Karþýlama ekranýmýz.
	printf("\t\t --------------------------------------- \n\n");//
	printf("Lutfen kullanici adinizi ve parolanizi giriniz\n\n");	
	printf("Kullanici Adi : ");		/*Kullanýcý Sorgulama Ekranýmýz*/
	scanf("%c",&kullanici[5],5);			/*Kullanýcý adý 'KulAdi' deðiþkeninin adresine yazýlmýþtýr.*/
	printf("Parola : ");			/*Parola Sorgulama Ekranýmýz*/
	scanf("%d",&Parola);			/*Parola 'Parola' deðiþkeninin adresine yazýlmýþtýr.*/		
	
	if(kullanici[5] =='taha' && Parola==123)/*Kullanýcý adý ve Þifre sorgluma*/
		{
		do{             //do-while döngü baþlangýcý.
		system("cls");  //Ekraný temizleyen kodumuz.
		printf("\t\tHosgeldiniz\n");				
		printf(" ------------------------------------- \n");	//
		printf("| [1] Bakiye Sorgulama                |\n");	//
		printf("| [2] Para Yatirma                    |\n");	//	Menümüzün arayüzü
		printf("| [3] Para Cekme                      |\n");	// 
		printf("| [4] Farkli Bir Hesaba Para Gonderme |\n");	//
		printf("| [5] Cikis                           |\n");	//
		printf(" ------------------------------------- \n\n");	
		printf("Yapmak istediginiz islem icin (1,2,3,4,5) tuslarini kullanarak secim yapiniz :"); /**Kullanýcýdan seçim yapýlmasý istenmiþtir.*/
		scanf("%d",&secim); /*Yapýlan secim 'secim' deðiþkenini adresine yazýlmýþtýr.*/
		printf("\n");
		switch(secim)/*secim deðiskenini sorgulayarak istenilen menüye girmeyi saðlar.*/
		{
			case 1: // case 1: de bakiye gösterimi yapýlmýþtýr.
			printf("Hesabinizda = %d TL Bulunmaktadir.\n", HespDgri);	
			break;								

			case 2:	// case 2: de para yatýrma menüsü ve iþlemleri yapýlmýþtýr.
			printf("\t\t\t--PARA YATIRMA--\n\n");				
			printf("Lutfen yatiracaginiz para miktarini giriniz: ");	
			scanf("%d",&Yatrlan);						
			HespDgri=HespDgri+Yatrlan;					
			printf("Hesabiniza %d TL yatirildi.\n",Yatrlan);		
			printf("Toplam kullanilabilir bakiyeniz=%d Tl dir.\n",HespDgri);			
			break;
			
			case 3:	// case 3: de para çekme menüsü ve iþlemleri vardýr ve case yapsýnýn içinde 						
			printf("\t\t\t--PARA CEKME--\n\n");				 
			printf("Lutfen Cekeceginiz Para Miktarini Giriniz: ");	
			scanf("%d",&Cekilen);						
				if(Cekilen>HespDgri)/*if yapsýnda çekilen paranýn büyüklüðü kontrol edilmiþtir.*/
				{
				printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");			
				}
				else //else ye kullanýcýnýn bakiyesi yeterli ise girer ve iþlemler gerçekleþir. 
				{
				HespDgri=HespDgri-Cekilen;					
				printf("Hesabinizdan %d Tl cekilmistir.\n",Cekilen);		
				printf("Hesabinizda toplam kullanilabilir bakiye %d TL dir.\n",HespDgri);
				}
			break;
			case 4:	// case 4: de ise para gönderme ve iþlemleri yapýlmýþtýr.  
				printf("\t\t\t--PARA GONDERME--\n");				
				printf("Para gondereceginiz hesab numarasini giriniz:");	
				scanf("%d",&DgrHesap);						
				printf("Gondericeginiz para miktarini giriniz:");
				scanf("%d",&Gondrln);						
					if(Gondrln>HespDgri) /*Gönderilen paranýn hesabýmýzdaki para ile karþýlaþtýrýlmasý yapýlmýþtýr. */
					{
					printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");//Eðer bakiyemiz yeterli deðilse bu kullanýcýya belirtilmiþtir.					
					}
					else /*Bakiye yeterli ise bu yapýya girer ve iþlemler yapýlabilir.*/
					{
					printf("Hesabinizdan %d TL girmis oldugunuz hesaba gonderildi.\n",Gondrln);
					HespDgri=HespDgri-Gondrln;
					printf("Kalan Bakiyeniz %d Tl dir\n",HespDgri);
					}	
			break;
			case 5:	//Case 5: kullanýcý eðer iþlem yapmak istemiyorsa seçilen kýsýmdýr.																
				{					
				printf("Bizi tercih ettiginiz icin tesekkur ederiz.\n");	
				printf("Cikis isleminiz basariyla gerceklestirilmistir.\n");
				}														
				break;																	
		default: /*Case yapýsý sonlandýrýldý.*/
			printf("Seciminizi yanlis yaptiniz lutfen sonra tekrar deneyiniz:\n");//Girilen secim yanlýþ ise bu printf ile kullanýcýya bildirilmiþtir.
		}		
		printf("\n");							
		printf("Yeni bir isleme devam etmek istiyormusunuz?\n");	
		printf("(e) veya (h) "); // Yeni iþlem yapýlma sorgusu
		printf("\n");							
		tercih=_getch();							
			}
	while(tercih =='e');// while döngüsü tercih e olduðu sürece islemlerin sürekli tekrarlanmasýný saðlar.
		}
	else /*Bu else kýsýmýna kullanýcý adý ve parolanýn yanlýþ girilmesi sonucu girer.*/
		{
			printf("\n");
			printf("Kullanici Adi veya Parolanizi Yanlis Girdiniz.!!!\n\nLutfen Tekrar Kontrol Ediniz!\n\n");//Sorgu kýsmýnda yanlýþ parola veya kullanýcýadi girilmisse iþleme devam etmez.						
		}	
	printf("\n");
	system("pause");/*Programýn kapanmasý için bir tuþa basýlmasý beklenir.*/																			  
	
	}

