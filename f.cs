using System;

class Program
{
    static void KLargest(int[] a, int n, int k)
    {
        Array.Sort(a, (x, y) => y.CompareTo(x));
        for (int i = 0; i < k; i++)
        {
            Console.Write(a[i] + " ");
        }
    }

    static void Main(string[] args)
    {
        int n, k;
        string[] nk = Console.ReadLine().Split();
        n = int.Parse(nk[0]);
        k = int.Parse(nk[1]);

        int[] a = new int[n];
        string[] inputArray = Console.ReadLine().Split();
        for (int i = 0; i < n; i++)
        {
            a[i] = int.Parse(inputArray[i]);
        }

        KLargest(a, n, k);
    }
}

