class Solution {
public:
    
    // o(n^2) not good enough, results in TLE
    int maxArea2(vector<int>& height) {
        int max = 0;
        for (int i = 0 ; i < height.size();i++){
            for (int j = i+1 ; j<height.size();j++){
                if (abs(i-j)*(min(height[i], height[j])) > max){
                    max = abs(i-j)*(min(height[i], height[j]));
                }
            }
        }
        return max;
    }

    int maxArea(vector <int>& height) {
        int maxArea = 0;
        int l = 0;
        int r = height.size()-1;
        while (l < r) {
            maxArea = max(maxArea, abs(l-r)*(min(height[l], height[r])));
            
            // move the smaller index
            if (height[l] < height[r]){
                l++;
            }
            else {
                r--;
            }
        }
        return maxArea;
    }
};