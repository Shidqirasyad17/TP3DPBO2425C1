#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Orang.cpp"
using namespace std;

class Anak : public Orang
{
private:
    string Sekolah;
    string Cita_Cita;

public:
    //construct
    Anak()
    {
    }
    Anak(string nama, int usia, string jenis_kelamin, string sekolah, string cita_cita) : Orang(nama, usia, jenis_kelamin)
    {
        this->Sekolah = sekolah;
        this->Cita_Cita = cita_cita;
    }
    //getter dan setter 
    string getSekolah()
    {
        return Sekolah;
    }

    void setSekolah(string Sekolah)
    {
        this->Sekolah = Sekolah;
    }

    string getCitaCita()
    {
        return Cita_Cita;
    }

    void setCitaCita(string Cita_cita)
    {
        this->Cita_Cita = Cita_Cita;
    }

    //untuk menampilkan data anak
    void printAnak()
    {

        cout << "Nama          : " << getNama() << endl;
        cout << "Usia          : " << getUsia() << " tahun" << endl;
        cout << "Jenis Kelamin : " << getJenis() << endl;
        cout << "Sekolah       : " << getSekolah() << endl;
        cout << "Cita Cita     : " << getCitaCita() << endl;
    }
};