public class kuyruk{
    // private değişkenler
    private int maxBoyut;
    private long[] kuyrukDizi;
    private int front;
    private int rear;
    private int elemanSayisi;

    public kuyruk (int boyut){
        maxBoyut = boyut;
        kuyrukDizi = new long[maxBoyut];

front = 0;
rear = -1;
elemanSayisi = 0;

}

public boolean bosMu(){
if (elemanSayisi == maxBoyut) return true;
else return false;

}
public boolean doluMu(){
if (elemanSayisi == maxBoyut) return true;
else return false;

}
// kuytuğa eleman ekleme
public void insert (long eklenecekEleman){
if (rear == maxBoyut -1)//kuytuk dolduysa
   rear = -1;
rear++;
kuyrukDizi [rear]= eklenecekEleman;
elemanSayisi++;

}
// kuyruktan eleman çekme 
public long remove(){
long cikarilacak = kuyrukDizi[front++];
if (front == maxBoyut)
front = 0;
elemanSayisi--;
return cikarilacak;

}
// kuyruğun sonundaki eleman
public long kuyrukNerde(){
return kuyrukDizi[front];

    }



}