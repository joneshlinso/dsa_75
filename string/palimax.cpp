string longestPalindrome(string s) {
    int n = s.length();
    string result = "";

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Check if s[i..j] is palindrome
            int left = i, right = j;
            bool isPal = true;

            while (left < right) {
                if (s[left] != s[right]) {
                    isPal = false;
                    break;
                }
                left++;
                right--;
            }

            // If palindrome and longer than current best
            if (isPal && (j - i + 1) > result.length()) {
                result = s.substr(i, j - i + 1);
            }
        }
    }

    return result;
}
