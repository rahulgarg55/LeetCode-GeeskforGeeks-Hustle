class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> left, right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        left.push(num); //O(logn)
        right.push(-left.top());
        left.pop();
        
        if(left.size() < right.size()){ //make left size always bigger than right, for finding median
            left.push(-right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        return left.size()> right.size()? left.top(): 0.5*(left.top()-right.top()); //in right, numbers are negative
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */