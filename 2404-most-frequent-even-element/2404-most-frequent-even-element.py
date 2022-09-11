class Solution(object):
    def mostFrequentEven(self, nums):
        d = dict();
        for i in nums:
            if i % 2 == 0:
                if i in d:
                    d[i] += 1
                else:
                    d[i] = 1
        
        min = float("inf");
        max = -1;
        for i in d:
            if d[i] > max:
                min = i;
                max = d[i];
            elif d[i] == max:
                if i < min:  
                    min = i;
                    max = d[i];
        if min == float("inf"):
            return -1;
        return min
                
        
                    
                    
        