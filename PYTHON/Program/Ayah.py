from Orang import Orang

class Ayah(Orang):
    def __init__(self, Nama ="", Usia = 0, Jenis_kelamin = "", Pekerjaan = "", Pendidikan =""):
        super().__init__(Nama, Usia, Jenis_kelamin)
        self.Pekerjaan = Pekerjaan
        self.Pendidikan = Pendidikan
      

    # getter dan setter
    def getPekerjaan(self):
        return self.Pekerjaan

    def setPekerjaan(self, Pekerjaan):
        self.Pekerjaan = Pekerjaan

    def getPendidikan(self):
        return self.Pendidikan

    def setPendidikan(self, Pendidikan):
        self.Pendidikan = Pendidikan
    
    #untuk menampilkan data ayah
    def print_ayah(self):
        print(f"Nama          : {self.nama}")
        print(f"Usia          : {self.usia} tahun")
        print(f"Jenis Kelamin : {self.jenis_kelamin}")
        print(f"Pekerjaan     : {self.Pekerjaan}")
        print(f"Pendidikan    : {self.Pendidikan}")

