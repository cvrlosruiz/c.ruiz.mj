import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // pedir la antigüedad del empleado
        System.out.print("Ingrese la antigüedad del empleado (años): ");
        int antiguedad = scanner.nextInt();

        // verificar si el empleado es elegible para el bono
        if (antiguedad >= 5) {
            System.out.println("Es elegible para el bono, recibirá $1000.");
        } else {
            System.out.println("El empleado no es elegible para el bono.");
        }

        scanner.close();
    }
}