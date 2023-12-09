#include "../UAS/function.cpp"
using namespace std;

int main() {  
  do {
    welcome("=== WELCOME TO THE AIRPORT ===\n========[ Kelompok 1 ]========\n");

    tampilkanDaftarRute(); 
    
    cout << "\n===== PENERBANGAN DARI KOTA JAKARTA =====\n";
    cout << "\nMASUKKAN NAMA PEMESANAN : "; 
    getline(cin, masukan_nama);
    cout << "=========================================";
    cout << "\n\nMASUKKAN TUJUAN PENERBANGAN (PILIH 1 - 10) : ";
    cin >> tujuan_penerbangan;

    cout << "=========================================";
    cout << "\n\nMASUKKAN JUMLAH PENUMPANG : ";
    cin  >> jumlah_penumpang;
    if (tujuan_penerbangan > 0 && tujuan_penerbangan <= 10) {
      tujuanPenerbangan(daftarRute[tujuan_penerbangan - 1], tujuan_penerbangan);
    } else {
      cout << "Maaf, rute tujuan penerbangan yang Anda pilih tidak ada! \n \n";

      cout << "Apakah Anda ingin memilih rute tujuan penerbangan kembali? (y)es/(n)o : ";
      cin >>  ulangi;

      system("cls");
      
    }
  } while (ulangi == 'y' || ulangi == 'Y');


  cout << "\nTOTAL TIKET  \t       : Rp." << total_pembayaran * jumlah_penumpang << endl;
  time();
  cout << "\nTERIMA KASIH " << masukan_nama << " SUDAH MENGGUNAKAN LAYANAN KAMI\n";
  cout << "\n=======================================================\n";
  cout << "|\t  --[ SEMOGA SELAMAT SAMPAI TUJUAN ]--\t      |";
  
    for (int i = 0;  i <2; i++){
      cout << "\n=======================================================";
    }     
}
