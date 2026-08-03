#include<iostream>
using namespace std;

int main()
{
int A[]={0,2,0,1,2,1,2,0,1} ;
 int temp=0;
 int index;

    cout<<"Array:"<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }

    for(int j=0;j<9-1;j++)
    {
            for(int i=0;i<9-1;i++)
            {
            if(A[i]>A[i+1])
            {
               temp=A[i];
                A[i]=A[i+1];
                A[i+1] =temp;
            }
            }
    }

    cout<<"Sorted BUBBLE:"<<endl;
    for(int k=0;k<9;k++)
    {
        cout<<"A["<<k<<"] = "<<A[k]<<endl;
    }
}


// duch National Flag Algorithm
import java.util.Scanner;

public class SortColors {

    // Function to sort 0s, 1s, and 2s
    public static void sortColors(int[] arr) {

        int low = 0;
        int mid = 0;
        int high = arr.length - 1;

        while (mid <= high) {

            if (arr[mid] == 0) {
                // Swap arr[low] and arr[mid]
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;

                low++;
                mid++;
            }
            else if (arr[mid] == 1) {
                mid++;
            }
            else { // arr[mid] == 2

                // Swap arr[mid] and arr[high]
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;

                high--;
            }
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements (only 0, 1, or 2):");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        sortColors(arr);

        System.out.println("Sorted array:");

        for (int num : arr) {
            System.out.print(num + " ");
        }

        sc.close();
    }
}


// counting method
import java.util.Scanner;

public class SortColorsCount {

    public static void sort(int[] arr) {

        int zero = 0;
        int one = 0;
        int two = 0;

        for (int x : arr) {

            if (x == 0)
                zero++;
            else if (x == 1)
                one++;
            else
                two++;
        }

        int i = 0;

        while (zero-- > 0)
            arr[i++] = 0;

        while (one-- > 0)
            arr[i++] = 1;

        while (two-- > 0)
            arr[i++] = 2;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements:");

        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        sort(arr);

        System.out.println("Sorted Array:");

        for(int x:arr)
            System.out.print(x+" ");

        sc.close();
    }
}