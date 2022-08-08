#include <stdio.h>
#include <string.h>
void header()
{
	printf("=====================================\n\n");
}

void rate()
{

	char rate; 
	printf("=====================================\n\n");
	puts("Berikan Penilaian Anda : ");
	puts(" A. Puas");
	puts(" B. Bisa Lebih Baik Lagi"); 
	puts("");
	printf("Pilihan Anda : ");
	scanf("%c", &rate);
	
	(rate == 'A') ? puts("Senang mengetahuinya") : puts("Kami akan mencoba lebih baik lagi");
}


int cariTerkecil()
{
	int n;
	scanf("%d", &n);
	int numbers[n];
	scanf("%d", &numbers[0]);
	int smallestNumber = numbers[0]; 
	int smallestIndex = 0;
	
	for (int i = 1; i < n; i++)
		{
			int currentNumber;
			scanf("%d, &currentNumber");
			
			if (currentNumber < smallestNumber) 
			{ 
			smallestNumber = currentNumber; 
			smallestIndex = i;
			}
	}
	printf("%d\n", smallestIndex); 
	
	return 0;
}


int main (){
	
	int MainMenu;
	puts("SELAMAT DATANG");
	puts("di Final Project Algorithm Bootcamp");
	header(); 
	puts("Silahkan pilih menu :");
	puts("	1. Menghitung Keliling+Luas Bangun Datar & Volume+Luas Permukaan Bangun Ruang");
	puts("	2. Mencari Luas Terkecil dari 3 Bangun Datar"); 
	printf("Masukkan Pilihan Yang Anda Inginkan : ");
	scanf("%d", &MainMenu); 
		
	
	if (MainMenu==1)	
	{
		int Bangun;
		char ulang;
		int persegi,persegipanjang,segitiga,layang,lingkaran,trapesium,jajargenjang,belahketupat;
		float keliling,luas,volume,luaspermukaan,phi,alas,tinggi,diagonal1,diagonal2,s,p,l,r,smiring,satas,sbawah,a,b,luasalas,tinggiprisma,kelilingalas;
		do {
			header();
			printf("Membuat Rumus Bangun Datar dan Bangun Ruang\n ");
			printf("1.Bangun Datar\n");
			printf("2.Bangun Ruang\n");
			printf("Masukkan Pilihan Yang Anda Inginkan : ");
			scanf("%d" , &Bangun );
			printf("\n");
			switch (Bangun) {
				
				case 1:
					int BangunDatar;
					header();
					printf("Anda Memilih Bangun Datar\n");
					printf("1. Persegi\n");
					printf("2. Persegi Panjang\n");
					printf("3. Segitiga\n");
					printf("4. Layang Layang\n");
					printf("5. Lingkaran\n");
					printf("6. Trapesium\n");
					printf("7. Jajar Genjang\n");
					printf("8. Belah Ketupat\n");
					printf("Masukkan Pilihan Bangun Datar (angka) : ");
					scanf("%d" , &BangunDatar );
					printf("\n");
					switch(BangunDatar) 
					{
						
						case 1:
							int s;
							printf("1. Persegi\n");
							printf("Masukkan Nilai Sisi (s) : \n");
							scanf("%d", &s);
							keliling = 4*s;
							luas = s*s;
							printf("keliling : %.2f\n", keliling);
							printf("luas : %.2f\n", luas);
							
							
						break;
						case 2:
							int p,l;
							printf("2. Persegi Panjang\n");
							printf("Masukkan Nilai Panjang (p) : \n");
							scanf("%d", &p);
							printf ("Masukan Nilai Lebar (l) : \n");
							scanf("%d", &l);
							keliling = 2*(p+l);
							luas = p*l;
							printf("keliling : %.2f\n", keliling);
							printf("luas : %.2f\n", luas);
							
								
						break;
						case 3:
							int alas, tinggi, s1, s2, s3;
							printf("3. Segitiga\n");
							printf("Masukkan Nilai alas :\n");
							scanf("%d", &alas);
							printf("Masukkan Nilai tinggi : \n");
							scanf("%d", &tinggi);
							printf("Masukkan Nilai sisi-sisi : \n");
							printf("Contoh : 3 5 6 -> S1=3, S2=5, S3=6\n");
							scanf("%d %d %d", &s1, &s2, &s3);
							keliling = s1+s2+s3;
							luas = 0.5*alas*tinggi;
							printf("keliling : %.2f\n", keliling);
							printf("luas : %.2f\n", luas);
									
						break;
						case 4:
							int diagonal1, diagonal2;
							printf("4. Layang Layang\n");
							printf("Masukkan Nilai diagonal1 :\n");
							scanf("%d", &diagonal1);
							printf("Masukkan Nilai diagonal2 :\n");
							scanf("%d", &diagonal2);
							keliling = 2*(diagonal1 + diagonal2);
							luas=0.5*diagonal1*diagonal2;
							printf("keliling : %2.f\n", keliling);
							printf("luas : %2.f\n", luas);
										
						break;
						case 5:
							int r, phi;
							printf("5. Lingkaran\n");
							printf("Masukkan Nilai Jari Jari (r): \n");
							scanf("%d", &r);
							printf("Masukkan Nilai Phi (phi): \n");
							scanf("%d", &phi);
							phi = 3.14;
							keliling = 2*phi*r;
							luas = 2*r*r;
							printf("keliling : &2.f\n", keliling);
							printf("luas : %2.f\n", luas);
											
						break;
						case 6:
							int satas, sbawah, smiring;
							printf("6. Trapesium\n");
							printf("Masukkan satas : \n");
							scanf("%d", &satas);
							printf("Masukkan sbawah : \n");
							scanf("%d", &sbawah);
							printf("Masukkan smiring : \n");
							scanf("%d", &smiring);
							printf("Masukkan tinggi : \n");
							scanf("%d", &tinggi);
							keliling = 0.5*(satas+sbawah)*tinggi;
							luas = satas+sbawah+smiring+tinggi;
							printf("keliling : %2.f\n", keliling);
							printf("luas : %2.f\n", luas);
												
						break;
						case 7:
							printf("7. Jajar Genjang\n");
						    printf("Masukkan Nilai alas :\n");
							scanf("%d", &alas);
							printf("Masukkan Nilai tinggi : \n");
							scanf("%d", &tinggi);
							printf("Masukkan smiring : \n");
							scanf("%d", &smiring);
							keliling = 2*(alas+smiring);
							luas = alas*tinggi;
							printf("keliling : %2.f\n", keliling);
							printf("luas : %2.f\n", luas);
													
						break;
						case 8:
							printf("8. Belah Ketupat\n");
						    printf("Masukkan Nilai Sisi (s) : \n");
							scanf("%d", &s);
						    printf("Masukkan Nilai diagonal1 :\n");
							scanf("%d", &diagonal1);
							printf("Masukkan Nilai diagonal2 :\n");
							scanf("%d", &diagonal2);
							keliling = 4*s;
							luas = 0.5*diagonal1*diagonal2;
							printf("keliling : %2.f\n", keliling);
							printf("luas : %2.f\n", luas);
							break;
														
							default :
							printf("Pilihan Anda Salah, Masukkan Nilai 1-8\n");
							break; 
													
														
														
				}
					
			case 2:
				int BangunRuang;
					header();
					printf("Anda Memilih Bangun Ruang\n");
					printf("1. Kubus\n");
					printf("2. Balok\n");
					printf("3. Tabung\n");
					printf("4. Bola\n");
					printf("5. Kerucut\n");
					printf("6. Limas Persegi\n");
					printf("7. Prisma Segitiga\n");
					printf("Masukkan Pilihan Bangun Ruang (angka) : ");
					scanf("%d" , &BangunRuang );
					printf("\n");
					switch(BangunRuang)
					{
						case 1:
							int s;
							printf("1. Kubus\n");
							printf("Masukkan Nilai Sisi (s) : \n");
							scanf("%d", &s);
							luaspermukaan = 6*s;
							volume = s*s*s;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
							
						break;
						case 2:
							int p,l,tinggi;
							printf("2. Balok\n");
							printf("Masukkan Nilai Panjang (p) : \n");
							scanf("%d", &p);
							printf ("Masukan Nilai Lebar (l) : \n");
							scanf("%d", &l);
							printf ("Masukan Nilai tinggi (t) : \n");
							scanf("%d", &tinggi);
							luaspermukaan = 2*(p*l) + (p*tinggi) + (l*tinggi);
							volume = p*l*tinggi;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
						break;
						case 3:
							int r, phi;
							printf("3. Tabung\n");
							printf("Masukkan Nilai Jari Jari (r): \n");
							scanf("%d", &r);
							printf("Masukkan Nilai Phi (phi): \n");
							scanf("%d", &phi);
							printf ("Masukan Nilai tinggi (t) : \n");
							scanf("%d", &tinggi);
							luaspermukaan = phi*r*r;
							volume = (phi*r*r)*tinggi;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
							
						break;
						case 4:
							
							printf("4. Bola\n");
							printf("Masukkan Nilai Jari Jari (r): \n");
							scanf("%d", &r);
							printf("Masukkan Nilai Phi (phi): \n");
							scanf("%d", &phi);
							phi = 3.14;
							luaspermukaan = 4*phi*r*r;
							volume = 4/3*phi*r*r*r;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
							
						break;
						case 5:
							
							printf("5. Kerucut\n");
							printf("Masukkan Nilai Jari Jari (r): \n");
							scanf("%d", &r);
							printf("Masukkan Nilai Phi (phi): \n");
							scanf("%d", &phi);
							printf("Masukkan Nilai Sisi (s) : \n");
							scanf("%d", &s);
							printf ("Masukan Nilai tinggi (t) : \n");
							scanf("%d", &tinggi);
							phi = 3.14;
							luaspermukaan = phi*r*(r+s);
							volume = 1/3*phi*r*r*tinggi;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
						
						break;
						case 6:
							int alas;
							printf("7. Limas Persegi\n");
							printf("Masukkan Nilai alas: \n");
							scanf("%d", &alas);
							printf ("Masukan Nilai tinggi (t) : \n");
							scanf("%d", &tinggi);
							printf("Masukkan Nilai Sisi (s) : \n");
							scanf("%d", &s);
							luaspermukaan = 4*(0.5*alas*tinggi)+(s*s);
							volume = 4*s;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
						
						break;
						case 7:
							int luasalas;
							printf("7. Prisma Segitiga\n");
							printf("Masukkan Nilai luasalas: \n");
							scanf("%d", &luasalas);
							printf("Masukkan Nilai alas: \n");
							scanf("%d", &alas);
							printf ("Masukan Nilai tinggi (t) : \n");
							scanf("%d", &tinggi);
							printf("Masukkan Nilai Panjang (p) : \n");
							scanf("%d", &p);
							printf ("Masukan Nilai Lebar (l) : \n");
							scanf("%d", &l);
							luasalas = 0.5*alas*tinggi;
							kelilingalas = p+l+tinggi;
							luaspermukaan = (2*luasalas)+(kelilingalas*tinggi);
							volume = 0*5*p*l*tinggi;
							printf("luaspermukaan : %2.f\n", luaspermukaan);
							printf("volume : %2.f\n", volume);
						
						break;
						default :
							printf("Pilihan Anda Salah, Masukkan Nilai 1-7\n");
		    }
		    
					}  
					printf("Kembali Ke Menu Utama ? (y/n) \n");
					scanf("%d", ulang);
			} while (ulang == 'y'|| ulang == 'y');
			
	}
	
	else if (MainMenu==2)
	{
		int BandingBangunDatar; 
		header();
		printf("Mencari Bangun Datar dengan Luas Terkecil (max 3)\n");
		printf("1. Persegi\n");
		printf("2. Persegi Panjang\n");
		printf("3. Segitiga\n");	
		printf("Masukkan Pilihan Yang Anda Inginkan : ");
		scanf("%d", &BandingBangunDatar);
		
			if(BandingBangunDatar==1)
			{
			
				int sisi1, sisi2, sisi3; 
				int luas1, luas2, luas3; 
			
				printf("=====================================\n\n");
				printf("1. Persegi\n");
				printf("Masukkan Nilai Sisi dari Masing-masing Persegi (s) : \n");
				printf("Persegi 1 : ");
				scanf("%d", &sisi1);
				printf ("Persegi 2 : ");
				scanf("%d", &sisi2);
				printf ("Persegi 3 : ");
				scanf("%d", &sisi3);
		
				luas1 = sisi1*sisi1;
				luas2= sisi2*sisi2;
				luas3= sisi3*sisi3;
				
				printf("%d, %d, %d \n", luas1, luas2, luas3); 
				printf("Mohon ketik angka diatas sesuai urutan ");
				
				cariTerkecil();
				getchar();
			
				rate(); //Ini perindividual berhasil tp pas dijadiin function gak >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> HELP!!
			}
			
			else if (BandingBangunDatar==2)
			{
				int panjang1, lebar1, panjang2, lebar2, panjang3, lebar3; 
				int luas1, luas2, luas3; 
			
				printf("=====================================\n\n");
				printf("2. Persegi Panjang\n");
				printf("Masukkan Nilai Panjang dan Lebar dari Masing-masing Persegi Panjang(s) : \n");
				puts("Contoh : 3 4 -> Panjang = 3, Lebar = 4");
				printf("\n");
				printf("Persegi Panjang 1 : ");
				scanf("%d %d", &panjang1, &lebar1);
				printf ("Persegi Panjang 2 : ");
				scanf("%d %d", &panjang2, &lebar2);
				printf ("Persegi Panjang 3 : ");
				scanf("%d %d", &panjang3, &lebar3);
			
				luas1 = panjang1*lebar1;
				luas2= panjang2*lebar2;
				luas3= panjang3*lebar3;
				
				printf("%d, %d, %d \n", luas1, luas2, luas3); 
				printf("Mohon ketik angka diatas sesuai urutan ");
				
				cariTerkecil();
				getchar();
				//TOLONG YANG BAGIAN INI KENAPA TERKECILNYA NGACO YA?? >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> HELP!! 
			}
			
			else if (BandingBangunDatar==3)
			{
				int alas1, tinggi1, alas2, tinggi2, alas3, tinggi3; 
				int luas1, luas2, luas3; 
			
				printf("=====================================\n\n");
				printf("2. Segitiga\n");
				printf("Masukkan Nilai alas dan tinggi dari Masing-masing Segitiga(s) : \n");
				puts("Contoh : 3 4 -> alas = 3, tinggi = 4");
				printf("\n");
				printf("Segitiga 1 : ");
				scanf("%d %d", &alas1, &tinggi1);
				printf ("Segitiga 2 : ");
				scanf("%d %d", &alas2, &tinggi2);
				printf ("Segitiga  3 : ");
				scanf("%d %d", &alas3, &tinggi3);
			
				luas1 = (alas1*tinggi1)/2;
				luas2= (alas2*tinggi2)/2;
				luas3= (alas3*tinggi3)/2;
				
				printf("%d, %d, %d \n", luas1, luas2, luas3); 
				printf("Mohon ketik angka diatas sesuai urutan ");
				
				cariTerkecil();
				getchar();
				//TOLONG YANG BAGIAN INI KENAPA TERKECILNYA NGACO YA?? >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> HELP!! 
			}
			else 
			{
				puts("Mohon masukkan pilihan yang tersedia"); 
			}
	}
	else 
	{ 
		puts("Mohon Masukkan Pilihan yang Tersedia");
	}
return 0;
                }


            







        
