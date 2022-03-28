#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){	
	int a=17000 ,b=21000;
	int porsi, menu, jumlah, bayar, kembali;
	string nama;
	time_t now = time(0);
	char* dt = ctime(&now);
	
	cout<<"=============RM ALPRO MAKNYUS============= "<<endl;
	cout<<"NAMA PEMBELI : ";
	cin>>nama;
	cout<<"NAMA MAKANAN: "<<endl;
	cout<<"1. AYAM GORENG "<<endl;
	cout<<"2. AYAM BAKAR "<<endl;
	cout<<"PILIH MENU MAKANAN : ";
	cin>>menu;
	
	if (menu==1){
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*a;
		
		if (jumlah >= 45000) {
			cout<<"Total harga Rp."<<jumlah<<endl;
			jumlah = jumlah-(jumlah*0.10);
			cout<<"Selamat anda mendapat diskon 10%"<<endl;
		}
	
	}
	else{
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*b;
		
		if (jumlah >= 45000) {
			cout<<"Total Harga Rp."<<jumlah<<endl;
			jumlah = jumlah-(jumlah*0.10);
			cout<<"Selamat anda mendapat diskon 10%"<<endl;
		}
		
	}
	
	cout<<"Total yang harus dibayar : Rp."<<jumlah<<endl;
	
	do {
		cout<<"Jumlah uang yang dibayar : Rp."; cin>>bayar;
	} while (bayar < jumlah);
	
	system("cls");
	
	cout<<"==================STRUK PEMBELIAN RM ALPRO MAKYUS================="<<endl;
	cout<<"==============================================================="<<endl<<endl;
	cout<<"Nama Pembli \t\t: "<<nama<<endl;
	if (menu ==1 ){
	cout<<"Jenis menu \t\t: "<<"AYAM GORENG"<<endl;
	}
	
	else 
	{
	cout<<"Jenis menu \t\t: "<<"AYAM BAKAR"<<endl;
	}
	cout<<"Total banyak pembelian : "<<porsi<<" Porsi"<<endl;
	cout<<"Total Harga \t\t: Rp."<<jumlah<<endl;
	cout<<"Total pembayaran\t: Rp."<<bayar<<endl;
	kembali = bayar-jumlah;
	cout<<"Total kembalian \t: Rp."<<kembali<<endl<<endl;
	cout<<"\tTerimakasih telah berbelanja di RM ALPRO MAKYUS"<<endl;
	cout<<"\t\t  "<<dt;
	getch();
}
