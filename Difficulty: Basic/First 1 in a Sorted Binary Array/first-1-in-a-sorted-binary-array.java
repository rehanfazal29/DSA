class Solution {
	
	public int firstIndex(int arr[]) {
		// code here
		int ans = -1;
		int target = 1;
		ans = binarysearch(arr, target, true);
		return ans;
	}
	public int binarysearch(int[] arr, int target, boolean searchleft) {
		
		int ans = -1;
		int start = 0;
		int end = arr.length - 1;
		
		while (start <= end) {
			int mid = start + (end - start)/2;
			
			if (target<arr[mid]) {
				end = mid - 1;
			}
			else if (target>arr[mid]) {
				start = mid + 1;
				
			}
			else {
				ans = mid;
				if (searchleft) {
					end = mid - 1;
				}
				
			}
		}
		return ans;
	}
	
}
