class MergeSort
{
    int[] ga; 
    public MergeSort(int[] a)
    {
        this.ga=a;
        //printArray(ga);
        int l=0;
        int h=a.length-1;
        sort(l,h);
        printArray(ga);
    }
    void sort(int low,int high)
    {
        int mid;
        if(low<high)
        {
            mid=(low+high)/2;
            sort(low,mid);
            sort(mid+1,high);
            merge(low,mid,high);
        }
    }    
    void merge(int l,int m,int h)
    {
        int i,j,k;
        int n1=m+1-l;
        int n2=h-m;
        int[] L1=new int[n1];
        int[] R1=new int[n2];
        for(i=0;i<n1;i++)
        {
            L1[i]=ga[l+i];
        }
        for(i=0;i<n2;i++)
        {
            R1[i]=ga[m+1+i];
        }
        k=l;
        i=0;
        j=0;
        while(i<n1 && j<n2){
            if(L1[i]<=R1[j])
            {
                ga[k]=L1[i];
                i++;
            }
            else
            {
                ga[k]=R1[j];
                j++;
            }
            k++;
            
        }
        while(i<n1)
        {
            ga[k++]=L1[i++];
        }
        while(j<n2)
        {
            ga[k++]=R1[j++];
        }
        
    }
    void printArray(int[] a)
    {
        for(int i=0;i<a.length;i++)
            System.out.print(" "+a[i]);
    }
    
    public static void main(String args[])
    {
        int[] a={11,4,2,10,20,5};
        MergeSort m=new MergeSort(a);
    }
}