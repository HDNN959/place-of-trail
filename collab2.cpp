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

    return 0;
}