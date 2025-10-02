#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Ayah.cpp"
#include "Ibu.cpp"
#include "Anak.cpp"
using namespace std;

class Keluarga
{
private:
    string Nama_Keluarga;
    string Alamat_Rumah;
    Ayah ayah;
    Ibu ibu;
    vector<Anak> anak;

    bool adaAyah =  false;
    bool adaIbu = false;

public:
    //construct
    Keluarga()
    {
    }
    Keluarga(string nama_keluarga, string alamat_rumah)
    {
        this->Nama_Keluarga = nama_keluarga;
        this->Alamat_Rumah = alamat_rumah;
    }

    //getter dan setter
    string getNama_Keluarga()
    {
        return Nama_Keluarga;
    }

    void setNama_Keluarga(string nama_keluarga)
    {
        this->Nama_Keluarga = nama_keluarga;
    }

    string getAlamat_Rumah()
    {
        return Alamat_Rumah;
    }

    void setAlamat_Rumah(string alamat_rumah)
    {
        this->Alamat_Rumah = alamat_rumah;
    }

    // tambah Ayah,Ibu, Dan Anak
    void setAyah(const Ayah &a)
    {
        ayah = a;
        adaAyah =  true;
    }
    void setIbu(const Ibu &i)
    {
        ibu = i;
        adaIbu = true;
    }
    void AddAnak(const Anak &an)
    {
        anak.push_back(an);
    }

    //untuk menampilkan data semua class / keluarga
    void print()
    {
        cout << "=== Data Keluarga ===" << endl;
        cout << "Nama Keluarga : " << Nama_Keluarga << endl;
        cout << "Alamat Rumah  : " << Alamat_Rumah << endl;

        if (adaAyah)
        {
            
                cout << "=== Data Ayah ===" << endl;
                ayah.printAyah();
            
        }
        else
        {
            cout << "Data Ayah Kosong\n"
                 << endl;
        }
        if (adaIbu)
        {
          
                cout << "=== Data Ibu ===" << endl;
                ibu.printIbu();
        }
        else
        {
            cout << "Data Ibu Kosong\n"
                 << endl;
        }
        if (!anak.empty())
        {

            for (auto &an : anak)
            {
                cout << "=== Data Anak ===" << endl;
                an.printAnak();
            }
        }
        else
        {
            cout << "Data Anak Kosong\n"
                 << endl;
        }
    }
};