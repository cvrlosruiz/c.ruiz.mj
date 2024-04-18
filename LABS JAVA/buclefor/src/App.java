import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double suma = 0;

        for (int i = 1; i <= 12; i++) {
            System.out.print("Ingrese la temperatura del mes " + i + ": ");
            double temperatura = scanner.nextDouble();
            suma += temperatura;
        }

        double promedio = suma / 12;
        System.out.println("El promedio de las temperaturas es: " + promedio);
        scanner.close();
    }
}