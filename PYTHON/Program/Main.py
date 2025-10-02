from Ayah import Ayah
from Ibu import Ibu
from Anak import Anak
from Keluarga import Keluarga

def main():
    #menampilkan data sebelum ditambahkan
    keluarga = Keluarga(" ", " ")
    print("====DATA SEBELUM DITAMABHKAN====")
    keluarga.print()
    print("\n")


    #membuat data keluarga
    keluarga = Keluarga("Keluarga Susanto ", "Jl. Rancaekek Permain No.101")
    a = Ayah("Gerald Susanto", 43, "Laki-laki", "Insinyur", "S1 Teknik Sipil")
    i = Ibu("Susan Downey", 39, "Perempuan", "Ibu Rumah Tangga", "Coding")
    an1 = Anak("Salma Susanto", 18, "Perempuan", "SMA", "Konsultan Keuangan")
    an2 = Anak("Rizkiana Susanto", 17, "Laki-laki", "SMA", "Software Engineer")

    #menambahkan data ke keluarga
    keluarga.setAyah(a)
    keluarga.setIbu(i)
    keluarga.add_anak(an1)
    keluarga.add_anak(an2)

    #menampilkan data setelah ditambahkan
    print("====DATA SESUDAH DITAMBAHKAN====")
    keluarga.print()

if __name__ == "__main__":
    main()