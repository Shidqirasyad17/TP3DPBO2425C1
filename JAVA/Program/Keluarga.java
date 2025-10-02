import java.util.ArrayList;
public class Keluarga{
    private String namaKeluarga;
    private String alamatRumah;
    private Ayah ayah;
    private Ibu ibu;
    private ArrayList<Anak> anak;

    //untuk pengecekan ada ayah ibu
    private boolean adaAyah = false;  
    private boolean adaIbu = false;
    
    //constructor
    public Keluarga(){
    }   

    public Keluarga(String namaKeluarga, String alamatRumah) {
        this.namaKeluarga = namaKeluarga;
        this.alamatRumah = alamatRumah;
        this.anak = new ArrayList<>();
    }

    //getter dan setter
     public String getNamaKeluarga() {
        return namaKeluarga;
    }

    public void setNamaKeluarga(String namaKeluarga) {
        this.namaKeluarga = namaKeluarga;
    }

    public String getAlamatRumah() {
        return alamatRumah;
    }

    public void setAlamatRumah(String alamatRumah) {
        this.alamatRumah = alamatRumah;
    }

    public void setAyah(Ayah a){
        this.ayah = a;
        this.adaAyah = true;
    }

    public void setIbu(Ibu i){
        this.ibu = i;
        this.adaIbu = true;
    }

    //untuk menambahkan anak
    public void addAnak(Anak an) {
        this.anak.add(an);
    }

    //untuk menampilkan data 
      public void print() {
        System.out.println("=== Data Keluarga ===");
        System.out.println("Nama Keluarga : " + namaKeluarga);
        System.out.println("Alamat Rumah  : " + alamatRumah);

        if (adaAyah) {
            System.out.println("=== Data Ayah ===");
            ayah.printAyah();
        } else {
            System.out.println("Data Ayah Kosong\n");
        }

        if (adaIbu) {
            System.out.println("=== Data Ibu ===");
            ibu.printIbu();
        } else {
            System.out.println("Data Ibu Kosong\n");
        }

        if (!anak.isEmpty()) {
            for (Anak an : anak) {
                System.out.println("=== Data Anak ===");
                an.printAnak();
            }
        } else {
            System.out.println("Data Anak Kosong\n");
        }
    }
}