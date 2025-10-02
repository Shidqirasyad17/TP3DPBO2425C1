import java.util.ArrayList;
public class Ibu extends Orang{
    private String pekerjaan;
    private String hobi;
    
    //constructor
    public Ibu(){
    }   

    public Ibu(String nama, int usia, String jenisKelamin, String pekerjaan, String hobi){
        super(nama, usia, jenisKelamin);
        this.pekerjaan = pekerjaan;
        this.hobi = hobi;
    }

    //getter dan setter
    public String getPekerjaan(){
        return pekerjaan;
    }
    public void setPekerjaan(String pekerjaan){
        this.pekerjaan = pekerjaan;
    }
    public String getHobi(){
        return hobi;
    }
    public void setHobi(String hobi){
        this.hobi = hobi;
    }
    //menampilkan data ibu
    public void printIbu() {
    System.out.println("Nama          : " + getNama());
    System.out.println("Usia          : " + getUsia() + " tahun");
    System.out.println("Jenis Kelamin : " + getJenis());
    System.out.println("Pekerjaan     : " + getPekerjaan());
    System.out.println("Hobi          : " + getHobi());
}
}