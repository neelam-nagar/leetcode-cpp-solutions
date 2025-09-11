class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int n = cardPoints.size();
          int currSum = 0;
        for (int i = n - k; i < n; i++) {
            currSum += cardPoints[i];
        }
                int maxPoints = currSum;
                for(int i=0;i<k;i++){
                    currSum += cardPoints[i]-cardPoints[n-k+i];
                     maxPoints = max(maxPoints, currSum);
        }
         return maxPoints;
    }
};