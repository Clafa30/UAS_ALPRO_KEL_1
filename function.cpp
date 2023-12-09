#include <iostream>
#include <chrono>
using namespace std;


int tujuan_penerbangan,
    kelas_penerbangan,
    jenis_penerbangan,
    jumlah_penumpang;
    
string masukan_nama;

long total_pembayaran;
char ulangi;

void welcome(string nama) {
  cout << nama << endl;
}

void time() {
    auto currentTime = chrono::system_clock::now();
    time_t currentTimeT = chrono::system_clock::to_time_t(currentTime);

    cout << "WAKTU PEMESANAN TIKET  : " << ctime(&currentTimeT) << endl;
  }

struct RutePenerbangan {
  string tujuan;
  long harga;
};

struct KelasPenerbangan {
  string jenis;
  float ppn;
};

string daftarPerjalanan[2] = {"Sekali Jalan", "Pulang Pergi"};

KelasPenerbangan daftarKelas[4] = {
  {
    "Premium",
    3,
  },
  {
    "Bisnis",
    2.5,
  },
  {
    "Ekonomi",
    2,
  },
  {
    "Biasa",
    1.5,
  },
};

RutePenerbangan daftarRute[10] = {
    {
        "Makassar",
        1850000,
    },
    {
        "Medan",
        1800000,
    },
    {
        "Palembang",
        850000,
    },
    {
        "Semarang",
        800000,
    },
    {
        "Solo",
        900000,
    },
    {
        "Surabaya",
        1160000,
    },
    {
        "Yogyakarta",
        850000,
    },
    {
        "Lombok",
        1400000,
    },
    {
        "Denpasar",
        1430000,
    },
    {
        "Bali",
        750000,
    }};

void tampilkanDaftarRute() {
  cout << "DAFTAR HARGA TIKET PESAWAT (RUTE PENERBANGAN) :\n";


  for (int i = 0; i < 10; i++) {
    cout << i + 1 << ". Jakarta - " << daftarRute[i].tujuan << (i == 6 ? " " : "\t") << ": Rp " << daftarRute[i].harga << "\n";
  }
}

