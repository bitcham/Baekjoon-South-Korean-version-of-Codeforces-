

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int mx = -987654321;
        int mn = 987654321;
        for(int i = 0; i < a; i++) {
            int temp = s.nextInt();
            if (temp > mx) mx = temp;
            if (temp < mn) mn = temp;
        }
        System.out.println(mn + " " + mx);
    }
}
