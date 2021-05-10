using System;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach (var item in args)
            {
                Console.Write(item.ToString() + " ");
            }
            Console.ReadLine();
        }
    }
}
