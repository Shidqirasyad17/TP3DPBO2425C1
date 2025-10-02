from Orang import Orang

class Ibu(Orang):
    def __init__(self, Nama="", Usia=0, Jenis_kelamin="", Pekerjaan="", Hobi=""):
        super().__init__(Nama, Usia, Jenis_kelamin)
        self.Pekerjaan = Pekerjaan
        self.Hobi = Hobi
      

    # getter dan setter
    def getPekerjaan(self):
        return self.Pekerjaan

    def setPekerjaan(self, Pekerjaan):
        self.Pekerjaan = Pekerjaan

    def getHobi(self):
        return self.Hobi

    def setHobi(self, Hobi):
        self.Hobi = Hobi

    #untuk menampilkan data ibu
    def print_ibu(self):
        print(f"Nama          : {self.nama}")
        print(f"Usia          : {self.usia} tahun")
        print(f"Jenis Kelamin : {self.jenis_kelamin}")
        print(f"Pekerjaan     : {self.Pekerjaan}")
        print(f"Hobi          : {self.Hobi}")