import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int quantity = s.nextInt();
        int sum = 0;
        for(int i = 0; i < quantity; i++){
            int temp1 = s.nextInt();
            int temp2 = s.nextInt();
            sum += temp1 * temp2;
        }

        if(sum == x){
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }
    }
}