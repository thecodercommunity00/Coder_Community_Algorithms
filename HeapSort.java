import java.util.ArrayList;

public class HeapSort { 
    
    public static boolean compareTo(int arr[], boolean isMax, int a, int b)
    {
        if (isMax)
            return arr[a] > arr[b];
        else
            return arr[b] < arr[a];
    }

    public static void downHeapify(int arr[],int pi, boolean isMax,int n)
    {
        int maxidx = pi;
        int lci = 2 * pi + 1;
        int rci = 2 * pi + 2;

        if (lci <= n && compareTo(arr,isMax,lci, maxidx))
            maxidx = lci;
        if (rci <= n && compareTo(arr,isMax,rci, maxidx))
            maxidx = rci;

        if (maxidx != pi)
        {
            swap(pi,maxidx,arr);
            downHeapify(arr,maxidx,isMax,n);
        }
    }

    public static void swap(int idx1,int idx2,int arr[]) {
        int idx1_val = arr[idx1];
        int idx2_val = arr[idx2];

        arr[idx1]=idx2_val;
        arr[idx2]=idx1_val;
    }

    public static void solve()
    {
        int []arr = {10, 20, 30, -2, -3, -4, 5, 6, 7, 8, 9, 22, 11, 13};
        int n = arr.length;
        boolean isMax = false;
    
        for (int i = n - 1; i >= 0; i--)
        {
            downHeapify(arr,i,isMax,n-1);
        }

        int i = n-1;
        while(i>=0){
            swap(0,i--,arr);
            downHeapify(arr,0,isMax,i);
        }
    
        for(int ele: arr) System.out.print(ele + " ");
        System.out.println();
    }

    public static void main(String []args)
    {
        solve();
    }
}