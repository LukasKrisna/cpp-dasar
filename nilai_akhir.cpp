#include <iostream>

using namespace std;

int main()
{
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiKeaktifan, rumusTugas, rumusUTS, rumusUAS, rumusKeaktifan, totalNilai;
    char nilaiHuruf;

    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;
    cout << "Masukkan Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;

    rumusTugas = nilaiTugas * 20 / 100;
    rumusUTS = nilaiUTS * 35 / 100;
    rumusUAS = nilaiUAS * 35 / 100;
    rumusKeaktifan = nilaiKeaktifan * 10 / 100;

    totalNilai = rumusTugas + rumusUTS + rumusUAS + rumusKeaktifan;

    if (totalNilai >= 76)
    {
        nilaiHuruf = 'A';
    }
    else if (totalNilai >= 66)
    {
        nilaiHuruf = 'B';
    }
    else if (totalNilai >= 56)
    {
        nilaiHuruf = 'C';
    }
    else if (totalNilai >= 46)
    {
        nilaiHuruf = 'D';
    }
    else if (totalNilai >= 0)
    {
        nilaiHuruf = 'E';
    }
    cout << "Nilai total: " << totalNilai << endl;
    cout << "Nilai huruf: " << nilaiHuruf << endl;

    return 0;
}