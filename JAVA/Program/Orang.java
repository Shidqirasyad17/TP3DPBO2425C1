import java.util.ArrayList;
public class Orang{
    private String nama;
    private int usia;
    private String jenisKelamin;

    //constructor
    public Orang(){
    }   

    public Orang(String nama, int usia, String jenisKelamin){
        this.nama = nama;
        this.usia = usia;
        this.jenisKelamin = jenisKelamin;
    }

    //getter dan setter
    public String getNama(){
        return nama;
    }
    public void setNama(String nama){
        this.nama = nama;
    }
    public int getUsia(){
        return usia;
    }
    public void setUsia(int usia){
        this.usia = usia;
    }
    public String getJenis(){
        return jenisKelamin;
    }
    public void setJenis(String jenisKelamin){
        this.jenisKelamin = jenisKelamin;
    }
}