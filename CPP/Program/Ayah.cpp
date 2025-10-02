#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Orang.cpp"
using namespace std;

class Ayah : public Orang
{
private:
    string Pekerjaan;
    string Pendidikan;

public:
    //construct
    Ayah()
    {
    }
    Ayah(string nama, int usia, string jenis_kelamin, string pekerjaan, string pendidikan) : Orang(nama, usia, jenis_kelamin)
    {
        this->Pekerjaan = pekerjaan;
        this->Pendidikan = pendidikan;
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

    string getPendidikan()
    {
        return Pendidikan;
    }

    void setPendidikan(string Pendidikan)
    {
        this->Pendidikan = Pendidikan;
    }

    //untuk menampilkan data ayah
    void printAyah()
    {

        cout << "Nama          : " << getNama() << endl;
        cout << "Usia          : " << getUsia() << " tahun" << endl;
        cout << "Jenis Kelamin : " << getJenis() << endl;
        cout << "Pekerjaan     : " << getPekerjaan() << endl;
        cout << "Pendidikan    : " << getPendidikan() << endl;
    }
};