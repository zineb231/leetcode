class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count =0
        for i in range(len(nums)):
            if nums[count] == val :
                del nums[count]
            else:
                count+=1   
        return len(nums)
        