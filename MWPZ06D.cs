//SPOJ: MWPZ06D - Imieniny
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
                long[] numbers = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
                long sweets = numbers[1], persons = numbers[0] - 1;
                if (persons == 0) Console.WriteLine("TAK");
                else
                    Console.WriteLine((sweets % persons == 0) ? "NIE" : "TAK");
            }
        }
    }
}
