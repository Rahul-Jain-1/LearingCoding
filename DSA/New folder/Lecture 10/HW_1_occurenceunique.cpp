// https://leetcode.com/problems/unique-number-of-occurrences/
//leetcode problem
//write solution is done on website
//niche wala solution galat output de rha hai
// right solution at the end of code daal rakha hai 
#include<iostream>
#include<vector>
using namespace std;

int uniqueoccurence(int arr[], int size){
    vector<int> arr1(size,false);
    for (int i = 0 ; i<size ; i++){
        if (arr1[i] == true){
            continue;
        }
        int c = 1;
        for(int j =i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr1[j] = true;
                c++;
            }
        }
        arr1.push_back(c) ;
        
    }
    int ans = 0;
    for(int i = 0;i<arr1.size();i++){
        
        if(arr1[i] == arr1[i+1]){
            return 0;
            }
        

    }
    return 1;

}

int main(){
    int size;
    cin >> size;
    int arr[100];
    cout << "Enter the elements ";
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }

    cout<<uniqueoccurence(arr,size);
    return 0;

}
/*
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        vector<int> z;
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i<size){ 
            int c =1 ;
            for(int j =i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    c++;
                }
                else{
                    break;
                }
            }   
            
            z.push_back(c) ;
            i = i + c;

        }
        sort(z.begin(),z.end());
        for(int i = 0;i<z.size()-1;i++){
            if(z[i]==z[i+1]){
                return false;
            }   
        }
        return true;
    }
};
 */