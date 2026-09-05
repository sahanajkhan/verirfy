class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<int> output;

        for(int i = 0; i < n; i++){

    int ans = -1;

    // Find nums1[i] inside nums2
    for(int j = 0; j < m; j++){

        if(nums1[i] == nums2[j]){

            // Search to the right
            for(int k = j + 1; k < m; k++){

                if(nums2[k] > nums2[j]){
                    ans = nums2[k];
                    break;
                }
            }

            break;
        }
    }

    output.push_back(ans);
}
            
           
        

        return output;
    }
};