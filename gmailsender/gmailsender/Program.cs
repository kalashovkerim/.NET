// See https://aka.ms/new-console-template for more information
using gmailsender;

Console.WriteLine("Hello, World!");
string txtTo = " ";
string txtFrom = " ";
string txtPassword = "kysmphuibjqpvrfz";
string txtSubject = " ";
string txtBody = " ";



Console.WriteLine("Gmail from:");
txtFrom = Console.ReadLine();
Console.WriteLine("Gmail to:");
txtTo = Console.ReadLine();
Console.WriteLine("subject :");
txtSubject = Console.ReadLine();
Console.WriteLine("body :");
txtBody = Console.ReadLine();

GmailSender gs = new GmailSender(txtTo, txtFrom, txtPassword, txtSubject, txtBody);

gs.SendAsyncEmail();
