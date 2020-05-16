  //Function for Level Order Traversal of alreay existing tree
  
  
  void levelOrder(Node * root) {
        queue<Node> q;
        q.push(*root);
        while(!q.empty()){
            Node n = q.front();

            if(n.left){
                q.push(*n.left);
            }
            if(n.right){
                q.push(*n.right);
            }

            cout<<n.data<<" ";
            q.pop();
        }
    }
