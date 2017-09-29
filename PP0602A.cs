//SPOJ: PP0602A - Parzyte nieparzyste
//TIME: 2017-09-29
using System;

namespace SPOJCS
{
    class Program
    {
        static void Main(string[] args)
        {
            int testsNumber;
            testsNumber = int.Parse(Console.ReadLine());
            while (testsNumber-- != 0)
            {
                string[] numbers = Console.ReadLine().Split(' ');
                int numbersNumber = int.Parse(numbers[0]);
                for (int i = 2; i <= numbersNumber; i += 2)
                {
                    Console.Write(numbers[i] + " ");
                }
                for (int i = 1; i <= numbersNumber; i += 2)
                {
                    Console.Write(numbers[i] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
