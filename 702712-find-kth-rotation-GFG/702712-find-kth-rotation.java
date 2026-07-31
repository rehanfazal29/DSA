class Solution {
	public static int findKRotation(int[] arr) {
		// Code here
		int pivot = findpivot(arr);
		return pivot + 1;
	}
	
	public static int findpivot(int[] arr) {
		
		int start = 0;
		int end = arr.length - 1;
		
		while (start <= end) {
			
			int mid = start + (end - start)/2;
			
			if (mid<end && arr[mid]>arr[mid + 1]) {
				return mid;
			}
			if (mid>start && arr[mid]<arr[mid - 1]) {
				return mid - 1;
			}
			if (arr[start] >= arr[mid]) {
				end = mid - 1;
				
			}
			else {
				start = mid + 1;
				
			}
			
		}
		return -1;
		
	}
	
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna