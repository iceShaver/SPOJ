//SPOJ: TRN - Transponowanie macierzy
//TIME: 2017-09-29
using System;

namespace SPOJCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] tmp = Console.ReadLine().Split(' ');
            int m = int.Parse(tmp[0]);
            int n = int.Parse(tmp[1]);
            int[,] matrix = new int[m,n];
            for (int i = 0; i < m; i++)
            {
                tmp = Console.ReadLine().Split(' ');
                for (int j = 0; j < n; j++)
                {
                    matrix[i,j] = int.Parse(tmp[j]);
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Console.Write(matrix[j,i]+" ");
                }
                Console.WriteLine();
            }
        }
    }
}
