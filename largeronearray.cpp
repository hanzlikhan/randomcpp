#include<iostream>
using namespace std;


int main() {
  int nums[] = {5,4,9,12,8};
   
  int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array:";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    
  cout << "\nLargest element of the said array: "<<(nums, n);
  return 0;
}

