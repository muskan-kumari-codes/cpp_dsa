#include <iostream>
#include <vector>
#include <algorithm>
int binarySearch(vector<int> arr[], int x) {
int low = 0, high = arr.size() - 1;
while (low <= high) {
int mid = (low + high) / 2;
if (arr[mid] == x) return mid;
else if (x < arr[mid]) low = mid + 1;
else high = mid - 1;
}
return -1;
}
