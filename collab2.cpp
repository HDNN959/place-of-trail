#include <iostream>
using namespace std;

struct Hero { string nama; string lane; int hp; };



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
    return 0;
}