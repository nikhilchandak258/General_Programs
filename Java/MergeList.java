import java.io.*;
import java.util.HashSet;

class LL {
    LLnode head;
    static class LLnode{
        int data;
        LLnode next;
        LLnode(int d){
            data=d;
            next=null;
        }
    }
        
        void nodeAppend(int data1)
        {
            LLnode n=new LLnode(data1);
            if(head==null)
            {
                head=n;
            }
            else
            {
                n.next=head;
                head=n;
            }
        }
        
        void printList()
        {
            LLnode n=head;
            while(n!=null)
            {
                System.out.print(n.data+" -> ");
                n=n.next;
            }
        }
        
        void delDups()
        {
            LLnode n=head;
            HashSet<Integer> set=new HashSet<Integer>();
            LLnode prev=null;
            while(n!=null)
            {
                if(set.contains(n.data))
                {
                    prev.next=n.next;
                }
                else
                {
                    set.add(n.data);
                    prev=n;
                }
                n=n.next;
            }
        }
        static void mergeList(LLnode n1,LLnode n2)
        {
            LL l3=new LL();
            while(n1!=null && n2!=null)
            {
                if(n1.data>n2.data)
                {
                    //System.out.println(n1.data);
                    l3.nodeAppend(n1.data);
                    n1=n1.next;
                    
                    
                }
                else
                {
                    //System.out.println(n2.data);
                    l3.nodeAppend(n2.data);
                    n2=n2.next;
                }
            }
            while(n1!=null)
            {
            l3.nodeAppend(n1.data);
            n1=n1.next;
                
            }  
             while(n2!=null)
            {
            l3.nodeAppend(n2.data);
            n2=n2.next;
                
            }
            l3.printList();
        }
    
    
    
    
	public static void main (String[] args) {
		//code
	    LL l1=new LL();
	    LL l2=new LL();
	    l1.nodeAppend(1);
        l1.nodeAppend(3);
        l1.nodeAppend(5);
        l1.nodeAppend(7);
        l2.nodeAppend(9);
        l2.nodeAppend(11);
        l2.nodeAppend(13);
        l2.nodeAppend(15);
        //l1.nodeAppend(2);
        //l1.nodeAppend(3);
        //System.out.print("hello");
       // l1.printList();
        //l2.printList();
        mergeList(l1.head,l2.head);
        
        
	}
}