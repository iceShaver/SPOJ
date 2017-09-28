//SPOJ: PP0601B - Podzielnosc
//TIME: 2017-09-29
using System;

namespace SPOJ
{
    class Program
    {
        static void Main(string[] args)
        {
            int testsNumber, n, x, y;
            testsNumber = int.Parse(Console.ReadLine());
            while (testsNumber-- != 0)
            {
                string[] numbers = Console.ReadLine().Split(' ');
                n = int.Parse(numbers[0]);
                x = int.Parse(numbers[1]);
                y = int.Parse(numbers[2]);
                for (int i = 1; i < n; i++)
                    if (i % x == 0 && i % y != 0)
                        Console.Write(i+" ");
                        

                Console.WriteLine();
            }
        }
    }
}
