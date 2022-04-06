#include <iostream>
#include <fstream> 
using namespace std;

class Input{ 
	public :
	     void cetak(){
	cout<<"MENU MAKANAN"<<endl;
	cout<<"1. Ayam geprek\t: Rp.21.000"<<endl;
	cout<<"2. Ayam goreng\t: Rp.17.000"<<endl;
	cout<<"3. Udang goreng\t: Rp.19.000"<<endl;
	cout<<"4. Cumi goreng\t: Rp.20.000"<<endl;
	cout<<"5. Ayam bakar\t: Rp.25.000"<<endl;
      cout<<"pesan ayam geprek ->"; cin >> bnyk_aymgp;
      cout<<"pesen cumi goreng ->"; cin >> bnyk_cumgr;      
  }

   void toFile(){
     tulis_data.open("api_data.txt");
     tulis_data << bnyk_aymgp <<endl;
     tulis_data << bnyk_cumgr;
   }
   private :
      ofstream tulis_data;     
      int bnyk_aymgp, bnyk_cumgr;
};