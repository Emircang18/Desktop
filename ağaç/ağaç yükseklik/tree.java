class Node{
    int data;
    int yukseklik;
    Node left,right;
    Node(int d){
        data=d;
        left=right=null;

        yukseklik=0;
    }


}
class BinaryTree{

    Node root;
    int height(Node node)
    {
        if (node ==null)
            return 0;
        return 1 + Math.max(height(node.left),height(node.right));

    }



{
    int lh;
    int rh;
    if (node==null)
        return true;

    lh = height(node.lh);
    rh = height(node.rh);
    
    if (Math.abs(lh-rh)<=1
        && isBalanced(node.left)
        && isBalanced(node.right))
        return true;
    return false;
}
public static void main(String args[]) {
    BinaryTree tree = new BinaryTree();
    tree.root = new Node(10);
    tree.root.left = new Node(7);
    tree.root.right = new Node(15);
    tree.root.left.left = new Node(4);
    tree.root.left.right = new Node(8);
    tree.root.left.right = new Node(18);
    if (tree.isBalanced(tree.root))
        System.out.println("Dengeli Ağaç");
    
    else
        System.out.println("Dengesiz Ağaç");

}
}