import java.util.HashMap;
import java.util.Map;

public class CanSum {
    public static boolean canSum(int n, int[] ls, Map<Integer, Boolean> dp) {
        if (dp.containsKey(n)) {
            return dp.get(n);
        }

        if (n == 0) {
            return true;
        }

        if (n < 0) {
            return false;
        }

        for (int i : ls) {
            if (canSum(n - i, ls, dp)) {
                dp.put(n, true);
                return true;
            }
        }

        dp.put(n, false);
        return false;
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 4};
        int[] arr2 = {2, 3};
        int[] arr3 = {5, 4, 3, 7};
        int[] arr4 = {7, 21};

        Map<Integer, Boolean> dp = new HashMap<>();
        System.out.println(canSum(7, arr1, dp));  // Output: false
        dp.clear();
        System.out.println(canSum(7, arr2, dp));  // Output: true
        dp.clear();
        System.out.println(canSum(7, arr3, dp));  // Output: true
        dp.clear();
        System.out.println(canSum(3000, arr4, dp));  // Output: false
    }
}

