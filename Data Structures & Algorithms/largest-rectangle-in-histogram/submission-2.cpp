class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (st.empty() || heights[st.top()] <= heights[i])
                st.push(i);
            else {
                while (!st.empty() && heights[st.top()] > heights[i]) {
                    int ind = st.top();
                    st.pop();
                    if (!st.empty())
                        maxarea = max(maxarea, (i - st.top() - 1) * heights[ind]);
                    else
                        maxarea = max(maxarea, (i) * heights[ind]);
                }
                st.push(i);
            }
        }
        while (!st.empty()) {
            int ind = st.top();
            st.pop();
            if (!st.empty())
                maxarea = max(maxarea, (n - st.top() - 1) * heights[ind]);
            else
                maxarea = max(maxarea, n * heights[ind]);
        }
        return maxarea;
    }
};
