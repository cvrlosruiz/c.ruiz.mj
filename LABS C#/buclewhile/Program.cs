using System;

class PromedioTemperaturasWhile {
    static void Main(string[] args) {
        double suma = 0;
        int contador = 0;

        while (contador < 12) {
            Console.Write("Ingrese la temperatura del mes {0}: ", contador + 1);
            double temperatura = Convert.ToDouble(Console.ReadLine());
            suma += temperatura;
            contador++;
        }

        double promedio = suma / 12;
        Console.WriteLine("El promedio de las temperaturas es: " + promedio);
    }
}