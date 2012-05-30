using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using ClrBoost;

namespace BoostTestApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(DateTimeWrapper.GetMillisSinceEpoch());

            Console.ReadLine();
        }
    }
}
