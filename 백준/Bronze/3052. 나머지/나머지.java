import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Map<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < 10; i++){
            int temp = scanner.nextInt();
            if(mp.containsKey(temp % 42)){
                mp.put(temp % 42, mp.get(temp % 42) + 1);
            } else {
                mp.put(temp % 42, 1);
            }
        }
        int count = 0;
        for (Integer integer : mp.keySet()) {
            count++;
        }
        System.out.println(count);
    }
}