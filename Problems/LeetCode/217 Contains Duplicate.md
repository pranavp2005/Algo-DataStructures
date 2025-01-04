# 217. Contains Duplicate

Date: February 24, 2023
Difficulty: Easy
Languages: Go
Link: https://leetcode.com/problems/contains-duplicate/
Topic: https://www.notion.so/Hashing-1a518bab11384f079cb6d615c3191b65, https://www.notion.so/Array-8baaeb0e179e470983bc37103011402c

# Question:

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

**Example 1:**

```
Input: nums = [1,2,3,1]
Output: true

```

**Example 2:**

```
Input: nums = [1,2,3,4]
Output: false

```

**Example 3:**

```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

```

**Constraints:**

- `1 <= nums.length <= 105`
- `109 <= nums[i] <= 109`

---

| Attempt No. | Time Taken |
| --- | --- |
|  |  |
|  |  |

# Attempt-1:

## Solution

```cpp

```

```go
func containsDuplicate(nums []int) bool {
    //we need to check if the number has been seen before and nothing else -> set data structure
    var exists = struct{}{}

    my_map := make(map[int]struct{})

    for _,num := range nums {
        if _, isPresent := my_map[num]; isPresent {
            return true
        }
        my_map[num]= exists
    }

    return false
}
```

## Break down the problem to solution points:

## Time and space complexity

## Where did you go wrong?

# Attempt-2:

## Solution

## Break down the problem to solution points:

## Time and space complexity

## Where did you go wrong?

[[LeetCode Solution] <Name>](217%20Contains%20Duplicate%20e2b2949ef1f74965a321c4390561d26f/%5BLeetCode%20Solution%5D%20Name%20a7bc4cd111e94153a3865cdbc25cff14.md)

# Revision:

## Solution

## Break down the problem to solution points:

## Time and space complexity

## Where did you go wrong?