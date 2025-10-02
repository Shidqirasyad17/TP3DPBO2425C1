import java.util.ArrayList;
public class Ayah extends Orang{
    private String pekerjaan;
    private String pendidikan;
    
    //constructor
    public Ayah(){
    }   

    public Ayah(String nama, int usia, String jenisKelamin, String pekerjaan, String pendidikan){
        super(nama, usia, jenisKelamin);
        this.pekerjaan = pekerjaan;
        this.pendidikan = pendidikan;
    }

    //getter dan setter
    public String getPekerjaan(){
        return pekerjaan;
    }
    public void setPekerjaan(String pekerjaan){
        this.pekerjaan = pekerjaan;
    }
    public String getPendidikan(){
        return pendidikan;
    }
    public void setJenis(String pendidikan){
        this.pendidikan = pendidikan;
    }
    
    //menampilkan data ayah
    public void printAyah() {
    System.out.println("Nama          : " + getNama());
    System.out.println("Usia          : " + getUsia() + " tahun");
    System.out.println("Jenis Kelamin : " + getJenis());
    System.out.println("Pekerjaan     : " + getPekerjaan());
    System.out.println("Pendidikan    : " + getPendidikan());
}
}