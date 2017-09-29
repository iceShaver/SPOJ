//SPOJ: PP0601A2 - Test 3
//TIME: 2017-09-29
using System;

namespace SPOJCS
{
    class Program
    {
        static void Main(string[] args)
        {
            short number,
                counter = 0,
                previous = 42,
                conditionNumber = 42,
                limit = 3;
            while (true)
            {
                number = short.Parse(Console.ReadLine());
                Console.WriteLine(number);
                if (number == conditionNumber && previous != conditionNumber)
                    counter++;
                if (counter >= limit)
                    break;
                previous = number;
            }
        }
    }
}
