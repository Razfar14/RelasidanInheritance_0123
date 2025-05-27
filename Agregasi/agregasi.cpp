#include <iostream>
#include <vector>
using namespace std;

#include "anaks.h"
#include "ibu.h"

int main (){
    ibu varibu = new ibu ("Dini");
    iby varibu2 = new ibu ("Novi");
    anak* varanak1 = new anak("Tama");
    anak* varanak2 = new anak("Rini");
    anak* varanak3 = new anak("Dewi");

    varIbu->tambahAnak(varanak1);
    varIbu->tambahAnak(varanak2);
    varIbu2->tambahAnak(varanak3);
    varibu2->tambahAnak(varanak1);

    varibu->cetakAnak();
    varibu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varanak1;
    delete varanak2;
    delete varanak3;
}