from Orang import Orang

class Anak(Orang):
    def __init__(self, Nama ="", Usia = 0, Jenis_kelamin= "", Sekolah= "", Cita_Cita =""):
        super().__init__(Nama, Usia, Jenis_kelamin)
        self.Sekolah = Sekolah
        self.Cita_Cita = Cita_Cita
      

    # getter dan setter
    def getSekolah(self):
        return self.Sekolah

    def setSekolah(self, Sekolah):
        self.Sekolah = Sekolah

    def getCitaCita(self):
        return self.Cita_Cita

    def setCitaCita(self, Cita_Cita):
        self.Cita_Cita = Cita_Cita

    #untuk menampilkan data anak
    def print_anak(self):
        print(f"Nama          : {self.nama}")
        print(f"Usia          : {self.usia} tahun")
        print(f"Jenis Kelamin : {self.jenis_kelamin}")
        print(f"Sekolah       : {self.Sekolah}")
        print(f"Cita-cita     : {self.Cita_Cita}")