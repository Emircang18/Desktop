public class main {
  public static void main(String[] args){
      kuyruk kuyrugumuz = new kuyruk(5);
      
      kuyrugumuz.insert(15);
      System.out.println("\nöndeki eleman:"+kuyrugumuz.kuyrukNerde());
      kuyrugumuz.insert(25);
      kuyrugumuz.insert(35);
      kuyrugumuz.insert(45);
      kuyrugumuz.insert(85);


      System.out.println("\nÇıkan eleman:"+kuyrugumuz.remove());
      System.out.println("\nöndeki eleman:"+kuyrugumuz.kuyrukNerde());
      System.out.println("\nÇıkan eleman:"+kuyrugumuz.remove());
      System.out.println("\nÇıkan eleman:"+kuyrugumuz.remove());
      System.out.println("\nÇıkan eleman:"+kuyrugumuz.remove());
      System.out.println("\nöndeki eleman:"+kuyrugumuz.kuyrukNerde());

  }

}