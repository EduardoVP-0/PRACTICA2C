//PRACTICA 2 C++
//EDUARDO VELAZQUEZ

#include<iostream>
#include<cstdlib>
#define maxf 3
#define maxc 5

using namespace std;
int main(int argc, char* argv[]) {
	int f, c;
	float a[maxf][maxc];
	//leer el array
	cout << "Introduzca los datos: " << endl;
	for(f =0 ; f< maxf; f++){
		for (c = 0; c < maxc; c++) {
			cout << "[ " << f << " ]" << "[ " << c << " ]: ";
			cin >> a[f][c];
			cout << endl;
		}
	}

	//Escribir el array

	cout << "Sus datos son los siguientes: " << endl;
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << "[ " << f << " ]" << "[ " << c << " ]: " << a[f][c] << endl;
		}
	}

	system("PAUSE");
	return 0;
}



