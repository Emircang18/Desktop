import java.util.Scanner;
public class main {


        public static void main (String[] args){
            
        Scanner girdi = new Scanner(System.in);
        System.out.println("boyut Giriniz");
        int boyut = girdi.nextInt();
        kuyruk list = new kuyruk(boyut);
        int i=0;
    while( i<boyut){
        if(i<boyut){
        Scanner girdi1 = new Scanner(System.in);
        System.out.println("Eleman Giriniz");
        int eleman = girdi1.nextInt();
        list.insert(eleman);
        System.out.println("\nöndeki eleman:"+list.kuyrukNerde());
      
    } 
    i++;
        
    }
    Scanner deger=new Scanner(System.in);
    System.out.println("aranacak degeri gir:");
    int boyut2=deger.nextInt();
  
  
        System.out.println("\nSilinen eleman:"+list.remove());
        System.out.println("\nöndeki eleman:"+list.kuyrukNerde());
        System.out.println("\nSilinen eleman:"+list.remove());
        System.out.println("\nöndeki eleman:"+list.kuyrukNerde());
        System.out.println("\nöndeki eleman:"+list.search());


    }
}