void kelasPenerbangan(RutePenerbangan rute, KelasPenerbangan kelas) {
  cout << "\n==== PILIH JENIS PENERBANGAN ====\n\n";
  for (int i = 0; i < 2; i++) {
    cout << i + 1 << ". " << daftarPerjalanan[i] << "\n";
    }

  cout << "\nMASUKKAN JENIS PENERBANGAN (PILIH 1/2) : ";
  cin >> jenis_penerbangan;


  if (jenis_penerbangan > 0 && jenis_penerbangan <= 2) {
    switch (jenis_penerbangan) {
      case 1:
      	system("cls");
      	cout << "\n|====================================================|" << endl;
      	cout << "|                 RINCIAN PEMESANAN                  |" << endl;
      	cout << "|====================================================|" << endl;
      	cout << endl;
      	cout << "NAMA PEMESANAN         : " << masukan_nama       << endl;
      	cout << "TUJUAN PENERBANGAN     : ";
      	if(tujuan_penerbangan==1){
      		cout << "Makassar";
		  }
		    else if(tujuan_penerbangan==2){
			    cout << "Medan";
		    }
		      else if(tujuan_penerbangan==3){
			      cout << "Palembang";
		      }
		        else if(tujuan_penerbangan==4){
			        cout << "Semarang";
		        }
		          else if(tujuan_penerbangan==5){
                cout << "Solo";
              }
                else if(tujuan_penerbangan==6){
                  cout << "Surabaya";
                }
                  else if(tujuan_penerbangan==7){
                    cout << "Yogyakarta";
                  }
                    else if(tujuan_penerbangan==8){
                      cout << "Lombok";
                    }
                      else if(tujuan_penerbangan==9){
                        cout << "Denpasar";
                      }
                        else if(tujuan_penerbangan==10){
                          cout << "Bali";
                        }
                          else {
                            cout << "Maaf, Tujuan penerbangan yang anda pilih tidak ada!";
                            cout << "\nSilahkan untuk memilih tujuan penerbangan kembali";
                        }
		
		
      	cout << "\nKELAS PENERBANGAN      : ";
      	if(kelas_penerbangan==1){
      		cout << "Premium";
		  }
        else if(kelas_penerbangan==2){
          cout << "Bisnis";
        }
          else if(kelas_penerbangan==3){
            cout << "Ekonomi";
          }
            else if(kelas_penerbangan==4){
              cout << "Biasa";
            }
              else {
                cout << "\nMaaf, kelas penerbangan yang anda pilih tidak ada!";
              }
		
      	cout << "\nJENIS PENERBANGAN      : ";
      	if(jenis_penerbangan==1){
      		cout << "Sekali Jalan";
		    }
          else if(jenis_penerbangan==2){
            cout << "Pulang - Pergi";
          }
            else {
              cout << "Maaf, jenis penerbangan yang anda masukkan salah!";
            }
        total_pembayaran = rute.harga + (rute.harga * kelas.ppn / 100);
        cout << "\nHARGA TIKET \t       : Rp." << total_pembayaran;
        break;

      case 2:
      	system("cls");
      	cout << "\n|====================================================|" << endl;
      	cout << "|                 RINCIAN PEMESANAN                  |" << endl;
      	cout << "|====================================================|" << endl;
      	cout << endl;
      	cout << "NAMA PEMESANAN     : " << masukan_nama       << endl;
      	cout << "TUJUAN PENERBANGAN : ";
      	if(tujuan_penerbangan==1){
      		cout << "Makassar";
		    }
          else if(tujuan_penerbangan==2){
            cout << "Medan";
          }
            else if(tujuan_penerbangan==3){
              cout << "Palembang";
            }
              else if(tujuan_penerbangan==4){
                cout << "Semarang";
              }
                else if(tujuan_penerbangan==5){
                  cout << "Solo";
                }
                  else if(tujuan_penerbangan==6){
                    cout << "Surabaya";
                  }
                    else if(tujuan_penerbangan==7){
                      cout << "Yogyakarta";
                    }
                      else if(tujuan_penerbangan==8){
                        cout << "Lombok";
                      }
                        else if(tujuan_penerbangan==9){
                          cout << "Denpasar";
                        }
                          else if(tujuan_penerbangan==10){
                            cout << "Bali";
                          }
                            else {
                              cout << "Maaf, Tujuan penerbangan yang anda pilih tidak ada!";
                              cout << "\nSilahkan untuk memilih tujuan penerbangan kembali";
                          }
        
        cout << "\nKELAS PENERBANGAN      : ";
          if(kelas_penerbangan==1){
            cout << "Premium";
          }
            else if(kelas_penerbangan==2){
              cout << "Bisnis";
            }
              else if(kelas_penerbangan==3){
                cout << "Ekonomi";
              }
                else if(kelas_penerbangan==4){
                  cout << "Biasa";
                }
                  else {
                    cout << "Maaf, kelas penerbangan yang anda pilih tidak ada!";
                  }
		
      	cout << "\nJENIS PENERBANGAN    : ";
      	if(jenis_penerbangan==1){
      		cout << "Sekali Jalan";
		    }
          else if(jenis_penerbangan==2){
            cout << "Pulang - Pergi";
          }
            else {
              cout << "Maaf, jenis penerbangan yang anda masukkan salah!";
            }
        total_pembayaran = (rute.harga + (rute.harga * kelas.ppn / 100)) * 2;
        cout << "\nHARGA TIKET \t\t\t       : Rp." << total_pembayaran;
        break;
    }
  } 
    else {
      cout << "\nTIDAK ADA PILIHAN JENIS PENERBANGAN!";
    }
}

void tujuanPenerbangan(RutePenerbangan rute, int tujuan_penerbangan) {
  system ("cls");
  cout << "\nTUJUAN          \t   : "    << rute.tujuan << "\n";
  cout << "HARGA PENERBANGAN \t   : Rp " << rute.harga;

  cout << "\n\n ===== PILIH KELAS PENERBANGAN ===== \n";
  for (int i = 0; i < 4; i++) {
    cout << i + 1 << ". Kelas " << daftarKelas[i].jenis << "\n";
  }

  cout << "\nMASUKKAN KELAS PENERBANGAN (PILIH 1 - 4) : ";
  cin >> kelas_penerbangan;

  kelasPenerbangan(daftarRute[tujuan_penerbangan - 1], daftarKelas[kelas_penerbangan - 1]);
}