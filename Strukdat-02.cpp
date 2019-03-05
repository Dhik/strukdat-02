/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 26 Februari 2019
Deskripsi: Convert celcius to fahrenheit
Kelas: A
*/
#include <iostream>
#include <string.h>
using namespace std;
struct orang{
	int umur;
	char nama[30];
	char jk;
	char goldar;
};
int main (){
	orang Orang;
	Orang.umur=19;
	strcpy(Orang.nama, "Dhikri");
	Orang.jk='L';
	Orang.goldar= 'O';
	
	cout<<Orang.umur<<endl;
	cout<<Orang.nama<<endl;
	cout<<Orang.goldar<<endl;
	cout<<Orang.jk<<endl;
}
