class Orang:
    def __init__(self, nama ="", usia=0, jenis_kelamin =""):
        self.nama = nama
        self.usia = usia
        self.jenis_kelamin = jenis_kelamin


 #getter dan setter
    def getNama(self):
        return self.nama

    def setNama(self, nama):
        self.nama = nama

    def getUsia(self):
        return self.usia

    def setUsia(self, usia):
        self.usia = usia

    def getJenis(self):
        return self.jenis_kelamin

    def setJenis(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

