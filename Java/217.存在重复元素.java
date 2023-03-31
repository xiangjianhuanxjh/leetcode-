class Solution {
    public boolean containsDuplicate(int[] nums) {
        int max = 0;
        int min = 0;
        for(int i : nums){
            if(i > max){
                max = i;
            }
            if(i < min){
                min = i;
…        }
        for(int i : a){
            if(i>1){
                return true;
            }
        }
        return false;
    }
}
