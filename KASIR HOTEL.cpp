#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	system("colour f1");
	
	char resepsionis[30], costumer[30], alamat[30],YT='Y';
	string hp, in, out, room;
	int kamar, bed, harga, lama, bayar, total;
	
	utama:
		
		system("cls");
		
		cout << "\t\t\t NAICHI HOTEL" << endl;
		cout << "\t Jl. Tumbal Negara No.97 Telp. (0812) 34567654" << endl;
		cout << "\t\t Malang, Prov. Jawa Timur 69604" << endl;
		cout << "----------------------------------------------------------" << endl;
		
		cout << "Nama Resepsionis	: "; cin >> resepsionis;
		cout << "Nama Costumer		: "; cin >> costumer;
		cout << "No Telp. / HP		: "; cin >> hp;
		cout << "Alamat			: "; cin >> alamat;
		cout << "Lama Menginap		: "; cin >> lama;
		cout << "Tanggal Check In	: "; cin >> in;
		cout << "Tanggal Check Out	: "; cin >> out;
		
		menu:
			
		system("cls");
			
		cout << "Pilih Tipe Kamar: " << endl;
		cout << "1. Standart Room" << endl;
		cout << "2. Deluxe Room" << endl;
		cout << "3. Suite Room" << endl;
		cout << "4. Presidential Room" << endl;
		cout << "Masukkan Pilihan: "; cin >> kamar; cout << endl;
		
		if(kamar==4){
			harga = 100000000;
			room = "Presidential Room";
			
			goto akhir;
			
		}
		
	cout << "Pilih Tipe Bed: " << endl;
	cout << "1. Single Bed" << endl;
	cout << "2. Twin Bed" << endl;
	cout << "3. Double Bed" << endl;
	cout << "Masukkan Pilihan: "; cin >> bed; cout << endl;
	
	if(kamar==1 && bed==1){
		harga = 300000;
		room = "Standard Room Dengan Single Bed";
		
	}
	
	else if(kamar==1 && bed==2){
		harga = 500000;
		room = "Standart Room Dengan Twin Bed";
	}
	
	else if(kamar==1 && bed==3){
		harga = 500000;
		room = "Standart Room Dengan Double Bed";
	}
	
	else if(kamar==2 && bed==1){
		harga = 900000;
		room = "Deluxe Room Dengan Single Bed";
	}
	
	else if(kamar==2 && bed==2){
		harga = 1300000;
		room = "Deluxe Room Dengan Twin Bed";
	}
	
	else if(kamar==2 && bed==3){
		harga = 1300000;
		room = "Deluxe Room Dengan Double Bed";
	}
	
	else if(kamar==3 && bed==1){
		harga = 1850000;
		room = "Suite Room Dengan Single Bed";
	}
	
	else if(kamar==3 && bed==2){
		harga = 2300000;
		room = "Suite Room Dengan Twin Bed";
	}
	
	else if(kamar==3 && bed==3){
		harga = 2300000;
		room = "Suite Room Dengan Double Bed";
	}
	
	else{
		cout << "Inputan Salah" << endl;
		getch();
		goto menu;
	}
	
	akhir:
		
		system("cls");
		
		total = harga * lama;
		
		cout << "Nama Resepsionis	: " << resepsionis << endl;
		cout << "Nama Costumer		: " << costumer << endl;
		cout << "No Telp / HP		: " << hp << endl;
		cout << "Alamat			: " << alamat << endl;
		cout << "Tipe Kamar		: " << room << endl;
		cout << "Tanggal Check In	: " << in << endl;
		cout << "Tanggal Check Out	: " << out << endl << endl;
		cout << "Biaya Total		: " << "Rp. " << total << ",00" << endl;
		cout << "Bayar			: " << "Rp. "; cin >> bayar;
		cout << "Kembalian		: " << "Rp. " << bayar-total << ",00" << endl << endl;
		
	tanya:
		
		cout << "Kembali Ke Menu Utama ? [Y / T]"; cin >> YT;
		
		if(YT=='Y'){
			goto utama;
		}
		else if(YT=='T'){
			cout << "\nTerima Kasih !";
		}
		else{
			cout << "Inputan Salah" << endl << endl;
			goto tanya;
		} 
		getch();
}

