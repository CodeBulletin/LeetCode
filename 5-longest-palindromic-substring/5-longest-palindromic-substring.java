class Solution {
    public class Palindrome {
        public int start;
        public int end;
        public int length;
        public Palindrome(int start, int end) {
            this.start = start;
            this.end = end;
            this.length = end - start + 1;
        }
        public String toString(String s) {
            return s.substring(start, end + 1);
        }
    }
    private Palindrome getPalindrome(char[] arr, int start, int end) {
        while(start - 1 >=0 && end + 1 < arr.length && arr[start - 1] == arr[end + 1]) {
            start--;
            end++;
        }
        return new Palindrome(start, end);
    }
    public String longestPalindrome(String s) {
        if (s == null || s.length() == 1) return s;
        char[] arr = s.toCharArray();
        Palindrome max = new Palindrome(0, 0);              
        int mid = (arr.length - 1) >> 1;
        int l = mid; int r = mid + 1;
        while (l >= 0 || r < arr.length) {
            if (l >= 0) {
                Palindrome even = getPalindrome(arr, l + 1, l); // i i + 1
                Palindrome odd = getPalindrome(arr, l, l);
                if (even.length > max.length) {
                    max = even;
                }
                if (odd.length > max.length) {
                    max = odd;
                }
				// check if the length is more than potential rest of length
                if (max.length >= (l << 1)) break;
                l--;
            }
            if (r < arr.length) {
                Palindrome even = getPalindrome(arr, r + 1, r); // i i + 1
                Palindrome odd = getPalindrome(arr, r, r);
                if (even.length > max.length) {
                    max = even;
                }
                if (odd.length > max.length) {
                    max = odd;
                }
				// check if the length is more than potential rest of length
                if (max.length >= ((arr.length - r) << 1)) break;
                r++;
            }
        }
        return max.toString(s);
    }
    
}
