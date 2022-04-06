#include <iostream>
#include <fstream>
using namespace std;

class Output{
	public :
	     void cetak(){
			cout << "-STRUK PEMBELIAN-\n";
			cout << "  Order : \n";
			cout << "  Ayam Geprek   -> " << data_file[3] << endl;
			cout << "  Cumi Goreng   -> " << data_file[4] << endl;
			cout << "Harga total Rp. " << data_file[0] << endl;
			cout << "Diskon      Rp. " << data_file[1] << endl;
			cout << "Harga Bayar Rp. " << data_file[2] << endl; }
      void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		int data_file[30];
		int index=0;
};