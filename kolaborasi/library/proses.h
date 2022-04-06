#include <iostream>
#include <fstream> 
using namespace std;

class Proses{
	public :
	     void cetak(){
	     	cout<<"anda sebagai proses \n";
	     }

      void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymgp;
					ayam_geprek = false;
				}
				else{
					ambil_data >> bnyk_cumgr;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymgp * bnyk_aymgp) + (hrg_cumgr * bnyk_cumgr);
			float batas =50000;
			float t2 = float(total);
			float diskon = t2 * 0.15;
			
			if (total >= batas)
				t2 = t2 - diskon;

			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymgp << endl;
			tulis_data << bnyk_cumgr;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymgp;
		int bnyk_cumgr;
		int hrg_aymgp = 21000;
		int hrg_cumgr = 20000;
};