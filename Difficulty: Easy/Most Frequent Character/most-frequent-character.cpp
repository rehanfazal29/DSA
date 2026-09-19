class Solution {
	public:
	char getMaxOccuringChar(string& s) {
		
		int arr[26] = {0};
		
		// Frequency count
		for (int i = 0; i < s.length(); i++) {
			char ch = s[i];
			int number = ch - 'a';
			arr[number]++;
		}
		
		int max = -1;
		int ans = 0;
		
		for (int i = 0; i < 26; i++) {
			
			if (arr[i] > max) {
				max = arr[i];
				ans = i;
			}
		}
		
		return 'a' + ans;
	}
};
