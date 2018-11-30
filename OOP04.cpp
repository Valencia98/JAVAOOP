#include <iostream>
#include <iomanip>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){

	char nama[100];

	//cin.getline /*baca sampai enter*/(nama /*apa yg dibaca*/, 100 /*berapa banyak yg mau dibaca*/, ' ' /*hanya di baca sampai*/);
	//cin.clear(); cin.sync();

	//cout << nama << endl;

	//cout << right /*masukin dari mana*/ << setw(40) /*berapa banyak mau diisi*/ << setfill('*')/* apa yang mau di isi*/ << nama <<endl;

	/*cout.width(40);
	cout.fill('*');
	cout << nama << endl;*/

	//cout << "test";

	////SHOWPOS
	//cout.setf(ios::showpos);
	//cout << 1;
	//cout << 1;
	//cout.unsetf(ios::showpos);
	//cout << uppercase << hex << 20 << endl;
	//cout << oct << 20 << endl;
	//cout << dec << 20 << endl;
	//cout.unsetf(ios::showpos);
	////Presicion

	//float number  = 10;

	//cout.setf(ios::fixed);
	//cout << setprecision(10) << number << endl;
	//
	//cout.setf(ios::fixed);
	//cout.setf(ios::scientific);
	//cout << (float)number << endl;
	 
	//VALIDASI NAMA HARUS MASUKIN DEPAN HURUF 
	/*int flag;
	int idx;
	do{
		flag = 0;
		cout << "Input nama : ";
		cin.getline(nama,100);
		cin.clear(); cin.sync();
		

		for(int i = 0; i<strlen(nama); i++){
			if(' ' == nama[i]){
			flag++;
			idx = i;
			}
		}
	}while(flag != 1 || !isupper(nama[0]) || !isupper (nama[idx+1]));

	cout << "Nama:" << nama << endl;*/

	char alamat[100];

	do{
		cout << "Input alamat : ";
		cin.getline (alamat, 100);
		cin.clear(); cin.sync();
	} while(!strstr(alamat, "Street"));


	/*char email [100];
	int indexAt = 0;
	int indexDot = 0;

	do{
		cout << "Input email : ";
		cin.getline(email,100);
		cin.clear(); cin.sync();

		for (int i=0; i<strlen(alamat); i++){
			if('@' == alamat [i]){
				indexAt = i;
			}
			if('.' == alamat [i]){
				indexDot = i;
			}
		}
	}while(indexAt == 0 || indexDot == 0 || indexAt - indexDot == -1 || indexDot<=indexAt);
*/
	cin.get();
	return 0;
}