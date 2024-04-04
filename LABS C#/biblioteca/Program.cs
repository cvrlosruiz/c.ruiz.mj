
using System;

class Program
{
    static void Main(string[] args)
    {
       
        Console.WriteLine("Ingrese el estado de la tarjeta (activa/inactiva):");
        string estadoTarjeta = Console.ReadLine();

        
        if (estadoTarjeta.ToLower() == "activa")
        {
            Console.WriteLine("¡Puede realizar préstamos!");
        }
        else if (estadoTarjeta.ToLower() == "inactiva")
        {
            Console.WriteLine("No se permiten préstamos.");
        }
       
    }
}