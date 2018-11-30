#include <iostream>
#include <string.h>
#include <string>
#define fflush cin.sync();cin.clear()

using namespace std;

class Manusia
{
private:
	char nama[100];
	char gender [10];
	int iq;
public:
	void setNama(char newNama[])
	{
	strcpy(this->nama,newNama);
	}

	char *getNama()
	{
	return this->nama;
	
	
	}

	void jalan();
	Manusia()
	{
		cout << "Manusia Lahir" << endl;
	
	}
	Manusia(int iq,char nama[],char gender[])
	{
	this->iq=iq;
	strcpy(this->nama,nama);
	strcpy(this->gender ,gender);

	}
};

void Manusia :: jalan()
{
cout <<"Saya Berjalan";
}
int idx=0;

int main()
{
	Manusia manusia(120,"Eric","Laki");
	Manusia *m=new Manusia;
	cout <<manusia.getNama ()<<endl;
	//manusia.iq =250;
	//m->iq =120;//klo pake pointer pake panah
	//cout << manusia.iq <<endl;
	manusia.setNama("Bambang");
	cout<<manusia.getNama ();
	manusia.jalan();
	cin.get ();
return 0;
}