#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Orang
{

private:
    string Nama;
    int Usia;
    string jenis_kelamin;

public:
    //construct
    Orang()
    {
    }
    Orang(string nama, int usia, string jenis_kelamin)
    {
        this->Nama = nama;
        this->Usia = usia;
        this->jenis_kelamin = jenis_kelamin;
    }
    
    //getter dan setter
    string getNama()
    {
        return Nama;
    }

    void setNama(string nama)
    {
        this->Nama = nama;
    }

    int getUsia()
    {
        return Usia;
    }

    void setUsia(int usia)
    {
        this->Usia = usia;
    }

    string getJenis()
    {
        return jenis_kelamin;
    }

    void setJenis(string jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }
};