#include<iostream>
using namespace std;

void jelaskan_program(void);
void dapatkan_values(float *r, float *v);
float do_kalkulasi(float resistance, float voltase);
void tampilkan_hasil(float arus);
int main(){
	cout<<"Nama  : Dipca Anugrah"<<endl;
	cout<<"NIM   : 312210666"<<endl;
	cout<<"Kelas : TI.22.A.4"<<endl;
	cout<<"========================="<<endl;
	float resistor, volt, arus;
	jelaskan_program();
	dapatkan_values(&resistor, &volt);
	arus = do_kalkulasi(resistor, volt);
	tampilkan_hasil(arus);
}
void jelaskan_program(void){
	cout<< " -----Program Menghitung Besar Arus Listrik-----"<<endl;
	cout<< " Masukkan Nilai Resistor dan Voltase dibawah ini:"<<endl;
};
void dapatkan_values(float *r, float *v){
	float resistance, voltase;
	cout<<" Resistor = ";cin>>resistance;
	cout<<" Voltase  = ";cin>>voltase;
	*r = resistance;
	*v = voltase;
};
float do_kalkulasi(float resistance, float voltase){
	float arus;
	arus = voltase / resistance;
	return(arus);
};
void tampilkan_hasil(float arus){
	cout<<"======================================"<<endl;
	cout<<" Besar Arus Listrik adalah "<<arus<<" ampere"<<endl;
};


