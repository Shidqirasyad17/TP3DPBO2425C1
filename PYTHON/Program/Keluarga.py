from Ayah import Ayah
from Ibu import Ibu
from Anak import Anak

class Keluarga:
    def __init__(self, nama_keluarga="", alamat_rumah=""):
        self.nama_keluarga = nama_keluarga
        self.alamat_rumah = alamat_rumah
        self.ayah = None
        self.ibu  = None
        self.anak = []

    #getter dan setter
    def getNamaKeluarga(self):
        return self.nama_keluarga

    def setNamaKeluarga(self, nama_keluarga):
        self.nama_keluarga = nama_keluarga

    def getAlamatRumah(self):
        return self.alamat_rumah

    def setAlamatRumah(self, alamat_rumah):
        self.alamat_rumah = alamat_rumah
    
    #untuk menambahkan data ayah, ibu, dan anak
    def setAyah(self, a: Ayah):
        self.ayah = a

    def setIbu(self, i: Ibu):
        self.ibu = i

    def add_anak(self, an: Anak):
        self.anak.append(an)

    #untuk menampilkan data 
    def print(self):
        print("=== Data Keluarga ===")
        print(f"Nama Keluarga : {self.nama_keluarga}")
        print(f"Alamat Rumah  : {self.alamat_rumah}")

        if self.ayah:
                print("\n=== Data Ayah ===")
                self.ayah.print_ayah()
        else:
            print("===Belum ada data ayah===\n")
        if self.ibu:
           
                print("\n=== Data Ibu ===")
                self.ibu.print_ibu()
        else:
            print("===Belum ada data ibu===\n")

      
        if self.anak:
            for an in self.anak:
                print("\n=== Data Anak ===")
                an.print_anak()
        else:
            print("===Belum ada data anak==")
