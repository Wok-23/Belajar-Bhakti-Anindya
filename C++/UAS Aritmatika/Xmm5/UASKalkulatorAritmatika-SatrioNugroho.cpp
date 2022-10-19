#include <iostream>
using namespace std;

int ModelHitung();
int model;
int Penjumlahan();
int x;
int y;
int Hasil;
int Pengurangan();
int Perkalian();
int Pembagian();



int main()
{
	cout<<"---------------------------------"<<endl;
	cout<<"  Aritmatika Dan Bangun Datar"<<endl;
	cout<<"      UAS - Satrio Nugroho"<<endl;
	cout<<"---------------------------------"<<endl;
	
	ModelHitung();
	
	return 0;
}

int ModelHitung()
{

	cout<<"Pilih Model Hitung dibawah ini : "<<endl;
	cout<<"[1] Hitung Penjumlahan"<<endl;
	cout<<"[2] Hitung Pengurangan"<<endl;
	cout<<"[3] Hitung Perkalian"<<endl;
	cout<<"[4] Hitung Pembagian"<<endl;
	
	cout<<"Masukan Angka model di atas : ";
	cin>>model;
	if(model == 1) {
		Penjumlahan();
	}else
	if(model == 2) {
		Pengurangan();
	}else
	if(model == 3) {
		Perkalian();
	}else
	if(model == 4) {
		Pembagian();
	}
	cout<<"---------------------------------"<<endl;
	cout<<"   Maaf, inputan Tidak dikenali."<<endl;
	cout<<"---------------------------------"<<endl;
	

	
	
	
	
	
	return 0;
}

int Penjumlahan()
{

	cout<<"---------------------------------"<<endl;
	cout<<"   Form Aritmatika Penjumlahan"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukan angka x : ";
	cin>>x;
	cout<<"Masukan angka y : ";
	cin>>y;
	
	Hasil = x+y;
	
	cout<<"Hasil Penjumlahan x dan y adalah : "<<Hasil<<endl;
	cout<<"----------------------------------"<<endl;
	
	return 0;
}
int Pengurangan()
{

	cout<<"---------------------------------"<<endl;
	cout<<"   Form Aritmatika Pengurangan"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukan angka x : ";
	cin>>x;
	cout<<"Masukan angka y : ";
	cin>>y;
	
	Hasil = x-y;
	
	cout<<"Hasil Pengurangan x dan y adalah : "<<Hasil<<endl;
	cout<<"----------------------------------"<<endl;
	
	return 0;
}
int Perkalian()
{

	cout<<"---------------------------------"<<endl;
	cout<<"   Form Aritmatika Perkalian"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukan angka x : ";
	cin>>x;
	cout<<"Masukan angka y : ";
	cin>>y;
	
	Hasil = x*y;
	
	cout<<"Hasil Perkalian x dan y adalah : "<<Hasil<<endl;
	cout<<"----------------------------------"<<endl;
	
	return 0;
}
int Pembagian()
{

	cout<<"---------------------------------"<<endl;
	cout<<"   Form Aritmatika Pembagian"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukan angka x : ";
	cin>>x;
	cout<<"Masukan angka y : ";
	cin>>y;
	
	Hasil = x/y;
	
	cout<<"Hasil Pembagian x dan y adalah : "<<Hasil<<endl;
	cout<<"----------------------------------"<<endl;
	
	return 0;
}






