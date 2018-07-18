#include<iostream>

using namespace std;

class Karyawan{
	private:
		int id;
		string nama;
		string bagian;
	public:
	
	Karyawan(int id,string nama,string divisi);
			int getId();
			string getNama();	
			string getBagian();
};

Karyawan::Karyawan(int id,string nama,string bagian){
	this->id=id;
	this->nama=nama;
	this->bagian=bagian;
	
}

int Karyawan::getId(){
	return this->id;
	
}
string Karyawan::getNama(){
	return this->nama;
}
string Karyawan::getBagian(){
	return this->bagian;
}
int main(){
Karyawan karyawan = Karyawan(332,"kiki","furniture");
cout<< "id : "<<karyawan.getId()<<endl;
cout<< "Nama Karyawan : "<<karyawan.getNama()<<endl;
cout<< "Bagian : "<<karyawan.getBagian()<<endl;
return 0;}

