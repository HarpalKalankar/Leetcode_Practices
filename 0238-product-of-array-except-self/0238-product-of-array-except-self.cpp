class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1 ; 
        int j = 0;
        for (int i= 0 ; i < nums.size() ; i ++){
            if (nums.at(i) != 0){
                prod *= nums.at(i) ;
            }
            if (nums.at(i) == 0 ){
                j += 1; 
            }
        }
        for (int i = 0 ; i < nums.size() ; i ++){
            if (j == 1 ){
                if (nums.at(i) == 0){
                    nums.at(i) = prod ; 
                }
                else{
                    nums.at(i) = 0 ; 
                }
            }
            if (j == 0){
                nums.at(i) = prod/nums.at(i);
            }
            if (j >= 2){
                nums.at(i) = 0;
            }
        }return nums ; 
    }
};