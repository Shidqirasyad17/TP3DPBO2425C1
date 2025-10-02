public class Main {
    public static void main(String[] args) {
        // menampilkan data sebelum ditambahkan
        Keluarga keluargaKosong = new Keluarga("", "");
        System.out.println("==== DATA SEBELUM DITAMBAHKAN ====");
        keluargaKosong.print();

        // mengisi data keluarga
        Ayah a = new Ayah("Budi Wijaya", 40, "Laki-laki", "Dokter", "S1 Kedokteran");
        Ibu i = new Ibu("Ani Maryani", 38, "Perempuan", "Ibu Rumah Tangga", "Memasak");
        Anak an1 = new Anak("Dina Maharani Wijaya", 12, "Perempuan", "SMP", "Dokter");
        Anak an2 = new Anak("Andi Cobra Wijaya", 8, "Laki-laki", "SD", "Petinju");

        Keluarga keluarga = new Keluarga("Keluarga Wijaa", "Jl. GegerKalong No.11");

        // tambah data keluarga
        keluarga.setAyah(a);
        keluarga.setIbu(i);
        keluarga.addAnak(an1);
        keluarga.addAnak(an2);

        // menampilkan data keluarga sesudah ditambahkan
        System.out.println("==== DATA SESUDAH DITAMBAHKAN ====");
        keluarga.print();
    }
}
