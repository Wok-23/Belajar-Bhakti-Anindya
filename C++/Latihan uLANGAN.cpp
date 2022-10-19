#include <iostream>
using namespace std;
int ModelAritmatika();
int model;
int Penjumlahan();
int x;
int y;
int Hasil;
int main()
{
	cout<<"-----------------------------------------"<<endl;
	cout<<"		UAS Kalkulator Aritmatika"<<endl;
	cout<<"		  Satrio Nugroho - XMM5"<<endl;
	cout<<"-----------------------------------------"<<endl;
	
	ModelAritmatika();
	return 0;
}
int ModelAritmatika()
{
	cout<<"Pilih MoodelAritmatika dibawah ini :"<<endl;
	cout<<"[1] Penjumlahan"<<endl;

	cout<<"[2] Pengurangan"<<endl;
	cout<<"[3] Perkalian"<<endl;
	cout<<"[4] Pembagian"<<endl;
	
	cout<<"Masukan Angka Model :";
	cin>>model;
	if(model == 1) {
		Penjumlahan();
	}else
		
	
	
	return 0;
}
int Penjumlahan()
{
	cout<<"-----------------------------------"<<endl;
	cout<<"Form Aritmatika Penjumlahan"<<endl;
	cout<<"Masukan angka x : ";
	cin>>x;
	cout<<"Masukan angka y : ";
	cin>>y;
	
	Hasil = x + y;
	
	cout<<"Hasil dari Penjumlahan x dan y adalah : "<<Hasil<<endl;
	
	return 0;
	


	return 0;
}
	
	

