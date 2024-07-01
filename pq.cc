#include<iostream>
#include<queue>
#include<vector>
using namespace std;

long long maxScore(vector<int>& nums1, vector<int>& nums2, int k){
	vector<pair<int, int> > vp;
        long long ans=0, sum=0;
        for(int i=0; i < nums1.size(); ++i){
            vp.push_back({nums2[i], nums1[i]});
        }
        sort(vp.begin(), vp.end(), greater<>());
	for(auto i : vp){
		std::cout<<i.first <<" "<<i.second<<std::endl;
	}
}

	
int main(){
/*	std::priority_queue<int> pq;
	pq.push(1);
	pq.push(2);
	pq.push(2);
	pq.push(1);
	for(int i =0; i < pq.size(); ++i){
		int temp = pq.top();
		pq.pop();
		std::cout<<temp <<std::endl;
	}
*/
	std::vector<int> v1.assign({4,2,3,1,1});
	std::vector<int> v2.assign({7,5,10,9,6});
	maxScore(v1, v2,5);
	return 1;
}
