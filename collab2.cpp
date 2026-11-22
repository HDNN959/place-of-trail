#include <iostream>
using namespace std;

struct Hero { string nama; string lane; int hp; };
struct Siswa { string nama; int nilai; };


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
    double average = 0;
    cout << "Jumlah Siswa: ";
    cin >> jumlah_siswa;
    for (int i = 1; i <= jumlah_siswa; i++){
        cout << "Nama Siswa ke-" << i << "  : ";
        cin >> siswa.nama;
        cout << "Nilai Siswa ke-" << i << " : ";
        cin >> siswa.nilai;
        cout << "-------------------------" << endl;
        average += siswa.nilai;
    }
    cout << "Rata-rata Nilai: " << average / jumlah_siswa << endl;
    cout << endl;


    cout << "=====SOAL 3=====" << endl;
    return 0;
}