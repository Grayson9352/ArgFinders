using System;
using System.IO;
using System.Collections.Generic;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            string localAD = Environment.GetEnvironmentVariable("LocalAppData");
            List<string> arguments = new List<string>();
            string line;
            using (StreamReader file = new StreamReader(localAD + @"\FortniteGame\Saved\Logs\FortniteGame.log"))
            {
                while ((line = file.ReadLine()) != null)
                {
                    if (line.Contains("fltoken"))
                    {
                        arguments.Add(line);
                        Console.WriteLine(line);
                    }
                }
            }
        }
    }
}
