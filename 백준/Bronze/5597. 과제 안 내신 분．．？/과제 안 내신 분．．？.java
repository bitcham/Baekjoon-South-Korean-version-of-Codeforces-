import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[28];
        for(int i = 0; i < 28; i++){
            int temp = scanner.nextInt();
            arr[i] = temp;
        }
        for(int i = 1; i <= 30; i++){
            boolean flag = false;
            for(int j = 0; j < 28; j++){
                if(i == arr[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                System.out.println(i);
            }
        }
    }
}