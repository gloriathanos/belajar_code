#include <iostream>
#include <string> // wajib untuk menggunakan string

using namespace std;

int main() {
    string nama;
    string nim;
    string no_hp;
cout << "Masukkan nama: ";
getline(cin, nama); 
cout << "masukan nim: ";
getline(cin, nim);
cout << "no hp: ";
getline(cin, no_hp); 

//output
cout << "===================" << endl;
cout << "data mahasiswa" << endl;
cout << "nama: " << nama << endl;
cout << "nim: " << nim << endl;
cout << "no hp: " << no_hp << endl;
 return 0;
}
