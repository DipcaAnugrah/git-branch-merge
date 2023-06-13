#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

struct Mahasiswa {
  string nama;
  string nim;
  string jurusan;
  string kelas;
};

int main() {
  Mahasiswa mhs[5];
  
  // Memasukkan data mahasiswa
  for (int i = 0; i < 2; i++) {
    cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
    cout << "  Nama: ";
    getline(cin, mhs[i].nama);
    cout << "  NIM: ";
    getline(cin, mhs[i].nim);
    cout << "  Jurusan: ";
    getline(cin, mhs[i].jurusan);
    cout << "  Kelas: ";
    getline(cin, mhs[i].kelas);
  }

  // Mengurutkan data mahasiswa berdasarkan NIM yang paling besar
  for (int i = 0; i < 2; i++) {
    for (int j = i + 1; j < 2; j++) {
      if (mhs[i].nim < mhs[j].nim) {
        swap(mhs[i], mhs[j]);
      }
    }
  }

  // Mencetak data mahasiswa dalam tabel
  cout << endl << "Data mahasiswa:" << endl;
  cout << "------------------------------------------------------------------------" << endl;
  cout << "| " << setw(15) << "Nama" << " | " << setw(15) << "NIM" << " | " << setw(15) << "Jurusan" << " | " << setw(15) << "Kelas" << " |" << endl;
  cout << "------------------------------------------------------------------------" << endl;
  for (int i = 0; i < 2; i++) {
    cout << "| " << setw(15) << mhs[i].nama << " | " << setw(15) << mhs[i].nim << " | " << setw(15) << mhs[i].jurusan << " | " << setw(15) << mhs[i].kelas << " |" << endl;
  }
  cout << "------------------------------------------------------------------------" << endl;

  return 0;
}
