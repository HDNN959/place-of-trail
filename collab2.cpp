#include <iostream>
using namespace std;

struct Hero {
    string nama;
    string lane;
    int hp;
};

struct Siswa {
    string nama;
    int nilai;
};

struct Barang {
    string nama;
    int harga;
    int jumlah;
};

int main(){
    int N;
    int totalHP = 0;
    Hero h;
    cout << "=====SOAL 1=====" << endl;
    cout << "Jumlah hero: ";
    cin >> N;
    for (int i = 1; i <= N; i++){
        cout << "Nama hero ke-" << i << ": ";
        cin >> h.nama;
        cout << "Lane: ";
        cin >> h.lane;
        cout << "HP: ";
        cin >> h.hp;
        cout << i << ". " << h.nama << " | " << h.lane << " | HP: " << h.hp << endl;
        totalHP += h.hp;
    }
    cout << "Total HP: " << totalHP << endl << endl;


    cout << "=====SOAL 2=====" << endl;
    Siswa siswa;
    int jumlah_siswa;
    double average = 0;
    cout << "Masukan jumlah siswa: ";
    cin >> jumlah_siswa;
    for (int i = 1; i <= jumlah_siswa; i++){
        cout << "Nama siswa ke" << i << " : ";
        cin >> siswa.nama;
        cout << "Nilai : ";
        cin >> siswa.nilai;
        average += siswa.nilai;
    }
    cout << "Rata-rata: " << average / jumlah_siswa << endl << endl;
    return 0;
}