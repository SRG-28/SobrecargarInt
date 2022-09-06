#include<iostream>
using namespace std;

class TEntero {
private:
	int n;
public:
	TEntero(int = 0 ); //constructor conjunto
	operator int() const; //Sobrecarga del operador int // cuando no pongo el tipo de dato al frente de operator es para
	//que identifique cualquier tipo
};

//----------Definiendo los Metodos-------------------

TEntero::TEntero(int a) : n(a) {

}

TEntero::operator int() const {
	return n;
}


//-------------------main-----------------------------
int main() {
	int a = 10, b = 9;
	TEntero c = 2;
	TEntero d;

	cout << "El objeto c vale: " << c << endl;
	cout << "El resultado de : a + b + c + d = " << a + b + c + d << endl;
	cout << "Combinado..." << a * a - b / c + d / 4 - 6 * b + 5 * c + 7 / c;

	system("pause");
	return 0;
}