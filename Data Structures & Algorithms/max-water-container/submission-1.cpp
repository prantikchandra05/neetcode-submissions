class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int low = 0, high = heights.size()-1;
        while(low<high){
            int curr = min(heights[low],heights[high])*(high-low);
            area = max(area,curr);
            if(heights[low]<heights[high]){
                low++;
            }
            else if(heights[low]>heights[high]){
                high--;
            }
            else if(heights[high]==heights[low]){
                if(heights[low+1]>heights[high-1]){
                    low++;
                }
                else{
                    high--;
                }
            }
        }

        return area;
    }
};
