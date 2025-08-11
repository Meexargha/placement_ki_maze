class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
         int arr[0];
         int largest = arr[0];
        for(int i= 1; i<arr.size() ;i++){
            
            if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
    }
};