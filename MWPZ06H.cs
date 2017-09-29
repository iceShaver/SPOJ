//SPOJ: MWPZ06H - Konkurs pseudomatematyczny
//TIME: 2017-09-29
using System;
using System.Collections.Generic;
using System.Linq;

namespace SPOJCS
{
    class Program
    {
        static List<int> SortScores(List<int> scores)
        {
            List<int> result = new List<int>();
            int max = scores.Max();
            int maxesNumber = scores.RemoveAll(x => x == max);
            for (int i = 0; i < maxesNumber; i++)
                result.Add(max);
            scores.Sort();
            result.AddRange(scores);
            return result;
        }
        static void Main(string[] args)
        {
            short testsNumber = short.Parse(Console.ReadLine());
            while (testsNumber-- != 0)
            {
                Console.ReadLine();
                List<int> scores = Console.ReadLine().Split(' ').ToList().ConvertAll(int.Parse);
                foreach (var score in SortScores(scores))
                    Console.Write(score+" ");
                Console.WriteLine();
            }
        }
    }
}
