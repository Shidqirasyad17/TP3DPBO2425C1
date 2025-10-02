import java.util.ArrayList;
public class Anak extends Orang{
    private String sekolah;
    private String cita_cita;

    //constructor
    public Anak(){
    }   

    public Anak(String nama, int usia, String jenisKelamin, String sekolah, String cita_cita){
        super(nama, usia, jenisKelamin);
        this.sekolah = sekolah;
        this.cita_cita = cita_cita;
    }

    //getter dan setter
    public String getSekolah(){
        return sekolah;
    }
    public void setSekolah(String sekolah){
        this.sekolah = sekolah;
    }
    public String getCita(){
        return cita_cita;
    }
    public void setCita(String cita_cita){
        this.cita_cita = cita_cita;
    }

    //menampilkan data anak
    public void printAnak() {
    System.out.println("Nama          : " + getNama());
    System.out.println("Usia          : " + getUsia() + " tahun");
    System.out.println("Jenis Kelamin : " + getJenis());
    System.out.println("Sekolah       : " + getSekolah());
    System.out.println("Cita Cita     : " + getCita());
}
}