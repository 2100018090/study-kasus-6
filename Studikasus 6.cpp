#include <iostream>
using namespace std;

class matkul{
	public :
		void input();
		void proses();
		void output();
	private :
		int i,n, data[40],maksimum,minimum,jumlah;
		float rata;
		string nama,matkul;
};

void matkul::input(){
	cout<<"==========================\n";
	cout<<"======DATA MAHASISWA======\n";
	cout<<"==========================\n"<<endl;
	cout<<"Nama mahasiswa : "; 
	getline(cin,nama);
	cout<<"Masukan Mata Kuliah : "; 
	getline(cin,matkul);
	cout<<"Masukan banyaknya data : "; 
	cin>>n;
}

void matkul::proses(){
	for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jumlah = jumlah + data[i];
        }
    rata=jumlah/n;
    
	maksimum = data[0];
	for(i = 0; i < n; i++) {
    	if (data[i] > maksimum)  {
			maksimum = data[i];
    	}
	}
	
	minimum = data[0];
	for(i = 0; i < n; i++) {
		if (data[i] < minimum)  {
			minimum = data[i];
    	}
	}
}

void matkul::output(){
	cout << "Nilai Rata-rata = " << rata << endl;
	cout << "Nilai Maksimum adalah " << maksimum << endl;
	cout << "Nilai Minimum adalah " << minimum << endl<<endl;
	cout<<"=======Terima Kasih=======";
}

int main(){
	matkul kelas;
	kelas.input();
	kelas.proses();
	kelas.output();
	return 0;
}
