class Solution {
public:
    int maxArea(vector<int>& height) {
    
    int st = 0; 
    int end = height.size() - 1; 
    int m = 0; 
    while(st < end) { 
        
        int water = min(height[st], height[end]) * (end - st); 
        m = max(m, water); 
        if (height[st] < height[end]) { 
            st = st + 1; 
        } else { 
            end = end - 1; 
        } 
    } 
    return m; 
}
};