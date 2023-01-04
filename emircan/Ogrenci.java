public class Ogrenci{

    public static void main(String[] args)
    {

        Stack yigin = new Stack(12);
        yigin.push(14);
        yigin.push(24);
        yigin.push(43);
        yigin.push(86);
        yigin.push(34);
        System.out.println("ogrenci:"+yigin.pop());
        System.out.println("ogrenci:"+yigin.pop());
        yigin.push(78); // yeni ögrenci girişi 
        System.out.println("pop:"+yigin.pop());
        System.out.println("pop:"+yigin.pop());
        System.out.println("pop:"+yigin.pop());
        yigin.push(56); //yeni bir ögrenci girişi
        System.out.println("peek:"+yigin.peek());

        while(yigin.isEmpty())
        {
            System.out.print(+yigin.pop()+"--->");
            System.out.print("");

        }
        System.out.print("");

        
    }
}