class Solution {
    public int longestPalindrome(String s) {
        int[] freq = new int[128];
        int length = 0;
        boolean hasOdd = false;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            freq[ch]++;
        }
        for(int i=0;i<freq.length;i++){
            if(freq[i] % 2 == 0){
                length += freq[i];
            }
            else{
                length += freq[i] -1;
                hasOdd = true;
            }
        }
        if(hasOdd){
            length++;
        }
        return length;
        
    }
}