using System;

namespace LoginGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(GenerateLogin());
        }

        static string GenerateLogin()
        {
            string login = "Tamerlam";
            Random random = new Random();

            for (int i = 0; i < 8; i++)
            {
                int num = random.Next(0, 26);
                char letter = (char)('a' + num);
                login += letter;
            }

            return login;
        }
    }
}