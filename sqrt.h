class Solution {
public:
  int mySqrt(double x) {
    // find a way to include decimals in binary search, and convert to integer
    // after. This only works for whole numbers
    int first = 0;
    int last = x;
    long int mid;
    int ans=-1;
    while (first <= last) {
      mid = (first + last) / 2.0;
      long int sq = mid*mid;
      if (sq == x) {
        return mid;
      }
      // if decimals were to be included, the below would be a function call for secondary binary search through the decimals, instead of mid being assigned to ans
      if (sq < x) {
      ans=mid;
        first = mid + 1;
      } else if (sq > x) {
        last = mid - 1;
      }
    
    }
    return ans;
  }
};