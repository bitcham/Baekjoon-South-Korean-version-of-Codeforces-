
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] basket = new int[101];
        int basketN = s.nextInt();
        int time = s.nextInt();
        for(int i = 0; i < time; i++){
            int temp1 = s.nextInt();
            int temp2 = s.nextInt();
            int temp3 = s.nextInt();
            for(int j = temp1 - 1; j < temp2; j++) {
                basket[j] = temp3;
            }
        }

        for(int i = 0; i < basketN; i++){
            System.out.print(basket[i] + " ");
        }
    }
}
