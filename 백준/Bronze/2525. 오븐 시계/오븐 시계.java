import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int m = scanner.nextInt();
        int addM = scanner.nextInt();
        m += h * 60 + addM;
        h = m / 60 % 24;
        m = m % 60;
        System.out.println(h + " " + m);
    }
}