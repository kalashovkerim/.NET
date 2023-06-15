Console.WriteLine("Enter the time you have:");
int N = Console.Read();

Console.WriteLine("Enter the count of themes:");
int M = Console.Read();

int[] AllKi = {};
int number;
for (int i = 1; i <= M; i++)
{
    Console.WriteLine($"Enter the count of questions in theme #{i}:");
    string Ki = Console.ReadLine();
    int.TryParse(Ki, out number);
    AllKi.Append(number);
}

for (int i = 1; i <= M; i++)
{
    Console.WriteLine(AllKi[i]);
}
