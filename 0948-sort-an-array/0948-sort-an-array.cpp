class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of left subarray
    int n2 = right - mid;  // Size of right subarray

    // Create temporary arrays
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArr[i] = nums[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = nums[mid + 1 + i];

    // Merge two sorted subarrays
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j])
            nums[k++] = leftArr[i++];
        else
            nums[k++] = rightArr[j++];
    }

    // Copy remaining elements
    while (i < n1) nums[k++] = leftArr[i++];
    while (j < n2) nums[k++] = rightArr[j++];
}

// Merge Sort function
void mergeSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Find the middle point
        mergeSort(nums, left, mid);  // Sort left half
        mergeSort(nums, mid + 1, right);  // Sort right half
        merge(nums, left, mid, right);  // Merge sorted halves
    }
}

// Sorting function
vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}


};