import itertools

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        DigitsMap = {'2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'}
        if len(digits) == 0: 
            return []
        
        combs = list(DigitsMap[digits[0]])
        for i in range(1, len(digits)):
            combs = itertools.product(combs, list(DigitsMap[digits[i]]))
            combs = [''.join(i) for i in combs]
        return combs