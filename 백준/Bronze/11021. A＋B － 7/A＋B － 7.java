import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        for(int i = 1; i <= a; i++){
            int temp1 = s.nextInt();
            int temp2 = s.nextInt();
            System.out.printf("Case #%d: %d\n", i, temp1 + temp2);
        }
    }
}