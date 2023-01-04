import java.util.Scanner;//klavyeden veri almak için 
public class Main {
    public static void main(String[] args) {
        List ogrNo= new List();
        int veri,secim;
        Node e;
        Node etail;
        do {
            System.out.println(" 1-15 arasi komutu giriniz:");
			Scanner oku = new Scanner(System.in);//kullanicidan deger almak için kütüphane çagrilir
			secim = oku.nextInt();

            switch(secim){
                case 1:
                    System.out.println("Liste Basina eknecek ögrenci numarasi giriniz= ");
                    Scanner deger = new Scanner(System.in);//kullanicidan deger almak için kütüphane çagrilir
                    veri = deger.nextInt();// veri alinir
                    e = new Node(veri);//node çevrilir
				    ogrNo.listHeadAdd(e);//liste eklenir
                    ogrNo.listPrint();//yazdirma
                    break; 
                case 2:
                    System.out.println("Liste Basina eknecek ögrenci numarasi giriniz= ");
                    Scanner deger2 = new Scanner(System.in);//kullanicidan deger almak için kütüphane çagrilir
                    veri = deger2.nextInt();// veri alinir
                    e = new Node(veri);//node çevrilir

				    ogrNo.listTailAdd(e);//liste başına eklenir
                    ogrNo.listPrint();//yazdirma
                    break;
                
                default:
            break;
            } while (secim == 20) ;
        }
    }
}