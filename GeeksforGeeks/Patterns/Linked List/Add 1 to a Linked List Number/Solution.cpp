/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/



class Solution {
  public:

  int add1(Node *ptr)
    {
        if(ptr==NULL)
            return 1;

        int cry=add1(ptr->next);//b2

        ptr->data=ptr->data+cry;

        if(ptr->data==10)
            {
                ptr->data=0;
                return( 1);
            }
        else
            return 0;

    }
    Node* addOne(Node* head) {

        int rcv=add1(head);
        if(rcv==1)
            {
                Node *nn=new Node(1);
                nn->next=head;
                return nn;
            }
            else
            return head;
    }
};