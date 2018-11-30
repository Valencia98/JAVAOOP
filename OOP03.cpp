#include <iostream>
#include <time.h>
#define fflush cin.sync();cin.clear()
using namespace std;

class Car{
public :
int gas;
}car;

int main()
{
	srand(time(NULL));
	
	int choice;
	car.gas=100;
	
	do	{
	int speed = rand() % 100+1;// 100 itu mau berapa yg di random, +1 itu mulai dari mana randomannya
	cout << "1.Drive"<<endl;
	cout << "2.Rest"<<endl;
	cout << "3.Exit"<<endl;
	cin >> choice;
	fflush;
	switch(choice)
	{
	case 1:
		
		if(car.gas<20){
		cout << "You dont have enough gas to run your car"<<endl;
		}
		else{
		cout << "Your Speed Is : "<<speed<<endl;
		if(speed<50){
			car.gas=car.gas-20; 
			cout <<"You have spent 20 Liter of your gas"<<endl;
		}
		else if(speed>=50){
			car.gas=car.gas-40;
			cout <<"You Have Spent 40 liter of your gas"<<endl;
		}
		}
		break;
	case 2:
		if(car.gas=100){
			cout << "Your gas is Full"<<endl;
		}
		else{ 
		car.gas =car.gas +20;
		cout <<"You Have Succesfully Recharge 20 gas"<<endl;
		}
		break;
	}

	}while(choice!=3);
	cin.get();
return 0;
}
