
using System;

class Program
{
    static void Main(string[] args)
    {
       
        Console.WriteLine("Ingrese el estado de la tarjeta (activa/inactiva):");
        string estadoTarjeta = Console.ReadLine();

        // Con esta selecion determinamos si el usuario puede hacer prestamos.
        if (estadoTarjeta.ToLower() == "activa")
        {
            Console.WriteLine("Puedes realizar prestamos.");
        }
        else if (estadoTarjeta.ToLower() == "inactiva")
        {
            Console.WriteLine("No se permiten préstamos.");
        }
       
    }
}