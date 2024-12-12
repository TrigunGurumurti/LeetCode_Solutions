class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
    long long noOfGifts = 0;
    priority_queue<int> maxHeap;
    for(auto it: gifts)
        maxHeap.push(it);
    while(k--)
    {
        maxHeap.push(sqrt(maxHeap.top()));
        maxHeap.pop();
    }    
    while(maxHeap.size() > 0)
    { 
        noOfGifts += maxHeap.top();
        maxHeap.pop();
    }
    return noOfGifts;
    }
};