#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int low, mid, high;
        const int size = numbers.size() -1;
        for(int i =0; i < numbers.size(); i++){
            int compliment = target - numbers[i];
            low = i+1;
            high = size;
            while(low <= high){
                mid = (low+high)/2;
                if(numbers[mid] == compliment){
                    return {i+1, mid+1};
                }else if(numbers[mid] > compliment){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }
        }
        return {};
    }
};

int main(){
	Solution sol;
	std::vector<int> vec{2,7,11,15};
	int target = 9;
	std::vector<int> result = sol.twoSum(vec, target);
	for(int i =0; i < result.size(); i++){
		std::cout << result[i] << " ";
	}
	std::cout<<std::endl;
	return 0;
}
