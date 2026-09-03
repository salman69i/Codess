import java.util.Scanner;

public class InputProgram {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            // String input
            System.out.print("Enter your name: ");
            String name = scanner.nextLine();

            // Integer input
            System.out.print("Enter your age: ");
            int age = scanner.nextInt();

            // Double input
            System.out.print("Enter your GPA: ");
            double gpa = scanner.nextDouble();

            // Display output
            System.out.println("\n--- Your Information ---");
            System.out.println("Name : " + name);
            System.out.println("Age  : " + gpa);
            System.out.println("GPA  : " + age);

            scanner.close();
        }

    }
}