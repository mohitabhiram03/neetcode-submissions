class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        r = len(arr)-2
        maxx = arr[-1]
        arr[-1] = -1
        while(r >=0):
            if(maxx<arr[r]):
                maxx,arr[r] = arr[r], maxx
            else:
                arr[r] = maxx
            r-=1
        return arr