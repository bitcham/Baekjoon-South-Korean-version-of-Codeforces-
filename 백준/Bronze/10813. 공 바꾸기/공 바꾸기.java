

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] arr = new int[n+1];
        for(int i = 1; i <= n; i++){
            arr[i] = i;
        }
        while(m > 0){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            m--;
        }
        for (int i = 1; i <= n;i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
