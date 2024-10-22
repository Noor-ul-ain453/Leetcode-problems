#include <iostream>
using namespace std;

int main() 
{
   
   int singleNumber(vector<int>& nums) {
     int ans = 0 ; 
     for (int val : nums) {
        ans = ans ^ val ; 
     }  
    return ans ; 
    }

}