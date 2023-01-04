import java.util.*;
 
class Bcd
{
   
    public static void BCDConversion(int n)
    {
        if(n == 0)
        {
            System.out.print("0000");
        }
       
        int ters = 0;
       
        while (n > 0)
        {
            ters = ters * 10 + (n % 10);
            n /= 10;
        }
         
        while(ters > 0)
        {
            String b = Integer.toBinaryString(ters % 10);
            b = String.format("%04d", Integer.parseInt(b));                       
            System.out.print(b + " ");
            ters /= 10;
        }
    }    
    public static void main(String []args)
    {
       
      Scanner girdi = new Scanner(System.in);
      System.out.println("3 Basamaklı sayı giriniz: ");
      int x = girdi.nextInt();
      Scanner girdi1 = new Scanner(System.in);
      System.out.println("3 Basamaklı sayı giriniz: ");
      int y = girdi1.nextInt();
      int  N= x+y ;
      System.out.println("\n"+x+" Sayısının Bcd hali: ");
      BCDConversion(x);
      System.out.println("\n"+y+" Sayısının Bcd hali: ");
      BCDConversion(y);
      System.out.println("\n"+x+" "+y+" Sayılarının toplamı olan "+N+" Sayısının bcd hali: " );
      BCDConversion(N);
    }
     
    
  
}
