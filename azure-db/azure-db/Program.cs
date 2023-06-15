using azure_db;
using Microsoft.EntityFrameworkCore;

var context = new DbDemoContext(); 
//Data Source=azuressqlserver1.database.windows.net;Initial Catalog=DbDemo;User ID=kerimadmin;Password=Nimb12345;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False

var customers = context.Customers;

foreach(var customer in customers)
{
    Console.WriteLine($"{customer.FirstName} {customer.LastName}");
}