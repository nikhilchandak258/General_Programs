import java.util.Arrays;
class RadixSort{
    
     static int getMax(int[] a,int n)
     {
       int max=a[0];
       for(int i=1;i<n;i++)
       {
           if(a[i]>max)
            max=a[i];
       }
       return max;
     }
     static void countSort(int[] a,int exp,int n)
     {
         int[] count=new int[10];
         Arrays.fill(count,0);
         int[] op=new int[n];
         
         for(int i=0;i<n;i++)
         {
             count[(a[i]/exp)%10]++;
         }
         
         for(int i=1;i<10;i++)
            count[i]+=count[i-1];
        
        for(int i=n-1;i>=0;i--)
        {
            op[(count[(a[i]/exp)%10]-1)]=a[i];
            count[(a[i]/exp)%10]--;
        }
        
        for(int i=0;i<n;i++)
        a[i]=op[i];
     }
     
     static void radix(int[] a,int n)
     {
         int m=getMax(a,n);
         for(int exp=1;m/exp>0;exp*=10)
            countSort(a,exp,n);
     }
     
     static void print(int[] a,int n)
     {
         for(int i=0;i<n;i++)
         System.out.print(" "+a[i]);
     }
    public static void main(String[] args)
    {
        int[] a={170,45,75,2,24,66,802};
        int n=a.length;
        radix(a,n);
        print(a,n);
    }
}