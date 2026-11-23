#include <iostream>
using namespace std;

struct Hero { string nama; string lane; int hp; };
struct Siswa { string nama; int nilai; };
struct Barang { string nama; int harga; int jumlah; };

int main(){
    cout << "=====SOAL 1=====" << endl;
    Hero h;
    int N;
    cout << "Jumlah Hero: ";
    cin >> N;
    for (int i = 1; i <= N; i++){
        cout << "Nama Hero: ";
        cin >> h.nama;
        cout << "Lane: ";
        cin >> h.lane;
        cout << "HP: ";
        cin >> h.hp;
        cout << h.nama << "|" << h.lane << "|" << h.hp << endl;
    }
    cout << endl;


    cout << "=====SOAL 2=====" << endl;
    Siswa siswa;
    int jumlah_siswa;
    double total = 0;
    cout << "Jumlah Siswa: ";
    cin >> jumlah_siswa;
    for (int i = 1; i <= jumlah_siswa; i++){
        cout << "Nama Siswa ke-" << i << "  : ";
        cin >> siswa.nama;
        cout << "Nilai Siswa ke-" << i << " : ";
        cin >> siswa.nilai;
        cout << "-------------------------" << endl;
        total += siswa.nilai;
    }
    cout << "Rata-rata Nilai: " << total / jumlah_siswa << endl;
    cout << endl;


    cout << "=====SOAL 3=====" << endl;
    Barang brg;
    double subtotal;
    int Total = 0;
    cout << "Masukan jumlah barang: ";
    cin >> brg.jumlah;
    for (int i = 1; i <= brg.jumlah; i++){
        cout << "Masukan nama barang: ";
        cin >> brg.nama;
        cout << "Harga barang: ";
        cin >> brg.harga;
        subtotal = brg.jumlah * brg.harga;
        Total =+ subtotal;
    }
    cout << "Total harga: " << Total << endl;
    return 0;
}