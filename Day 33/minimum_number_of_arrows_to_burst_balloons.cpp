//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/solutions/7069211/simple-c-solution


class Solution {
    public:
        /*
           Problem: Given a list of balloon intervals, find the minimum number of
           arrows required to burst all balloons. An arrow can burst all balloons
           that overlap with its position.
    
           Intuition:
            - Sort the intervals based on their start points.
            - Use a greedy approach to track overlapping intervals.
            - If the current balloon starts after the previous one ends, it means no
           overlap.
              -> We need a new arrow.
            - If it overlaps, merge the intervals to maintain the smallest
           overlapping range.
              -> This ensures one arrow can burst all overlapping balloons.
    
            Example:
            Input: [[10,16],[2,8],[1,6],[7,12]]
            Sorted: [[1,6],[2,8],[7,12],[10,16]]
            - [1,6] and [2,8] overlap => merge to [2,6]
            - [7,12] does not overlap with [2,6] => new arrow, merge [7,12]
            - [10,16] overlaps with [7,12] => merge to [10,12]
            Result: 2 arrows
        */
        int findMinArrowShots(vector<vector<int>>& points) {
            int n = points.size();
            if (n == 0)
                return 0;
    
            // Sort intervals by start point
            sort(points.begin(), points.end());
    
            // Initialize with the first balloon interval
            vector<int> prev = points[0];
            int cnt = 1; // At least one arrow is needed
    
            for (int i = 1; i < n; i++) {
                int currStart = points[i][0];
                int currEnd = points[i][1];
    
                int prevStart = prev[0];
                int prevEnd = prev[1];
    
                if (currStart > prevEnd) {
                    // No overlap: need a new arrow
                    cnt++;
                    prev = points[i]; // Update to current interval
                } else {
                    // Overlap: merge intervals to keep the overlapping range and
                    // mark it prev
                    prev[0] = max(currStart, prevStart);
                    prev[1] = min(currEnd, prevEnd);
                }
            }
    
            return cnt;
        }
    };