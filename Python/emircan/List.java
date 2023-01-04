public class List {

    Node head;// head adında bir node
    Node tail;// tail adında bir node

    // listenin YAPILANDIRICI sınıfıdır.
    public List() {
        head = null;
        tail = null;
    }

    // Liste başına eleman ekleme
    void listHeadAdd(Node yeni) {//başa ekle
        if (head == null) {
            head = yeni;
            tail = yeni;
        } else {
            yeni.next = head;
            head = yeni;
        }
    }

    //Liste sonuna eleman ekleme
    void listTailAdd(Node yeni) {
         if (tail == null){
            head= yeni;
            tail= yeni;

         } else { 
            yeni.next = yeni;
            tail = yeni;
         }
    }

    void listPrint (){
        System.out.println("------Baglı Liste------");
        Node tmp;
        tmp = head;
        while (tmp != null){
             System.out.println(tmp.data);
             tmp = tmp.next;
            }
            System.out.println(" ");
            System.out.println(" ----------------- ");

    }
}