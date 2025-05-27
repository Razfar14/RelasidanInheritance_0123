#include <iostream>
#include <vector>
using namespace std;

class pasien{
    public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama): nama(pNama) {
        cout << "Pasien " << nama << " ada" << endl;
    }
    ~pasien() {
        cout << "Pasien" << nama << "tidak ada" << endl;
    }
    void tambahDokter(dokter*);
    void cetakDokter();

};

class dokter{
    public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama): nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }
    void tambahPasien(pasien*);
    void cetakPasien();
};
void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter(){
    cout << "Daftar dokter yang menangani pasien \"" << this->nama << "\":\n";
    //auto digunakan untuk perulangan pada daftar_dokter
    for (auto& d : daftar_dokter) {
        cout << d->nama << endl;
    }
    cout << endl;
}

void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
}

void dokter::cetakPasien(){
    cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
    //auto digunakan untuk perulangan pada daftar_pasien
    for (auto& d : daftar_pasien) {
        cout << d->nama << endl;
    }
    cout << endl;
}

int main (){
    dokter* varDokter1 = new dokter("Dr. Budi");
    dokter* varDokter2 = new dokter("Dr. Tama");
    pasien* varPasien1 = new pasien("Andi");
    pasien* varPasien2 = new pasien("Budi");
   
    varDokter1->tambahPasien(varPasien1);
    varDokter1->tambahPasien(varPasien2);
    varDokter2->tambahPasien(varPasien1);
  
    varPasien1->tambahDokter(varDokter1);
    varPasien1->tambahDokter(varDokter2);
    varPasien2->tambahDokter(varDokter1);

    varDokter1->cetakPasien();
    varDokter2->cetakPasien();
    varPasien1->cetakDokter();
    varPasien2->cetakDokter();
   
    delete varDokter1;
    delete varDokter2;
    delete varPasien1;
    delete varPasien2;
   
    return 0;
}
