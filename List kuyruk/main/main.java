import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class main{

    public static void main (String[] args) {


        Queue<Integer> q = new LinkedList<>();
        
        Scanner girdi = new Scanner(System.in);
        System.out.println("boyut Giriniz");
        int boyut = girdi.nextInt();
        int i=0;
    while( i<boyut){
        if(i<boyut){
        Scanner girdi1 = new Scanner(System.in);
        System.out.println("Eleman Giriniz");
        int eleman = girdi1.nextInt();
        q.add(eleman);
      
    } 
    i++;
        
    }
        Scanner girdi3 = new Scanner(System.in);
        System.out.println("Aranacak Elamanı giriniz");
        int arama = girdi3.nextInt();
        System.out.println(q.remove(arama)); //Aranan elamanın olup olmamasını True False Gösterir
        Scanner girdi4 = new Scanner(System.in);
        System.out.println("Silmek istediğiniz elemanı gir:");
        int silme =girdi4.nextInt();
        q.remove(silme);
        Iterator<Integer> itr= q.iterator();
        while(itr.hasNext()){
            System.out.print("--->"+itr.next());


        }
    }
}