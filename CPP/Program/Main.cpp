#include <iostream>
#include <vector>
#include <string>
#include "Keluarga.cpp"

using namespace std;

int main()
{
    //menampilkan data sebelum ditamabhkan
    Keluarga keluargakosong("", "");
    cout << "DATA SEBELUM DITAMABHKAN" << endl;
    keluargakosong.print();

    //mengisi data keluarga
    Ayah a("Budi Wijaya", 40, "Laki-laki", "Dokter", "S1 Kedokteran");
    Ibu i("Ani Maryani", 38, "Perempuan", "Ibu Rumah Tangga", "Memasak");
    Anak an1("Dina Maharani Wijaya", 12, "Perempuan", "SMP", "Dokter");
    Anak an2("Andi Cobra Wijaya", 8, "Laki-laki", "SD", "Petinju");
    Keluarga keluarga("Keluarga Wijaa", "Jl. GegerKalong No.11");

    //tambah data keluarga
    keluarga.setAyah(a);
    keluarga.setIbu(i);
    keluarga.AddAnak(an1);
    keluarga.AddAnak(an2);

    //menampilkan data keluarga sesudah ditambahkan
    cout << "DATA SESUDAH DITAMBAHKAN" << endl;
    keluarga.print();

    return 0;
}
