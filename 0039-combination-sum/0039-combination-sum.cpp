class Solution {
public:
    vector<vector<int>> vec;
    int target;
    
    void smartbacktracking(vector<int>& candidates, vector<int>& curr, int i, int total) {
        if (total == target) {
            vec.push_back(curr);
            return;
        }
        else if (i >= candidates.size() or total >= target) return;
        
        curr.push_back(candidates[i]);
        smartbacktracking(candidates, curr, i, total + candidates[i]);
        curr.pop_back();
        smartbacktracking(candidates, curr, i+1, total);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        this->target = target;
        
        vector<int> curr;
        
        smartbacktracking(candidates, curr, 0, 0);
        
        return vec;
    }
};