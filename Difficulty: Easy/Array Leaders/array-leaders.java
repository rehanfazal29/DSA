import java.util.*;
class Solution {
	public static ArrayList<Integer> leaders(int arr[]) {
		// code here
		ArrayList<Integer> result = new ArrayList<>();
		int n = arr.length - 1;
		int max = arr[n];
		result.add(max);
		
		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] >= max) {
				max = arr[i];
				result.add(arr[i]);
			}
		}
		
		Collections.reverse(result);
		return result;
		
	}
	
}
