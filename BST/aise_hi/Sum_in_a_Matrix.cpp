#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define mod 1000000007


 int matrixSum(vector<vector<int>>& nums) { 
        int n = nums.size();
        int m = nums[0].size();

        // Sorting the Matrix
        // sort(nums.begin(),nums.end());
        // cout<<"\n";
        // for(auto x:nums){
        //     for(auto y:x){
        //        cout<<y<<" ";
        //     }
        //    cout<<endl;
        // }

        for(int i=0;i<n;i++){
            sort(nums[i].begin(),nums[i].end());
        }

        //Checking whether the matrix is sorted or not
        // cout<<"\n";
        // for(auto x:nums){
        //     for(auto y:x){
        //        cout<<y<<" ";
        //     }
        //    cout<<endl;
        // }

        int maxi = -1; //-1 because the value of matrix >= 0. Given in constraint

        vector<int> v;

        //Running a loop till m is +ve number

        while(m > 0){
            //Finding the greatest element from each row and 
            for(int i=0;i<n;i++){
                maxi = max(maxi,nums[i][m-1]); 
            }
            //Storing maximum value to the vector v
            v.push_back(maxi);
            // Reasssigning value of maxi for next iteration.
            maxi=-1;          
            m--;
        }    

        int ans=0;
        for(auto x:v){
            ans +=x;
        }

        return ans;
 }

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
   
   cout<<matrixSum(matrix)<<endl;

      
    
    return 0;
}

/*
4 3
7 2 1
6 4 2
6 5 3
3 2 1

4 3
4 6 2
5 8 9
11 2 8
2 1 5

*/


/*
correct solution is
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();

        for(int i=0;i<n;i++){
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        }

        int ans = 0, temp =0;

        for(int i=0;i<m;i++){   // be carefull m ans n becouse we traves by row 
            temp=0;
            for(int j=0;j<n;j++){
                temp = max(temp, nums[j][i]);
            }
            ans+=temp;
        }
        return ans;
    }
};
*/