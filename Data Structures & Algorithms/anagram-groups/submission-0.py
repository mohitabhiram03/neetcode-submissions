class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)

        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            
            key = ",".join(map(str, count))
            res[key].append(s)
        
        ans = []
        for lst in res.values():
            ans.append(lst)
        return ans