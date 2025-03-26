using System;

public class division
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresa un numero:");
        double numero1 = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingresa un numero:");
        double numero2 = Convert.ToDouble(Console.ReadLine());

        double suma = numero1 + numero2;

        Console.WriteLine($"La suma de los numeros ingresados es: {suma}");
    }
}