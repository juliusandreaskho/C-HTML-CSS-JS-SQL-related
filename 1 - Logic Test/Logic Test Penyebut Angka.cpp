#include<conio.h>
#include<string.h>
#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

string penyebutAngka(int n) {
    if (n < 0) {
        return "minus " + penyebutAngka(-n); // BONUS, untuk menampung nilai minus/negative
    } else if (n < 10) {
        return satuan[n];
    } else if (n == 10) { // sepuluh
        return "sepuluh ";
    } else if (n == 11) { // sebelas
        return "sebelas ";
    } else if (n < 20) {
        return satuan[n-10] + " belas ";
    } else if (n < 100) {
        return satuan[(n-(n%10))/10] + " puluh " + penyebutAngka(n % 10);
    } else if (n < 1000) {
        return (n < 200 ? " seratus " : satuan[(n-(n%100))/100] + " ratus ") + penyebutAngka(n % 100);
    } else if (n < 1000000) { 
        return (n < 2000 ? " seribu " : penyebutAngka((n-(n%1000))/1000) + " ribu ") + penyebutAngka(n % 1000);
    } else if (n < 1000000000) {
        return penyebutAngka((n-(n%1000000))/1000000) + " juta " + penyebutAngka(n % 1000000);
    } else {
        return "Angka lebih besar dari 999,999,999 (harus kurang dari 1 Milyar)";
    }
}

int main(void) {
    int angka; 
	char repeat;
	
	cout<<"Aplikasi Penyebut Bilangan (maksimal ratusan juta)"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	do{
		cout<<endl<<endl<<"Masukkan Angka yang akan dibaca (without comma)"<<endl;
		cout<<"Angka Anda:  "; cin>>angka; cout<<endl;
		
		if (angka==0) cout << "nol ";
		else cout << penyebutAngka(angka) << endl;
		
		cout<<endl<<endl<<"Ulangi? (y/n)   "; cin>>repeat;
	} while((toupper(repeat))=='Y');
	return 0;
}
