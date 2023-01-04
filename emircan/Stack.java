public class Stack {
    private int[] numbers;
    private int top;
    private int max;

    Stack(int size)
    {
        numbers = new int[size];
        top = 0;
        max = size;
    }
    public void push(int number)
    {
        if(!isFull()){
            numbers[top]=number;
            top++;

        }
    }
    public int pop()
    {
        top--;
        return numbers [top];

    }
    public int peek()
    {
        return numbers[top];
    }
    public boolean isEmpty()
    {
        if(top > 0) return true;
        else return false;

    }
    public boolean isFull()
    {
        if(top == max)return true;
        else return false;

    }
    public int size()
    {
        return top;
    }
    public void list()
    {
        for(int i = max-1;i>=0;i--)
        {
            if(numbers[i]!=0)
             System.out.print(numbers[i]+"");
             
        }
    }

    
}
