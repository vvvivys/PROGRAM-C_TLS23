//PROGRAM KALKULATOR SEDERHANA

#include<iostream>
using namespace std;

int main(){
	float angka1, angka2, hasil;
	char operasi;
	string loop="ya";
	
	while(loop=="ya"){
		cout<<"Masukkan angka 1 = ";
		cin>>angka1;
		cout<<"Masukkan angka 2 = ";
		cin>>angka2;
		
		cout<<"PILIH OPERATOR"<<"\n";
		cout<<"+ Penjumlahan"<<"\n";
		cout<<"- Pengurangan"<<"\n";
		cout<<"x Perkalian"<<"\n";
		cout<<"/ Pembagian"<<"\n";
		cout<<"Masukkan pilihan = "<<"\n";
		cin>>operasi;
		
//		Penjumlahan
		if(operasi=='+'){
			hasil=angka1+angka2;
		}
//		Pengurangan
		else if(operasi=='-'){
			hasil=angka1-angka2;
		}
//		Perkalian
		else if(operasi=='x'){
			hasil=angka1*angka2;
		}
//		Pembagian
		else if(operasi=='/'){
			hasil=angka1/angka2;
		}
		
		cout<<"\n";
		cout<<"Hasil = "<<hasil<<endl;
		
		cout<<"\n";
		cout<<"Ulangi? (ya/tidak) = ";
		cin>>loop;
	}
	
		cout<<"TERIMA KASIH";
	
	return 0;
}
