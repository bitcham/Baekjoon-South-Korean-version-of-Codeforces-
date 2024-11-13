import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int[] b = new int[a];
        for(int i = 0; i < a; i++){
            b[i] = s.nextInt();
        }
        int c = s.nextInt();
        int cnt = 0;
        for(int i = 0; i < a; i++){
            if(c == b[i]) cnt++;
        }
        System.out.println(cnt);
        s.close();
    }
}