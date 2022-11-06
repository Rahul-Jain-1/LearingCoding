#include<iostream>
#include<vector>
using namespace std;
/*
vector<int> arrayintersection(int arr1[],int size1, int arr2[], int size2){
    vector<int> ans;
    int i =0, j =0;
    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }

    }
    for(int i =0;i<ans.size();i++){
        ans.pop_back();
    }
    return ans;

}
*/
int main(){
    int size1;
    cout << "Enter the size of Array 1 : ";
    cin >> size1;
    int arr1[100];
    cout << "Enter the elements of Array 1 ";
    for(int i = 0;i<size1;i++){
        cin >> arr1[i];
    }
    int size2;
    cout << "Enter the size of Array 2 : ";
    cin >> size2;
    int arr2[100];
    cout << "Enter the elements of Array 2 ";
    for(int i = 0;i<size2;i++){
        cin >> arr2[i];
    }
    vector<int> ans;
    int i =0, j =0;
    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }

    }
    for(int i =0;i<ans.size();i++){
        cout << ans[i];
    }

    //cout << arrayintersection(arr1,size1,arr2,size2);
    return 0;
}