using System;

public class resta
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresa un numero:");
        double numero1 = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingresa un numero:");
        double numero2 = Convert.ToDouble(Console.ReadLine());

        double resta = numero1 - numero2;

        Console.WriteLine($"La resta de los numeros ingresados es: {resta}");
    }
}