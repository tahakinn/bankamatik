    #include <stdio.h>	/*Standart giri� ��k�� fonk. bulundu�u k�t�phanemz.*/
	#include <stdlib.h>	/*system("pause") komutunun bulundu�u k�t�phanemiz. ;*/
	#include <conio.h>	/*getch(); komutunu i�eren k�t�phane.*/
	#include<string.h>
	int main()
	{
	system("color 17"); //Arka plan�n rengini mavi yaz� rengini beyaz yapar.
	char kullanici[5]="taha";	/*Burada sadece 1 karekter sorgulad�k birden fazla sorgulanmak istenirse dizi tan�mlanarak yap�labilir.*/
	int Parola,secim;	/*int tipindeki de�i�kenlerimiz.*/
	int DgrHesap,Yatrlan,Cekilen,Gondrln,HespDgri=2500; /*Tan�mlad���m�z di�er de�i�kenler.*/
	char tercih;
	printf("\t\t --------------------------------------- \n");	//
	printf("\t\t *                Eg Bank               *\n");	// Kar��lama ekran�m�z.
	printf("\t\t --------------------------------------- \n\n");//
	printf("Lutfen kullanici adinizi ve parolanizi giriniz\n\n");	
	printf("Kullanici Adi : ");		/*Kullan�c� Sorgulama Ekran�m�z*/
	scanf("%c",&kullanici[5],5);			/*Kullan�c� ad� 'KulAdi' de�i�keninin adresine yaz�lm��t�r.*/
	printf("Parola : ");			/*Parola Sorgulama Ekran�m�z*/
	scanf("%d",&Parola);			/*Parola 'Parola' de�i�keninin adresine yaz�lm��t�r.*/		
	
	if(kullanici[5] =='taha' && Parola==123)/*Kullan�c� ad� ve �ifre sorgluma*/
		{
		do{             //do-while d�ng� ba�lang�c�.
		system("cls");  //Ekran� temizleyen kodumuz.
		printf("\t\tHosgeldiniz\n");				
		printf(" ------------------------------------- \n");	//
		printf("| [1] Bakiye Sorgulama                |\n");	//
		printf("| [2] Para Yatirma                    |\n");	//	Men�m�z�n aray�z�
		printf("| [3] Para Cekme                      |\n");	// 
		printf("| [4] Farkli Bir Hesaba Para Gonderme |\n");	//
		printf("| [5] Cikis                           |\n");	//
		printf(" ------------------------------------- \n\n");	
		printf("Yapmak istediginiz islem icin (1,2,3,4,5) tuslarini kullanarak secim yapiniz :"); /**Kullan�c�dan se�im yap�lmas� istenmi�tir.*/
		scanf("%d",&secim); /*Yap�lan secim 'secim' de�i�kenini adresine yaz�lm��t�r.*/
		printf("\n");
		switch(secim)/*secim de�iskenini sorgulayarak istenilen men�ye girmeyi sa�lar.*/
		{
			case 1: // case 1: de bakiye g�sterimi yap�lm��t�r.
			printf("Hesabinizda = %d TL Bulunmaktadir.\n", HespDgri);	
			break;								

			case 2:	// case 2: de para yat�rma men�s� ve i�lemleri yap�lm��t�r.
			printf("\t\t\t--PARA YATIRMA--\n\n");				
			printf("Lutfen yatiracaginiz para miktarini giriniz: ");	
			scanf("%d",&Yatrlan);						
			HespDgri=HespDgri+Yatrlan;					
			printf("Hesabiniza %d TL yatirildi.\n",Yatrlan);		
			printf("Toplam kullanilabilir bakiyeniz=%d Tl dir.\n",HespDgri);			
			break;
			
			case 3:	// case 3: de para �ekme men�s� ve i�lemleri vard�r ve case yaps�n�n i�inde 						
			printf("\t\t\t--PARA CEKME--\n\n");				 
			printf("Lutfen Cekeceginiz Para Miktarini Giriniz: ");	
			scanf("%d",&Cekilen);						
				if(Cekilen>HespDgri)/*if yaps�nda �ekilen paran�n b�y�kl��� kontrol edilmi�tir.*/
				{
				printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");			
				}
				else //else ye kullan�c�n�n bakiyesi yeterli ise girer ve i�lemler ger�ekle�ir. 
				{
				HespDgri=HespDgri-Cekilen;					
				printf("Hesabinizdan %d Tl cekilmistir.\n",Cekilen);		
				printf("Hesabinizda toplam kullanilabilir bakiye %d TL dir.\n",HespDgri);
				}
			break;
			case 4:	// case 4: de ise para g�nderme ve i�lemleri yap�lm��t�r.  
				printf("\t\t\t--PARA GONDERME--\n");				
				printf("Para gondereceginiz hesab numarasini giriniz:");	
				scanf("%d",&DgrHesap);						
				printf("Gondericeginiz para miktarini giriniz:");
				scanf("%d",&Gondrln);						
					if(Gondrln>HespDgri) /*G�nderilen paran�n hesab�m�zdaki para ile kar��la�t�r�lmas� yap�lm��t�r. */
					{
					printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");//E�er bakiyemiz yeterli de�ilse bu kullan�c�ya belirtilmi�tir.					
					}
					else /*Bakiye yeterli ise bu yap�ya girer ve i�lemler yap�labilir.*/
					{
					printf("Hesabinizdan %d TL girmis oldugunuz hesaba gonderildi.\n",Gondrln);
					HespDgri=HespDgri-Gondrln;
					printf("Kalan Bakiyeniz %d Tl dir\n",HespDgri);
					}	
			break;
			case 5:	//Case 5: kullan�c� e�er i�lem yapmak istemiyorsa se�ilen k�s�md�r.																
				{					
				printf("Bizi tercih ettiginiz icin tesekkur ederiz.\n");	
				printf("Cikis isleminiz basariyla gerceklestirilmistir.\n");
				}														
				break;																	
		default: /*Case yap�s� sonland�r�ld�.*/
			printf("Seciminizi yanlis yaptiniz lutfen sonra tekrar deneyiniz:\n");//Girilen secim yanl�� ise bu printf ile kullan�c�ya bildirilmi�tir.
		}		
		printf("\n");							
		printf("Yeni bir isleme devam etmek istiyormusunuz?\n");	
		printf("(e) veya (h) "); // Yeni i�lem yap�lma sorgusu
		printf("\n");							
		tercih=_getch();							
			}
	while(tercih =='e');// while d�ng�s� tercih e oldu�u s�rece islemlerin s�rekli tekrarlanmas�n� sa�lar.
		}
	else /*Bu else k�s�m�na kullan�c� ad� ve parolan�n yanl�� girilmesi sonucu girer.*/
		{
			printf("\n");
			printf("Kullanici Adi veya Parolanizi Yanlis Girdiniz.!!!\n\nLutfen Tekrar Kontrol Ediniz!\n\n");//Sorgu k�sm�nda yanl�� parola veya kullan�c�adi girilmisse i�leme devam etmez.						
		}	
	printf("\n");
	system("pause");/*Program�n kapanmas� i�in bir tu�a bas�lmas� beklenir.*/																			  
	
	}

