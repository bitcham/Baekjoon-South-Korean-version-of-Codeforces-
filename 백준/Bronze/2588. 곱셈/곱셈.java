import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int num1 = a * (b % 10);
        int num2 = a * ((b % 100) / 10) * 10;
        int num3 = a * (b /100) * 100;
        System.out.println(num1);
        System.out.println(num2 / 10);
        System.out.println(num3 / 100);
        System.out.println(num1 + num2 + num3);

    }
}