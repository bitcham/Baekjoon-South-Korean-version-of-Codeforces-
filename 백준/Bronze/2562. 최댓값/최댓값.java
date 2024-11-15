

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[9];
        int mxIdx = 0;
        arr[0] = s.nextInt();
        for(int i = 1; i < 9; i++){
            arr[i] = s.nextInt();
            if(arr[mxIdx] < arr[i]) mxIdx = i;
        }
        System.out.println(arr[mxIdx]);
        System.out.println(mxIdx + 1);
    }
}
