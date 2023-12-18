#include "../UAS/data.cpp"
using namespace std;

int main(){
    char ulangi;

    do{
        system("cls");
        welcome("\n\n======== WELCOME TO THE AIRPORT =========\n===========[ Kelompok 1 ]==============\n");

        cout << "\n===== PENERBANGAN DARI KOTA JAKARTA =====\n";
        cout << "\nMASUKKAN NAMA PEMESANAN : "; 
        getline(cin, masukan_nama);

        cout << "\n=========================================";
        cout << "\n\nMASUKKAN JUMLAH PENUMPANG : ";
        cin  >> jumlah_penumpang;
 
        cout << "\n=========================================\n";

        tampilkanDaftarRute();

        cout << "=========================================";
        cout << "\n\nMASUKKAN TUJUAN PENERBANGAN (PILIH 1 - 10) : ";
        cin >> tujuan_penerbangan; 

        if (tujuan_penerbangan > 0 && tujuan_penerbangan <= 10) {
            //Ini akan mengarahkan pada function kelas atau (pemilihan kelas) 
                kelasPenerbangan(daftarRute[tujuan_penerbangan - 1], tujuan_penerbangan);
            } else {
                cout << "Maaf, rute tujuan penerbangan yang Anda pilih tidak ada! \n \n";

        cout << "Apakah Anda ingin memilih rute tujuan penerbangan kembali? (y)es/(n)o : ";
        cin >>  ulangi;

        system("cls");    
        } 
    }while(ulangi=='y'||ulangi=='Y');

    cout << "\nJUMLAH PENUMPANG       : " << jumlah_penumpang << " Orang";
    cout << "\nKURSI NO\t       : ";
    if(kelas_penerbangan==1){
            for (int i = 0; i < jumlah_penumpang; ++i) {
                cout << i+1 << "-p,";
                } 
                }
            else if(kelas_penerbangan==2){
              for (int i = 0; i < jumlah_penumpang; ++i) {
                    cout << i+1 << "-b,";
                    } ;
                    }
              else if(kelas_penerbangan==3){
                for (int i = 0; i < jumlah_penumpang; ++i) {
                        cout << i+1 << "-e,";
                        } ;
                        }
                else if(kelas_penerbangan==4){
                    for (int i = 0; i < jumlah_penumpang; ++i) {
                            cout << i+1 << ",";
                            } ;
                        } 
    
    cout << "\nTOTAL TIKET  \t       : Rp." << total_pembayaran * jumlah_penumpang << endl;
        
    time();

    cout << "\n=======================================================\n";
    cout << "|\t\t      TERIMA KASIH\t\t      |\n";
    cout << "|\t  --[ SEMOGA SELAMAT SAMPAI TUJUAN ]--\t      |";
    cout << "\n=======================================================";
};