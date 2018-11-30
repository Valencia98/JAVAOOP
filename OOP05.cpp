#include <iostream>

using namespace std;

class Math{
public:
	/*const double PI = 3.14519;
*/
	int pow(int base, int exponent){
		int result = 0;
		while(exponent--){
			if (result==0){
				result = base;
			}
			//else result = result*base;
			else{
				result = result * base;
			}
			
	}
		return result;
	}

	static inline int add (int value1, int value2){
		return value1 + value2;
	}
};

class Box{
	int width;
public:
	void setWidth(int widht){
		this->width = width;
	}

	friend int getWidth(Box box);
	void printWidth();

};

void Box::printWidth(){
	cout << "Box Width: " << width << endl;
}

int getWidth(){
	return Box.width;
}

class Cube{
	friend class Box;
	return width;
};

int main(){
	Math m;
	int a,b;
	const double PI = 3.14519; //nilainya tidka bisa diubah
	cout << "PI: " << PI << endl;
	cout << "Result: " << m.pow(2,5)<< endl;
	cout << "Input value to add [a b]: ";
	cin >> a >> b;
	cin.sync(); cin.clear();
	cout << "Result add: " << m.add(a,b)<< endl;

	
	//Kalau kaga ada Math m
	/*cout << "Result: " << Math::pow(2,5)<< endl;*/

	cin.get();
	return 0;
}