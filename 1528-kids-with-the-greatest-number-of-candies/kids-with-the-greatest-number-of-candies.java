import java.util.*;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        // List interface ka reference hai aur ArrayList uski implementation class hai.
        // Ye OOPs ke Polymorphism concept ka example hai.
        List<Boolean> result = new ArrayList<>();

        int max = candies[0];

        // Pahla aim ye hona chahiye ki hum sabse pehle array ke andar
        // Linear Search ki help se maximum candies find karein.
        for (int i = 1; i < candies.length; i++) {
            if (candies[i] > max) {
                max = candies[i];
            }
        }

        // Ab har child ke liye check karenge ki extraCandies dene ke baad
        // uske paas maximum candies ke barabar ya usse zyada candies hoti hain ya nahi.
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