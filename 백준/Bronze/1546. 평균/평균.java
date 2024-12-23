import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        double[] arr = new double[n];
        double max = 0;
        for(int i = 0; i < arr.length; i++){
            double temp = scanner.nextDouble();
            arr[i] = temp;
            if(max < temp){
                max = temp;
            }
        }
        double sum = 0;
        for(int i = 0; i < n; i++){
            sum += getSum(max, arr[i]);
        }

        System.out.println(sum / n);

    }

    private static double getSum(double max, double arr) {
        return arr / max * 100;
    }

}