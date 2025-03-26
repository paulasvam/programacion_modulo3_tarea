using System;

public class AreaTrianulo
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese la base del triangulo:");
        double baseTriangulo = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Ingrese la altura del triangulo:");
        double alturaTriangulo = Convert.ToDouble(Console.ReadLine());

        double area = (baseTriangulo * alturaTriangulo)/2;

        Console.WriteLine($"El area del triangulo es de: {area}");
    }
}