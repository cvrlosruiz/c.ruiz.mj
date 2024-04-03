import java.util.Scanner;

public class simple {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);

// Se solicita al usuario su estado de cunta
        System.out.print("Introduce el estado de tu cuenta (activa o no activa): ");
        String estadoTarjeta = scanner.nextLine();


    // se determina si puede o no puede realizar prestamos
        if (estadoTarjeta.equalsIgnoreCase("activa")) {
          System.out.println("Puedes realizar prestamos.");

      }  if (estadoTarjeta.equalsIgnoreCase("no activa")) {
          System.out.println("Los prestamos no etan permitidos");
      
      }
      
      scanner.close();
  } 
}