#include <iostream>
using namespace std ;

int perkalian (int a, int b) {
	return a * b ;
}

int panjangInt(int aConst) {
	int berapa = 0;
	while (aConst != 0) {
		aConst /= 10;
		berapa++;
	}
	
	return berapa;
}
int main () {
	
	system ("title Muhammad Dzikrul Hakam") ;
	
	  cout<<"WELCOME TO PERKALIAN FUNGSI\n\n";
  cout<<"BY MUHAMMAD DZIKRUL HAKAM\n";
  cout<<"NIM : 19051397001\n";
  cout<<"PRODI : D4 MANAJEMEN INFORMATIKA\n\n";
	
	int a, b;
	cout << "Angka pertama = " ; cin >> a ;
	cout << "Angka kedua   = " ; cin >> b ;
	
	int berapa = panjangInt(a);
	int berapaB  = panjangInt(b);
	int berapaHasil = panjangInt(perkalian(a, b));
	int panjang = berapaB > berapa ? berapaB : berapa; 
	int panjangHasil = panjang < berapaHasil ? berapaHasil - panjang : 0;
 	for(int j = 0; j < panjangHasil; j++) {
 		cout << " ";
	 }
	for(int i = 0; i < berapaB - berapa; i++) {
		cout << " ";
	}
	cout << a << endl ;
	
	for(int j = 0; j < panjangHasil; j++) {
 		cout << " ";
	 }
	for(int i = 0; i < berapa - berapaB; i++) {
		cout << " ";
	}
	cout << b << endl ;
	
	
	for(int j = 0; j < panjangHasil; j++) {
 		cout << "_";
	 }
	for(int i = 0; i < panjang; i++) {
		cout << "_";
	}
	
	cout <<"x"<< endl ;
 	
	 cout << perkalian(a, b);}

