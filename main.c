#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int getSum(vector<int>& nums) 
{
    return accumulate(nums.begin(),nums.end(),0);
}

int getAverage(vector<int>& nums) 
{
    return accumulate(nums.begin(),nums.end(),0)/nums.size();
}

int main() {
    vector<int> identical {42,53,62,1,214,65,25,7,86,5};
    cout << "Sum: " << getSum(identical) << endl;
    cout << "Average: " << getAverage(identical) << endl;
}