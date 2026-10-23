# DSA
Daily practice around DSA. All of these problems I solve are from TakeUForward sheets.

## Daily Tracker

| Day | Problem | LeetCode | Solution | Approach |
|-----|---------|----------|----------|----------|
| 1 | Maximum Subarray | [53](https://leetcode.com/problems/maximum-subarray/) | [KadaneAlgorithm.cpp](Day%201/KadaneAlgorithm.cpp) | Kadane's algorithm |
| 1 | Majority Element | [169](https://leetcode.com/problems/majority-element/) | [MajorityElement1.cpp](Day%201/MajorityElement1.cpp) | Boyer-Moore voting |
| 1 | Majority Element II | [229](https://leetcode.com/problems/majority-element-ii/) | [MajorityElement2.cpp](Day%201/MajorityElement2.cpp) | Boyer-Moore voting (two candidates) |
| 1 | Maximum Product Subarray | [152](https://leetcode.com/problems/maximum-product-subarray/) | [maximumSubarrayProduct.cpp](Day%201/maximumSubarrayProduct.cpp) | Prefix/suffix products |
| 1 | Next Permutation | [31](https://leetcode.com/problems/next-permutation/) | [nextPermutation.cpp](Day%201/nextPermutation.cpp) | Find pivot, swap, reverse suffix |
| 1 | Sort Colors | [75](https://leetcode.com/problems/sort-colors/) | [sortArray012.cpp](Day%201/sortArray012.cpp) | Dutch national flag |
| 1 | 3Sum | [15](https://leetcode.com/problems/3sum/) | [ThreeSum.cpp](Day%201/ThreeSum.cpp) | Sort + two pointers |
| 3 | Find Peak Element | [162](https://leetcode.com/problems/find-peak-element/) | [findPeakElement1dArray.cpp](Day%203/findPeakElement1dArray.cpp) | Walk uphill from the middle |
| 3 | Find Minimum in Rotated Sorted Array | [153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | [minimumInRotatedSortedArray.cpp](Day%203/minimumInRotatedSortedArray.cpp) | Binary search on the rotation point |
| 3 | Search a 2D Matrix II | [240](https://leetcode.com/problems/search-a-2d-matrix-ii/) | [searchIn2dSortedMatrix.cpp](Day%203/searchIn2dSortedMatrix.cpp) | Staircase search from top-right |
| 3 | Search in Rotated Sorted Array II | [81](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | [searchInRotatedSortedArrayII.cpp](Day%203/searchInRotatedSortedArrayII.cpp) | Binary search, shrink on duplicates |
| 3 | Single Element in a Sorted Array | [540](https://leetcode.com/problems/single-element-in-a-sorted-array/) | [singleOccuerenceNumberInBetweenDuplicates.cpp](Day%203/singleOccuerenceNumberInBetweenDuplicates.cpp) | Binary search on index parity |
| 3 | Nth Root of a Number | — | [NthRootOfaNumber.cpp](Day%203/NthRootOfaNumber.cpp) | Binary search on the answer |
| 4 | Koko Eating Bananas | [875](https://leetcode.com/problems/koko-eating-bananas/) | [kokoEatingBananas.cpp](Day%204/kokoEatingBananas.cpp) | Binary search on eating rate |
| 4 | Aggressive Cows | — (similar: [1552](https://leetcode.com/problems/magnetic-force-between-two-balls/)) | [aggresiveCows.cpp](Day%204/aggresiveCows.cpp) | Binary search on minimum distance |
| 4 | Book Allocation | — (similar: [410](https://leetcode.com/problems/split-array-largest-sum/)) | [bookAllocation.cpp](Day%204/bookAllocation.cpp) | Binary search on max pages |
| 4 | Median in a Row-Wise Sorted Matrix | — | [medianInRowSortedMatrix.cpp](Day%204/medianInRowSortedMatrix.cpp) | Binary search on value, count with upper bound per row |
| 5 | Median of Two Sorted Arrays | [4](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [medianOf2SortedArrays.cpp](Day%205/medianOf2SortedArrays.cpp) | Binary search on partition of the smaller array |
| 5 | K-th Element of Two Sorted Arrays | — | [kthElementOf2SortedArrays.cpp](Day%205/kthElementOf2SortedArrays.cpp) | Binary search on partition with bounded range |
| 5 | Longest Substring Without Repeating Characters | [3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [longestSubstringWithoutRepeatingChars.cpp](Day%205/longestSubstringWithoutRepeatingChars.cpp) | Sliding window |
| 5 | 4Sum | [18](https://leetcode.com/problems/4sum/) | [4Sum.cpp](Day%205/4Sum.cpp) | Sort + two fixed + two pointers |
| 5 | Maximum Points You Can Obtain from Cards | [1423](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/) | [maximumPointsFromCardsFromFrontAndBack.cpp](Day%205/maximumPointsFromCardsFromFrontAndBack.cpp) | Sliding window: total minus minimum window of n-k |
| 6 | Two Sum | [1](https://leetcode.com/problems/two-sum/) | [2Sum.cpp](Day%206/2Sum.cpp) | Hash map of seen values |
| 6 | Find Peak Element | [162](https://leetcode.com/problems/find-peak-element/) | [findPeakElement.cpp](Day%206/findPeakElement.cpp) | Walk uphill from the middle (same as Day 3) |
| 6 | Longest Subarray with Sum K | — (similar: [325](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)) | [longestSubarrayWithSumK.cpp](Day%206/longestSubarrayWithSumK.cpp) | Prefix sums with first-occurrence map |
| 6 | Merge Sorted Array | [88](https://leetcode.com/problems/merge-sorted-array/) | [merge2SortedArrays.cpp](Day%206/merge2SortedArrays.cpp) | Two pointers from the back |
| 6 | Trapping Rain Water | [42](https://leetcode.com/problems/trapping-rain-water/) | [trappingRainwater.cpp](Day%206/trappingRainwater.cpp) | Two pointers with running left/right max |
| 7 | Count Inversions | — | [countInversions.cpp](Day%207/countInversions.cpp) | Merge sort, count while merging |
| 7 | Count Subarrays with XOR K | — | [countSubarrayWithXorK.cpp](Day%207/countSubarrayWithXorK.cpp) | Prefix XOR + frequency map |
| 7 | Subarray Sum Equals K | [560](https://leetcode.com/problems/subarray-sum-equals-k/) | [countSubarraysWithGivenSum.cpp](Day%207/countSubarraysWithGivenSum.cpp) | Prefix sum + frequency map |
| 7 | Longest Consecutive Sequence | [128](https://leetcode.com/problems/longest-consecutive-sequence/) | [longestConsecutiveIntegers.cpp](Day%207/longestConsecutiveIntegers.cpp) | Hash set, start only at sequence beginnings |
| 7 | Reverse Pairs | [493](https://leetcode.com/problems/reverse-pairs/) | [reversePairs.cpp](Day%207/reversePairs.cpp) | Merge sort, count pairs before merging |
| 8 | Longest Substring with K Distinct Characters | — (similar: [340](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)) | [longestSubstringWithKdistinctChars.cpp](Day%208/longestSubstringWithKdistinctChars.cpp) | Sliding window with frequency map |
| 8 | Max Consecutive Ones III | [1004](https://leetcode.com/problems/max-consecutive-ones-iii/) | [maxConsecutiveOnesIII.cpp](Day%208/maxConsecutiveOnesIII.cpp) | Sliding window, at most k zeros |
| 8 | Minimum Window Substring | [76](https://leetcode.com/problems/minimum-window-substring/) | [maxWindowSubstring.cpp](Day%208/maxWindowSubstring.cpp) | Sliding window with character counts |
