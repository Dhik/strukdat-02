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
struct pegawai{
	char nip[2];
	char nama[100];
	int gol;
};
typedef pegawai pegawa[100];
void inputPegawai(pegawa& pgw, int n){
	cout<<"Banyak Pegawai : "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Pegawai ke - "<<i+1<<endl;
		cout<<"Nama : "; cin>>pgw[i].nama;
		cout<<"NIP : "; cin>>pgw[i].nip;
		cout<<"Golongan : "; cin>>pgw[i].gol;
		cout<<endl;
	}
}
void cetakDaftar(int& n, pegawa& pgw, int& rata){
	cout<<"DAFTAR GAJI PEGAWAI PT. OTAK NGEBUL"<<endl<<endl;
	for(int i=0; i<n; i++){
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Nama : "<<pgw[i].nama<<endl;
	cout<<"NIP : "<<pgw[i].nip<<endl;
	cout<<"Golongan : "<<pgw[i].gol<<endl<<endl;
	}
	cout<<"Rata-rata Gaji : "<<rata<<endl;
}
void cariGaji(int& n, pegawa& pgw){
	for (int i=0; i<n; i++){
		if(pgw[i].gol==1){
			pgw[i].gol=2000000;
		}
		else if(pgw[i].gol==2){
			pgw[i].gol=3000000;
		}
		else if(pgw[i].gol==3){
			pgw[i].gol=5000000;
		}
		else if(pgw[i].gol==4){
			pgw[i].gol=8000000;
		}
		else{
			cout<<"Gaji tidak tertera"<<endl;
		}
	}
}
void rataGaji(int& n, pegawa& pgw, int& rata, int& gaji){
	for (int i=0; i<n; i++){
		gaji+=pgw[i].gol;
	}
	rata=gaji/n;
}
void gajiTerendah(){
	
}
void gajiTertinggi(){
	
}
main(){
	pegawa pgw;
	int n, rata, gaji=0;
	inputPegawai(pgw, n);
	cariGaji(n, pgw);
	rataGaji(n, pgw, rata, gaji);
	cetakDaftar(n, pgw, rata);
}
