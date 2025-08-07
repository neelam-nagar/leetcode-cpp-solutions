class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       hashmap={}
       for i in range(len(nums)):
        num = nums[i]
        find = target - nums[i]
        if find in hashmap:
            return[hashmap[find],i]

        hashmap[num] = i