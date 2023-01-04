using System;
using System.Collections.Generic;
class GFG {
     
    // Ondalığı BCD'ye dönüştürme işlevi
    static void bcd(int z)
    {
        if (z == 0) {
            Console.Write("0000");
            return;
        }
      
        // Sayıların tersini saklamak için
        int ters = 0;
      
        // Rakamları ters çevirme
        while (z > 0) {
            ters = ters * 10 + (z % 10);
            z /= 10;
        }
      
        // ters'deki tüm basamakları yinele
        while (ters > 0) {
      
            // Her rakam için Binary bul
            string b = Convert.ToString(ters % 10, 2).PadLeft(4, '0');
      
             // Geçerli hane için İkili dönüştürmeyi yazdır
            
            Console.Write(b + " ");
      
            ters /= 10;
        }
    }
 
  static void Main() {
       
        
            Console.Write("1. sayıyı giriniz: ");
            int X = Convert.ToInt32(Console.ReadLine());
            bcd(X);

            Console.Write("\n2. sayıyı giriniz: ");
            int Y = Convert.ToInt32(Console.ReadLine());
            
            bcd(Y);
            
            int z = Y + X;

            Console.WriteLine("\nBulduğumuz "+z+" Sayının Bcd hali");
            bcd(z);
  }
}