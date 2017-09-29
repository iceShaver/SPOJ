//SPOJ: PP0604A - Srednia arytmetyczna
//TIME: 2017-09-29
using System;
using System.Linq;

namespace SPOJCS
{
    class Program
    {
        static void Main(string[] args)
        {
            short testsNumber = short.Parse(Console.ReadLine());
            while (testsNumber-- != 0)
            {
                int[] numbers = Array.ConvertAll(Console.ReadLine().Split(' ').Skip(1).ToArray(), int.Parse);
                int sum = 0;
                for (int i = 0; i < numbers.Length; i++)
                    sum += numbers[i];
                double average = sum / (float)numbers.Length;
                int closestValue = numbers[0];
                foreach (int number in numbers)
                {
                    if (Math.Abs(number - average) < Math.Abs(closestValue - average))
                        closestValue = number;
                }
                Console.WriteLine(closestValue);
            }
        }
    }
}
