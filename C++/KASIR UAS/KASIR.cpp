#include <iostream>
using namespace std;


string arrMenu[5][3] = {{"1","Nasi goreng","11000"},{"2","Nasi uduk","6000"},{"3","Nasi jagal","10000"},{"4","Es Teh","4000"},{"5","Es Jeruk","5000"}};
int i;

int Intro();
int Menu();
int FormOrder();

int order;
int qty;

int main()
{
	Intro();
	Menu();
	FormOrder();
}

int Intro()
{
	cout<<"=============================="<<endl;
	cout<<"          Cafe Mama Gua       "<<endl;
	cout<<"        Jl. KS Tubun No.11    "<<endl;
	cout<<"=============================="<<endl;
}

int Menu()
{
	cout<<endl;
	cout<<"Daftar Menu Cafe Mama Gua :"<<endl;	 
	for(i=0;i<5;i++) {
		cout<<arrMenu[i][0]<<". "<<arrMenu[i][1]<<"	Rp."<<arrMenu[i][2]<<endl;
	
	}
}

int FormOrder()
{
	cout<<endl;
	cout<<"Masukan Nomor Pesanan :";
	cin>>order;
	cout<<"Masukan Banyak Pesanan :";
	cin>>qty;
}


