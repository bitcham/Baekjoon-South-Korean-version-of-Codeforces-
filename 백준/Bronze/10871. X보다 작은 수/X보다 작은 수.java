

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int[] arr = new int[10000];
        for(int i = 0; i < a; i++){
            arr[i] = s.nextInt();
            if(arr[i] < b){
                System.out.print(arr[i] + " ");
            }
        }
    }
}
