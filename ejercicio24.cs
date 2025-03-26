using System;

public class transformarTemperatura
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresar primera calificacion:");
        double calificacion1 = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingresar segunda calificacion:");
        double calificacion2 = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingresar tercera calificacion:");
        double calificacion3 = Convert.ToDouble(Console.ReadLine());

        double promedio = (calificacion1 + calificacion2 + calificacion3)/3;

        Console.WriteLine($"El promedio de las tres calificaciones es: {promedio}");
    }
}