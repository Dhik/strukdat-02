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
struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};
main(){
	Theater thr;
	thr.room=7;
	strcpy(thr.seat,"J9");
	strcpy(thr.movieTitle,"Adit & Jarwo");
	
	cout<<"Room : "<<thr.room<<endl;
	cout<<"Seat : "<<thr.seat<<endl;
	cout<<"Movie Title : "<<thr.movieTitle<<endl;
}
