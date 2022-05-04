using System;

namespace DesafiosBeecrowd.ConsoleApp
{
	class Program
	{
		static void Main(string[] args)
		{
			int a, b, c = 0;

			//7 14 106
			string entrada = Console.ReadLine();
			string[] entradas = entrada.Split(' ');

			a = int.Parse(entradas[0]);
			b = int.Parse(entradas[1]);
			c = int.Parse(entradas[2]);


			//processo
			int maior = MaiorAB(a,b);
			maior = MaiorAB(maior, c);


			Console.WriteLine("{0} eh maior", maior);
		}

		static int MaiorAB(int a, int b) {
			return (a + b + Math.Abs(a - b)) / 2;
		}


	}
}
