#include <iostream>
#include <string.h>

using namespace std;

class ClassRoom{
private:
	char nomor[50];
	int capacity;
	char type[50];

public:
	void setNomor(char nomor[]){
		strcpy(this->nomor, nomor);
	}

	char* getNomor(){
		return nomor;
	}

	~ClassRoom(){ //Destructor
		cout << "Roboh" << endl;
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void addition (int &a, int &b){
	a+=b;
}

int main(){
	int a = 10;
	int *p = &a;
	int& refA = a;

	int b = 20;

	swap(&a, &b);

	cout << a << endl;
	cout << b << endl;

	addition(a,b);

	cout << a << endl;
	cout << b << endl;
	
	ClassRoom cr7;
	ClassRoom *cr = new ClassRoom();
	delete cr;
	//kalau pakai delete baru ke delete;

	cout << a << endl;
	cout << refA << endl;

	cin.get();
	return 0;
}