class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int idx=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx= i;
                break;
            }
        }

        if(idx<0){
            sort(nums.begin(), nums.end());
        }

        else{
        //sort elements after pivot
        sort(nums.begin()+idx+1 , nums.end());

        //swap
        for(int i=idx+1; i<n; i++){
            if(nums[idx]<nums[i]){
        int temp = nums[idx];
        nums[idx] = nums[i];
        nums[i] = temp;
        break;

            }
        }

        }


    }
};