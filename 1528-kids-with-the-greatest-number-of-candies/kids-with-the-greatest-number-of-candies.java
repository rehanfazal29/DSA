import java.util.*;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        // ye OOPs ka concept hai  => List<Boolean> result = new ArrayList<>()

        List<Boolean> result = new ArrayList<>();

        int max = candies[0];

        // pahla aim ye hona chaye ki hm sab se phale max candies malum kare linear search se array ke andar 

        for (int i = 1; i < candies.length; i++) {
            if (candies[i] > max) {
                max = candies[i];
            }
        }

        for (int i = 0; i < candies.length; i++) {
            if (candies[i] + extraCandies >= max) {
                result.add(true);
            } else {
                result.add(false);
            }
        }

        return result;
    }
}