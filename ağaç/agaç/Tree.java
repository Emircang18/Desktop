class Tree {
    
    
    
    //AĞAÇ SINIFI
  
        private  TreeNode root;
        public Tree(){
            root=null;
        }
        public TreeNode getRoot() {
            return root;
        }
    

public void preOrder(TreeNode localRoot)
{
    if(localRoot!=null){
        localRoot.displayNode();
        preOrder(localRoot.leftChild);
        preOrder(localRoot.rightChild);
    }

}

public void inOrder(TreeNode localRoot){
    if(localRoot!=null)
    {
        inOrder(localRoot.leftChild);
        localRoot.displayNode();
        inOrder(localRoot.rightChild);
    }
}
public void postOrder(TreeNode localRoot)
{
    if(localRoot!=null)
    {
        postOrder(localRoot.leftChild);
        postOrder(localRoot.rightChild);
        localRoot.displayNode();
        

    }

}
public void insert(int newdata)
{
    TreeNode newNode = new TreeNode();
    newNode.data=newdata;

    if(root==null){
        root= newNode;
    }
    else {
        TreeNode current =root;
        TreeNode parent;
        while(true){
            parent=current;
            if(newdata<current.data){
                current=current.leftChild;
                if(current==null)
                {
                    parent.leftChild=newNode;
                    return;
                }
            }
                else{
                    current=current.rightChild;
                    if(current==null)
                    {
                        parent.rightChild=newNode;
                        return;
                    }

                }
               
            }//end while
        }//end else not root
    }//end insert()
}
