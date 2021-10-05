import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import java.util.ArrayList;
// import java.util.List;

public class rr {

    public static void main(String args[]) {
        // A ref1 = new C();
        // B ref2 = (B) ref1;
        // System.out.println(ref2.f());
        // int arr[] = { -3, 1, 2, 1, 4, 1, 3, 3, 2, -1 };
        // my(arr);
        if (count < 3) {
            count++;
            String[] a = {"A", "B"};
            main(a);
        } else {
            return;
        }
        System.out.println(count);

    }

    static int count = 0;

    public static void my(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        List<Map.Entry<Integer, Integer>> list = new ArrayList<>(map.entrySet());
        Collections.sort(list,
                (a, b) -> a.getValue().equals(b.getValue()) ? b.getKey() - a.getKey() : a.getValue() - b.getValue());

        int index = 0;
        int[] res = new int[nums.length];
        for (Map.Entry<Integer, Integer> entry : list) {
            int count = entry.getValue();
            int key = entry.getKey();

            for (int i = 0; i < count; i++) {
                res[index++] = key;
            }
        }
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }
    }
}
