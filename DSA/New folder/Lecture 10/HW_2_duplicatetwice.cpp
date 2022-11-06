//https://leetcode.com/problems/find-all-duplicates-in-an-array/
// find the duplicate in an arraay 
// for ex = arr = [1,2,2,1,3,4,5] n = 7 
// we have to print integer which appear twice i.e. 1 and 2

#include <iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

/*int findduplicate(int arr[], int size){
    vector<int> ans;
    for (int i = 0 ; i<size; i++){
        //if a^a = 0 means no of duplicate elements is 2
        if((arr[i]^arr[i+1])==0){
            ans.push_back(arr[i]);
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout << ans[i];
    }
    return ans;
}
*/


int main(){
    int size;
    cin >> size;

    int arr[100];
    cout << "Enter the elements ";
    int i = 0;
    int j = size -1 ;
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i<size; i++){
        //if a^a = 0 means no of duplicate elements is 2
        if((arr[i]^arr[i+1])==0){
            cout<<arr[i];
        }
    }
    
    //cout <<"Duplicate element is " << endl;
    //cout << findduplicate(arr,size);
    return 0;

}
//correct code
/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for (int i = 0; i<nums.size()-1;i++){
            //if a^a==0  (^ is xor) then it means element is appear twice
            if((nums[i]^nums[i+1])==0){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
}; 
*/