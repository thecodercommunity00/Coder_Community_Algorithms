import java.util.HashMap;
import java.util.ArrayList;

public class Hashmap {


    public static void posInString(String str) {
        HashMap<Character,ArrayList<Integer>> map=new HashMap<>();

        for(int i=0;i<str.length();i++) {
            char ch=str.charAt(i);
            if(map.containsKey(ch)) {
                map.get(ch).add(i);
            }
            else {
                map.put(ch,new ArrayList<>());
                map.get(ch).add(i);
            }
        }

        for(int i=0;i<str.length();i++) {
            char ch=str.charAt(i);
            map.put(ch,(map.getOrDefault(ch,new ArrayList<>()).add(i)));
        }

        System.out.println(map);
    }

    public static void solve() {
        // freqMap;
        posInString("abcdefabcg67");
    }

    public static void main(String args[]) {
        solve();
    }
}