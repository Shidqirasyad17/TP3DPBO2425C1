# TP3DPBO2425C1

# Janji
Saya Shidqi Rasyad Firjatulah dengan NIM 2408156 mengerjakan TP3 pada mata kuliah DPBO untuk keberkahannya saya menyatakan bahwa saya tidak melakukan kecurangan sebagaimana yang dispesifikasikan.

# Desain Diagram
![WhatsApp Image 2025-09-28 at 22 30 34_3f3ca605](https://github.com/user-attachments/assets/798555f5-556c-4279-8643-ca935f511f24)

# Penjelasan Atribut Dan Method
## Class Orang
  Atribut : 
  - Nama -> Untuk Nama anggota keluarga
  - Usia -> Untuk Usia anggota keluarga
  - Jenis Kelamin -> Untuk Jenis Kelamin setiap keluarga (Perempuan/Laki-Laki)
  Method :
  - Getter dan setter untuk atribut
## Class Ayah
  Atribut :
  - Pekerjaan -> Untuk Pekerjaan Ayah
  - Pendidikan -> Untuk Pendidikan terakhir Ayah
  Method :
  - Getter dan setter untuk atribut
  - printAyah -> menampilkan informasi/data ayah
## Class Ibu
  Atribut : 
  - Pekerjaan -> Untuk Pekerjaan Ibu
  - Hobi -> Untuk Hobi Ibu
  Method :
  - Getter dan setter untuk atribut
  - printIbu - > menampilkan informasi/data ibu
## Class Anak
  Atribut : 
  - Sekolah -> Untuk Pendidikan Anak yang sedang ditempuh saat ini
  - Cita Cita -> Untuk Cita cita anak
  Method :
  - Getter dan setter untuk atribut
  - printAnak - > menampilkan informasi/data anak
## Class Keluarga
  Atribut : 
  - Nama Keluarga -> Untuk Nama keluarga
  - Alamat Rumah -> Untuk Alamat Rumah keluarga
  - Ayah -> objek Ayah
  - Ibu -> objek Ibu
  - anak -> array dari objek anak
  Method :
  - getter dan setter untuk atribut
  - addAnak -> menambahkan anak ke keluarga
  - print -> menampilkan semua data keluarga

# Penjelasan Desain Program
  ## Base Class 
  -  Class Orang -> Menampung semua atribut yang dibutuhkan oleh Ayah, Ibu, Dan Anak
  ## Inheritance Class 
    Inheritance yang digunakan : Hierarchical Inheritance
  - Class Ayah, Ibu, Dan Anak -> Semua class ini mewarisi atribut dari class Orang
  ## Composite Class
  - Class Keluarga -> memiliki anggota keluarga berupa (Ayah, Ibu, Dan Anak)

# Penjelasan Alur Program
  1. Program membuat objek keluarga kosong untuk menampilkan data sebelum diisi
  2. Program membuat objek keluarga baru dengan nama keluarga dan alamat rumah
  3. Program membuat objek Ayah, Ibu, dan Anak dengan atribut masing-masing
  4. Objek tersebut dimasukan ke dalam objek Keluarga menggunakan setter dan method addAnak()
  5. Program memangil method print() pada Keluarga untuk menampilkan seluruh data keluarga

# Dokumentasi 
  ## CPP
  <img width="1090" height="723" alt="image" src="https://github.com/user-attachments/assets/ceab5862-d0a0-4bd7-a270-fa30fceb190b" />
  
  ## Python
  <img width="1340" height="817" alt="image" src="https://github.com/user-attachments/assets/7c4bdc62-616a-4bbf-901b-d1a996d27ef4" />
  
  ## Java
  <img width="1653" height="729" alt="image" src="https://github.com/user-attachments/assets/dff66b09-447e-4587-a058-150c6546bbf7" />




