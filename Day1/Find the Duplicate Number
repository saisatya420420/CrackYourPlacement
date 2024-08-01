/*
Since the problem specifies that you must solve it using only constant extra space (O(1) space complexity), you should consider using Floyd's Tortoise and Hare (Cycle Detection) algorithm. This algorithm is well-suited for finding a duplicate number in an array where numbers are within a certain range and allows you to solve the problem in linear time O(n) and constant space  O(1).

Here’s how Floyd's Tortoise and Hare algorithm works for this problem:

Phase 1: Finding the intersection point in the cycle

Use two pointers, the "tortoise" and the "hare". The tortoise moves one step at a time, while the hare moves two steps at a time. They will eventually meet at some point in the cycle.
Phase 2: Finding the entrance to the cycle

Reset one pointer to the start of the array, and keep the other pointer at the meeting point. Move both pointers one step at a time. The point where they meet again will be the starting point of the cycle, which corresponds to the duplicate number.

https://youtu.be/32Ll35mhWg0?feature=shared
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0],fast=nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        fast = nums[0];
        while(slow!=fast){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};
