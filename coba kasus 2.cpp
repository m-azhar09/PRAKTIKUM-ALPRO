#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){	
	int a=21000 ,b=17000 ,c=19000 ,d=20000 ,e=25000;
	int porsi, menu, jumlah, bayar, kembali,Jarak,Ongkir;
	string nama;
	time_t now = time(0);
	char* dt = ctime(&now);
	
	cout<<"=============RM ALPRO MAKNYUS DELIVERY============= "<<endl;
	cout<<"NAMA PEMBELI : ";
		cin>>nama;
	cout<<"JARAK PEMBELI (KM):";
		cin>>Jarak;
	cout<<"NAMA MAKANAN: "<<endl;
	cout<<"1. AYAM GEPREK "<<endl;
	cout<<"2. AYAM GORENG "<<endl;
	cout<<"3. UDANG GORENG"<<endl;
	cout<<"4. CUMI GORENG "<<endl;
	cout<<"5. AYAM BAKAR  "<<endl;
	cout<<"PILIH MENU MAKANAN : ";
	cin>>menu;
	if (menu==1){
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*a;
	}
	
	else if(menu==2){
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*b;
	
	}
	
	else if(menu==3){
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*c;
	}
	
	else if (menu==4){
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*d;
	}
	else{
		cout<<"Masukan jumlah porsi : "; cin>>porsi;
		jumlah = porsi*e;
	}
	
	cout<<"Total yang harus dibayar : Rp."<<jumlah<<endl;
	if (Jarak>=3){
		Ongkir=15000;
}
	else (Jarak>=3);{
		Ongkir=25000;
}

	cout<<"Ongkir yang harus dibayar : Rp."<<Ongkir<<endl;
	
		if (jumlah >=25000 ) {
			cout<<"Total harga Rp."<<jumlah<<endl;
			jumlah = jumlah-3000;
			cout<<"Selamat anda mendapat potongan biaya ongkir 3000"<<endl;
		}
		else if(jumlah >=50000 ) {
			cout<<"Total harga Rp."<<jumlah<<endl;
			jumlah = jumlah-(jumlah*0.15)-(Ongkir-5000);
			cout<<"Selamat anda mendapat diskon 15% dan potongan ongkir 5000"<<endl;
		}
		else (jumlah >=150000 );{
			cout<<"Total harga Rp."<<jumlah<<endl;
			jumlah = jumlah-(jumlah*0.35)-(Ongkir-8000);
			cout<<"Selamat anda mendapat diskon 35% dan potongan ongkir sebanyak 8000"<<endl;
		}

	do {
		cout<<"Jumlah uang yang dibayar : Rp."; cin>>bayar;
	} while (bayar < jumlah);
	
	system("cls");
	
	cout<<"==================STRUK PEMBELIAN DELIVERY RM ALPRO MAKYUS================="<<endl;
	cout<<"==============================================================="<<endl<<endl;
	cout<<"Nama Pembeli \t\t: "<<nama<<endl;
	cout<<"Total Jarak (KM)\t\t: "<<Jarak<<endl;
	if (menu ==1 ){
	cout<<"Jenis menu \t\t: "<<"AYAM GEPREK"<<endl;
	}
	else if(menu ==2 ){
	cout<<"Jenis menu \t\t: "<<"AYAM GORENG"<<endl;
	}
	else if(menu ==3 ){
	cout<<"Jenis menu \t\t: "<<"UDANG GORENG"<<endl;
	}
	else if(menu ==4 ){
	cout<<"Jenis menu \t\t: "<<"CUMI GORENG"<<endl;
	}
	else 
	{
	cout<<"Jenis menu \t\t: "<<"AYAM BAKAR"<<endl;
	}
	cout<<"Total banyak pembelian : "<<porsi<<" Porsi"<<endl;
	cout<<"Total Harga \t\t: Rp."<<jumlah<<endl;
	cout<<"Total Ongkir\t\t: Rp."<<Ongkir<<endl;
	cout<<"Total pembayaran \t: Rp."<<bayar<<endl;
	kembali = bayar-jumlah;
	cout<<"Total kembalian \t: Rp."<<kembali<<endl<<endl;
	cout<<"\tTerimakasih telah berbelanja di RM ALPRO MAKYUS"<<endl;
	cout<<"\t\t  "<<dt;
	getch();
}
