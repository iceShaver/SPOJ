//SPOJ: MWPZ06A - Ciazowy specjalista
//TIME: 2017-09-29
using System;

namespace SPOJCS
{
    class Program
    {
        static void Main(string[] args)
        {
            short testsNumber = short.Parse(Console.ReadLine());
            while (testsNumber-- != 0)
            {
                double[] numbers = Array.ConvertAll(Console.ReadLine().Split(' '), double.Parse);
                Console.WriteLine(Math.Round(Math.Abs(
                    12 * ((numbers[0] + numbers[1] - numbers[2] * numbers[1]) / (numbers[2] - 1)))));
            }
        }
    }
}
