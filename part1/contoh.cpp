#include <iostream>
#include <string>
  using namespace std;

  int main() {
     string nama;
     string nim;
     string prodi;
    
 cout << "isi data mahasiswa" << endl;

     cout << "masukan nama: ";
     getline(cin, nama);
       cout << "masukan nim: "; 
       getline(cin, nim);
         cout << "masukan prodi: ";
       getline(cin, prodi);
         
      cout << "==========================="<< endl;
      cout << " DATA MAHASISWA" << endl;
      cout << "nama: " << nama  << endl;
      cout << "nim: "<< nim << endl;
      cout << "prodi: " << prodi << endl;
return 0;





  }