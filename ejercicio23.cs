using System;

public class transformarTemperatura
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese una teperatura en grados celsius:");
        double gradosCelsius = Convert.ToDouble(Console.ReadLine());

        double fahrenheit = (gradosCelsius * 1.8) + 32;

        Console.WriteLine($"La temperatura ingresada en fahrenheit es: {fahrenheit}");
    }
}