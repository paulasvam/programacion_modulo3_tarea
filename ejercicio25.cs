using System;

public class division
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresa el dvidendo:");
        double dividendo = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingresa el divisor:");
        double divisor = Convert.ToDouble(Console.ReadLine());

        double restoDivision = dividendo % divisor;

        Console.WriteLine($"El resto de la division es: {restoDivision}");
    }
}