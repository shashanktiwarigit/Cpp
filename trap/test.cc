#include<vector>
#include<iostream>
void damn(std::vector<int>& height, std::vector<int>& left, std::vector<int>& right){
	int mx = -1;
	int n = height.size();
	for(int i =0; i<n; ++i){
		left[i] = mx;
		mx = std::max(mx, height[i]);
	}
	mx = -1;
	for(int i =n-1; i>=0; --i){
		right[i] = mx;
		mx = std::max(mx, height[i]);
	}
	for(int i =0; i < n; ++i){
		std::cout << left[i];
	}
	std::cout<<std::endl;
	for(int i =0; i < n; ++i){
		std::cout <<right[i];
	}
	std::cout<<std::endl;
	return;
}

int trap(std::vector<int>& height){
	int ans =0;
	int n = height.size();
	std::vector<int> right(n);
	std::vector<int> left(n);
	damn(height, right, left);
	for(int i =0; i <n; ++i){
		if(std::min(right[i], left[i]) > height[i]){
			ans += std::min(right[i], left[i]) -height[i];
		}	
	}
	return ans;
}

int main(){
	std::vector<int> height = {4,2,0,3,2,5};
	std::cout<<trap(height)<<std::endl;
	return 0;
}
