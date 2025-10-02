#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Orang.cpp"
using namespace std;

class Ibu : public Orang
{
private:
    string Pekerjaan;
    string Hobi;

public:
    //construct
    Ibu()
    {
    }
    Ibu(string nama, int usia, string jenis_kelamin, string pekerjaan, string hobi) : Orang(nama, usia, jenis_kelamin)
    {
        this->Pekerjaan = pekerjaan;
        this->Hobi = hobi;
    }

    //getter dan setter
    string getPekerjaan()
    {
        return Pekerjaan;
    }

    void setPekerjaan(string Pekerjaan)
    {
        this->Pekerjaan = Pekerjaan;
    }

    string getHobi()
    {
        return Hobi;
    }

    void setHobi(string Hobi)
    {
        this->Hobi = Hobi;
    }

    //untuk menampilkan data ibu
    void printIbu()
    {

        cout << "Nama          : " << getNama() << endl;
        cout << "Usia          : " << getUsia() << " tahun" << endl;
        cout << "Jenis Kelamin : " << getJenis() << endl;
        cout << "Pekerjaan     : " << getPekerjaan() << endl;
        cout << "Hobi          : " << getHobi() << endl;
    }
};