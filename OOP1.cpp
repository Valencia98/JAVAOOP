#include <iostream>
#include <string.h>
#include <string>//untuk menggunakan string
using namespace std;//kalau pakai ini kaga perlu pake std:: lagi
#define fflush cin.sync(); cin.clear() //sebagai pengadaian kalao masukin fflush nanti yg keluar itu cin.sync(); cin.clear()

int main(){
	//TIPE DATA
	//int, char. float. long
	//perbedaannya tipe data c++
	//ada string, boolean (bool)
	string name ="";
	string type ="";
	float side = 0;
	float base = 0;
	float height = 0;
	float hasil;
	bool height_valid = false;

	//input=cin
	//output=cout

	cout << "Hello World" << endl;//endl itu biar ke enter abis kata yang dikeluarin
	cout << "Input nama: ";
	//cin >> name;
	getline(cin,name);//untuk mengambil kata yang ada spasinya
	fflush;
	//cin.sync(); cin.clear(); //fflush(stdin);
	cout << "Nama Anda: " << name << endl; //di c++ kaga perlu pakai %s %d %c, bisa langsung dipanggil

	cout << "Input tipe ['Persegi'|'Segitiga']: ";
	cin >> type;
	fflush;
	

	if(strcmpi(name.c_str(),"persegi")==0/*type == "Persegi"*/){//kalo kaga insensitive
		do{
		cout << "Masukan sisi [cm]: ";
		cin >> side;
		fflush;
		}while(side < 1);

		hasil = side*side;
		cout << "Luas Persegi: " << hasil << endl;

	}else if(type.compare("Segitiga")==0){
		
		height_valid = false;
		while (!height_valid){
		cout << "Masukan tinggi [cm]: ";
		cin >> height;
		fflush;
		if(height > 0 && height < 101){
			height_valid = true;
			}
		}
		

		do{
		cout << "Masukan alas [cm] : ";
		cin >> base;
		fflush;
		}while(base < 1 || base > 101);
		cout <<"Luas Segitiga: " << (base*height)/2 << endl;
	
	} else{
		cout << "Baca yang bener" << endl;
	}

	
	//std::cin.get(); (kalau kaga pake using namespace)

	cin.get();//getchar();
	//getchar();
	return 0;
}